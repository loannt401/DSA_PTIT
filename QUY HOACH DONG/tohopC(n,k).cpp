#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int C[1001][1001];
main(){
	for(int i=0;i<=1000;i++){
		for(int j=0;j<=i;j++){
			if(j == 0 || j == i) C[i][j] = 1;
			else C[i][j] = (C[i-1][j-1] + C[i-1][j])%mod;
		}
	}
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		cout << C[n][k] << endl;
	}
}

//	27/05/22 18:29
