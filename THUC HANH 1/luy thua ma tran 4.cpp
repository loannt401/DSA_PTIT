#include<bits/stdc++.h>
using namespace std;
int M = 1e9 + 7;
int n;
struct Matran{
	long long F[15][15];
};
Matran operator* (Matran A, Matran B){
	Matran C;
	int i, j ,k;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			int sum = 0;
			for(k=0;k<n;k++){
				sum = (sum + A.F[i][k]*B.F[k][j]%M)%M; 
			}
			C.F[i][j] = sum;
		}
	}
	return C;
}
Matran power(Matran A, int n){
	if(n == 1) return A;
	Matran X = power(A,n/2);
	if(n%2 == 0) return X*X;
	return A*X*X;
}
long long ketqua(Matran A, int n){
	long long sum = 0;
	for(int i=0;i<n;i++){
		sum = (sum + A.F[0][i]%M)%M;
	}
	return sum;
}
main(){
	int t; cin >> t;
	while(t--){
		int k; cin >> n >> k;
		Matran A;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin >> A.F[i][j];
			}
		}
		Matran KQ = power(A,k);
		cout << ketqua(KQ,n) << endl;
	}
}
