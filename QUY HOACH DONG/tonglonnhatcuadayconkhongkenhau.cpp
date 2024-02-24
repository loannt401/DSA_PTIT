#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x:a) cin >> x;
		int L[n];
		memset(L,0,sizeof(L));
		L[0] = a[0]; L[1] = a[1];
		for(int i=2;i<n;i++){
			if(i == 2) L[i] = a[i] + L[i-2];
			else L[i] = max(a[i] + L[i-2], a[i] + L[i-3]);
		}
		cout << *max_element(L,L+n) << endl;
	}
}
