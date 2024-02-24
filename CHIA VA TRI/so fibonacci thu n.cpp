#include<bits/stdc++.h>
using namespace std;
int M = 1e9 + 7;
struct Matran{
	long long F[2][2];
};
Matran operator* (Matran A, Matran B){
	Matran C;
	int i,j,k;
	for(i=0;i<=1;i++){
		for(j=0;j<=1;j++){
			int sum = 0;
			for(k=0;k<=1;k++){
				sum = (sum + A.F[i][k]*B.F[k][j]%M)%M;
			}
			C.F[i][j] = sum;
		}
	}
	return C;
}
Matran power(Matran A, int n){
	if(n == 1) return A;
	Matran X = power(A, n/2);
	if(n%2==0) return X*X;
	return A*X*X;
}

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		Matran A;
		A.F[0][0] = 1; A.F[0][1] = 1; A.F[1][0] = 1; A.F[1][1] = 0;
		Matran KQ = power(A,n);
		cout << KQ.F[1][0] << endl;
	}
}
