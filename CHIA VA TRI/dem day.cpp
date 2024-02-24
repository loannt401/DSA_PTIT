#include<bits/stdc++.h>
using namespace std;
int M = 123456789 ;
long long power(long long n, long long k){
	if(k == 0) return 1;
	long long x = power(n,k/2);
	if(k%2==0) return x*x%M;
	return n*(x*x%M)%M;
}
main(){
	int t; cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << power(2,n-1) << endl; 
	}
}
