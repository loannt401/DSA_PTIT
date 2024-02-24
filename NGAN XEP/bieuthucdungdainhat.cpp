#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		stack<char> stk;
		int dem=0;
		for(int i=0;i<s.size();i++){
			if(s[i] == '(') stk.push(s[i]);
			else 
			{
				if(!stk.empty()) 
				{
					dem++;
					stk.pop();
				}
			}
		}
		cout << dem*2 << endl;
	}
}

