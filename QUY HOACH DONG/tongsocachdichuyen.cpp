#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		long long F[n+1];
		memset(F, 0, sizeof(F));
		F[0] = 1; F[1] = 1;
		for(int i=2;i<=n;i++){
			for(int j=1;j<= min(i,k);j++){
				F[i] = (F[i] + F[i-j])%mod;
			}
		}
		cout << F[n] << endl;
	}
}

//	27/05/22 21:08
