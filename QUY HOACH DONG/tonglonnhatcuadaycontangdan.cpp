#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x:a) cin >> x;
		int L[n];
		for(int i=0;i<n;i++){
			L[i] = a[i];
			for(int j=0;j<i;j++){
				if(a[j] < a[i]) L[i] = max(L[i], L[j] + a[i] );
			}
		}
		cout << *max_element(L,L+n) << endl;
	}
}

//	28/05/22 10:56
