#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<int> stk;
		for(int i=0;i<sisize();i++){
			if(s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '%' || s[i] == '*' || s[i] == '^'){
				int a= stk.top(); stk.pop();
				int b = stk.top(); stk.pop();
				int tmp;
				if(s[i] == '+') tmp = a+b;
				else if(s[i] == '-') tmp = a-b;
				else if(s[i] == '*') tmp = b*a;
				else if(s[i] == '/') tmp = a/b;
				else if(s[i] == '%') tmp = a%b;
				else {
					tmp = a;
					for(int j=0;j<b-1;j++) tmp *= a;
				}
				stk.push(tmp);
			}
			else stk.push((int)(s[i] - '0'));
		}
		cout << stk.top() << endl;
	}
}
