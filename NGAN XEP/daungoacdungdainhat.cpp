#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		int dem = 0;
		stack<int> stk;
		for(int i=0;i<s.size();i++)
		{
			if(s[i] == '(') stk.push(i);
			else
			{
				if(!stk.empty())
				{
					int top = stk.top(); stk.pop();
					if(s[top] == '('){
						if(stk.empty()) dem = i+1;
						else dem = max(dem, i-stk.top());
					}	
					else stk.push(i);
				}	
				else stk.push(i);
			} 
		}
		cout << dem << endl;
	}
}
