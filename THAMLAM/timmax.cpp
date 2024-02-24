#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		long long a[n];
		for(long long &x:a) cin >> x;
		sort(a,a+n);
		long long tong = 0;
		for(long long i=0;i<n;i++){
			tong += a[i]*i;
			tong %= mod;
		}
		cout << tong << endl;
	}
}

