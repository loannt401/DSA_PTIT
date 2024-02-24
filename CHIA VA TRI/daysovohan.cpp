#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9 +7;
int n;
struct Matran{
	long long F[2][2];
};
Matran operator*(Matran A, Matran B){
	Matran C;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			C.F[i][j] = 0;
			for(int k=0;k<2;k++){
				C.F[i][j] = (C.F[i][j] + A.F[i][k] * B.F[k][j] % mod) %mod;
			}
		}
	}
	return C;
}
Matran power(Matran A, long long n){
	if(n == 1) return A;
	Matran X = power(A, n/2);
	if(n%2 == 0) return X*X;
	return A*X*X;
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		Matran A;
		A.F[0][0] = 1; A.F[0][1] = 1; A.F[1][0] = 1; A.F[1][1] = 0;
		Matran KQ = power(A,n);
		cout << KQ.F[1][0] << endl;
	}
}

//	22/05/22 14:52
