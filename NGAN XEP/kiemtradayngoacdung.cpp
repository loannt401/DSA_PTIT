#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<char> stk;
		bool ok = true;
		for(int i=0;i<s.size();i++){
			if(s[i] == '(' || s[i] == '[' || s[i] == '{') stk.push(s[i]);
			else {
				if(stk.empty()){
					ok = false; break;
				}
				else {
					if(s[i] == ')' && stk.top() == '(') stk.pop();
					else if(s[i] == ']' && stk.top() == '[') stk.pop();
					else if(s[i] == '}' && stk.top() == '{') stk.pop();
					else {
						ok = false;
						break;
					}
				} 
			}
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
