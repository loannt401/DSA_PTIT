#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		int dem = 0;
		stack<char> stk;
		for(int i=0;i<s.size();i++)
		{
			if(s[i] == '(') stk.push(s[i]);
			else 
			{
				if(stk.empty())
				{
					dem++; stk.push('(');
				}
				else 
				{
					stk.pop();
				}
			}
		}
		cout << dem + stk.size()/2 << endl;
		while(!stk.empty()) stk.pop();
	}
}
