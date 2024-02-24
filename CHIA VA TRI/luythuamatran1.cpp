#include<bits/stdc++.h>
using namespace std;
int n;
long long mod = 1e9 + 7;
struct Matran{
	long long F[15][15];
};
Matran operator*(Matran A, Matran B){
	Matran KQ;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			long long sum = 0;
			for(int k=0;k<n;k++){
				sum = (sum + A.F[i][k] * B.F[k][j]%mod)%mod;
			}
			KQ.F[i][j] = sum;
		}
	}
	return KQ;
}
Matran power(Matran A, long long k){
	if(k == 1) return A;
	Matran X = power(A, k/2);
	if(k%2 == 0) return X*X;
	return A*X*X;
}
main(){
	int t; cin >> t;
	while(t--){
		long long k;
		cin >> n >> k;
		Matran A;
		for(int i=0;i<n;i++) 
			for(int j=0;j<n;j++) 
				cin >> A.F[i][j];
		Matran KQ = power(A, k); 
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout << KQ.F[i][j] << " ";
			}
			cout << endl;
		}	
	}
}

// 	22/05/22 14:15
