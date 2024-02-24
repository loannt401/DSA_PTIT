#include<bits/stdc++.h>
using namespace std;
long long F[100];
char FibonacciWord(int n, long long k){
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	if(k <= F[n-2]) return FibonacciWord(n-2,k);
	return FibonacciWord(n-1,k-F[n-2]);
}
main(){
	F[0] = 0; F[1] = 1;
	for(int i=2;i<=92;i++) F[i] = F[i-1] + F[i-2];
	int t; cin >> t;
	while(t--){
		int n;
		long long k; 
		cin >> n >> k;
		cout << FibonacciWord(n,k) << endl;
	}
}
