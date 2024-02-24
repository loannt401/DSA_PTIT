#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long a[100005];
		for(int i=0;i<n;i++) cin >> a[i];
		stack<int> stk;
		long long res = INT_MIN;
		int i=0;
		while(i<n){
			if( stk.empty() || a[i] >= a[stk.top()]){
				stk.push(i); ++i;
			}
			else{
				int idx = stk.top();
				stk.pop();
				if(stk.empty()){
					res = max(res, i*a[idx]);
				}
				else {
					res = max(res, a[idx] * (i - stk.top() - 1));
				}
			}
		}
		while(!stk.empty()){
			int idx = stk.top();
			stk.pop();
			if(stk.empty()){
				res = max(res, i*a[idx]);
			}
			else {
				res = max(res, a[idx] * (i-stk.top()-1));
			}
		}
		cout << res << endl;
	}
}
