#include<bits/stdc++.h>
using namespace std;
int M = 1e9 + 7 ;
long long power(long long n, long long k){
	if(k == 0) return 1;
	long long x = power(n,k/2);
	if(k%2==0) return x*x%M;
	return n*(x*x%M)%M;
}
main(){
	long long a, b;
	while(cin >> a && cin >> b){
		if(a==0 && b==0) break;
		else cout << power(a,b) << endl;
	}
}
