#include<bits/stdc++.h>
using namespace std;

int dem(int a[], int l, int r){
	int m;
	if(l > r) return 0;
	else {
		m = (l+r)/2;
		if(a[m] == 0) return m - l + 1 + dem(a,m+1,r);
		else return dem(a,l,m-1);
	}
}
main(){
	int t; cin >> t;
	while(t--){
		int n, a[1001];
		cin >> n;
		for(int i=1;i<=n;i++) cin >> a[i];
		if(a[n] == 0) cout << n << endl;
		else {
			
		}
		cout << dem(a,1,n) << endl;
	}
}
