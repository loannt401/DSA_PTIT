#include<bits/stdc++.h>
using namespace std;
int M = 1e9 + 7;
long long power(long long n, long long k){
	if(k == 0) return 1;
	long long x = power(n,k/2);
	if(k%2==0) return x*x%M;
	return n*(x*x%M)%M;
}
long long dao(long long n){
	long long sum = 0;
	while(n>0){
		long long x = n%10;
		sum = sum*10 + x;
		n/=10;
	}
	return sum;
}
main(){
	int t; cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << power(n,dao(n)) << endl; 
	}
}

