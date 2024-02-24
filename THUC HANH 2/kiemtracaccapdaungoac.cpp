#include<bits/stdc++.h>
using namespace std;
int check(string s){
	stack<char> st;
	for(int i=0;i<s.size();i++){
		if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
			st.push(s[i]);
		}
		else {
			if(st.empty()) return 0;
			else {
				if(s[i] == ')' && st.top() == '(') st.pop();
				else if(s[i] == ']' && st.top() == '[') st.pop();
				else if(s[i] == '}' && st.top() == '{') st.pop();
				else return 0;
			}
			
		}
	}
	if(!st.empty()) return 0;	
	return 1;
}

main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		if(check(s)) cout << "true" << endl;
		else cout << "false" << endl;
	}
}
