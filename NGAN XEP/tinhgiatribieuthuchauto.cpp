#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<int> stk;
		for(int i=0;i<=s.size()-1;i++){
			if(s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '%' || s[i] == '*' || s[i] == '^'){
				int a= stk.top(); stk.pop();
				int b = stk.top(); stk.pop();
				int tmp;
				if(s[i] == '+') tmp = b + a;
				else if(s[i] == '-') tmp = b-a;
				else if(s[i] == '*') tmp = b*a;
				else if(s[i] == '/') tmp = b/a;
				else if(s[i] == '%') tmp = b%a;
				else {
					tmp = b;
					for(int j=0;j<a-1;j++) tmp *= b;
				}
				stk.push(tmp);
			}
			else stk.push((int)(s[i] - '0'));
		}
		cout << stk.top() << endl;
	}
}
