#include<bits/stdc++.h>
using namespace std;
int M = 1e9 + 7;
long long power(int n, int k){
	if(k == 0) return 1;
	long long x = power(n,k/2);
	if(k%2==0) return x*x%M;
	return n*(x*x%M)%M;
}
main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		cout << power(n,k) << endl; 
	}
}
