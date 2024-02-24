#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int F[n+1] = {0};
		F[0] = 1; F[1] = 1;
		for(int i=2;i<=n;i++){
			for(int j=1;j<= min(i,k);j++){
				F[i] = (F[i] + F[i-j])%mod;
			}
		}
		cout << F[n] << endl;
	}	
}

/*
	Name: co n bac thang va k la so buoc toi da duoc phep buoc
	Copyright: 
	Author: 
	Date: 27/05/22 18:52
	Description: 
	vd: n = 4, k = 2
	ta co the buoc 1 hoac 2 buoc de len het 4 bac thang
	 5 cách dó là: (1, 1, 1, 1), (1, 1, 2), (1, 2, 1), (2, 1, 1), (2, 2).
	Y tuong:
		voi 0 bac thi t co 1 cach F[0] = 1 (chinh la khong buoc bac nao)
		voi F[1] = 1 : 1 bac chi co 1 cach
*/

