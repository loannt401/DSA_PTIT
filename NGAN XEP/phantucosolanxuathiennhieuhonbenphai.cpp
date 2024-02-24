#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], b[n], c[n];
		map<int, int> mp;
		for(int &x:a){
			cin >> x;
			mp[x]++;
		}
		for(int i=0; i<n;i++){
			b[i] = mp[a[i]];
		}
		stack<int> stk;
		for(int i=0;i<n;i++){
			if(stk.empty()) stk.push(i);
			else{
				while(!stk.empty() && b[ stk.top() ] < b[i]){
					c[stk.top()] = a[i];
					stk.pop();
				}
				stk.push(i);
			}
		}
		while(!stk.empty()){
			c[stk.top()] = -1;
			stk.pop();
		}
		for(int x:c) cout << x << " ";
		cout << endl;
	}
}
