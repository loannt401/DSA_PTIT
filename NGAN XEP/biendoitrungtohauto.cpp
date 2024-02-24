#include<bits/stdc++.h>
using namespace std;
int check(char x){
	if(x == '+' || x == '-') return 1;
	else if(x == '/' || x == '*' || x == '%') return 2;
	else if(x == '^') return 3;
	return 0;
}
void trungto_hauto(string s){
	string ans = "";
	stack<char> stk;
	for(int i=0;i<s.size();i++){
		if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) ans += s[i];
		else if(s[i] == '(') stk.push(s[i]);
		else if(s[i] == ')'){
			while(!stk.empty() && stk.top() != '('){
				ans += stk.top();
				stk.pop();
			}
			stk.pop();
		} 
		else if( s[i] == '-' || s[i] == '+' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^'){
			while(!stk.empty() && check(s[i]) <= check(stk.top())){
				ans += stk.top();
				stk.pop();
			}		
			stk.push(s[i]);
		}
	}
	while(!stk.empty()){
		if(stk.top() != '(') ans += stk.top();
		stk.pop();
	}
	cout << ans << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		trungto_hauto(s);
	}
}
