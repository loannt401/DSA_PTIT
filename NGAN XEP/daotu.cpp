#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		stringstream ss(s);
		string token;
		stack<string> stk;
		while(ss >> token){
			stk.push(token);
		}
		while(!stk.empty()){
			cout << stk.top() << " ";
			stk.pop();
		}
		cout << endl;
	}
}
