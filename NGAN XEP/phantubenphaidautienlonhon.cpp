#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], b[n];
		for(int &x:a) cin >> x;
		stack<int> stk;
		for(int i=0;i<n;i++){
			if(stk.empty()) stk.push(i);
			else {
				while(!stk.empty() && a[stk.top()] < a[i]){
					b[stk.top()] = a[i];
					stk.pop();
				}
				stk.push(i);
			}
		}
		while(! stk.empty()){
			b[ stk.top() ] = -1;
			stk.pop();
		}
		for(int x:b) cout << x << " ";
		cout<< endl;
	}
}
