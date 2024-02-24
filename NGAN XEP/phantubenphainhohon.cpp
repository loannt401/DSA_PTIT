#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], b[n], c[n];
		for(int &x:a) cin >> x;
		stack<int> stk;
		stack<int> stk2;
		for(int i=0;i<n;i++){
			if(stk.empty()) stk.push(i);
			else {
				while(!stk.empty() && a[stk.top()] < a[i]){
					b[stk.top()] = i;
					stk.pop();
				}
				stk.push(i);
			}
		}
		while(! stk.empty()){
			b[ stk.top() ] = -1;
			stk.pop();
		}
		
		for(int i=0;i<n;i++){
			if(stk.empty()) stk.push(i);
			else {
				while(!stk.empty() && a[stk.top()] > a[i]){
					c[stk.top()] = a[i];
					stk.pop();
				}
				stk.push(i);
			}
		}
		while(! stk.empty()){
			c[ stk.top() ] = -1;
			stk.pop();
		}
		
		for(int i=0;i<n;i++){
			if(b[i] != -1)cout << c[b[i]] << " ";
			else cout << -1 << " ";
		}
		cout << endl;
	}
}
