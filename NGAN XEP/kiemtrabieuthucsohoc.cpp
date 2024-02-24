#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin, s);
		stack<char> stk;
		bool ok;
		for(int i=0;i<s.size();i++){
			if(s[i] == ')'){
				char top = stk.top(); stk.pop();
				ok = true;
				while(top != '('){
					if(top == '+' || top == '-' || top == '*' || top == '/') ok = false;
					top = stk.top(); stk.pop();
				}
				if(ok) break;
			}
			else stk.push(s[i]);
		}
		if(ok) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
