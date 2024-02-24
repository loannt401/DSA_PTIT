#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		for(int &x:a) cin >> x;
		long long F[1005] = {0};
		F[0] = 1;
		for(int i=1;i<=k;i++){
			for(int j=0;j<n;j++){
				if(a[j] <= i) F[i] = (F[i] + F[i - a[j]])%mod; 
			}
		}
		cout << F[k] << endl;
	}
}

//	28/05/22 11:46

















