#include<bits/stdc++.h>
using namespace std;
main(){	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long F[51] = {0};
		F[0] = 1; F[1] = 1;
		for(int i=2;i<=n;i++){
			for(int j=1;j<= min(i,3);j++){
				F[i] = (F[i] + F[i-j]);
			}
		}
		cout << F[n] << endl;
	}	
}
//	27/05/22 19:14
