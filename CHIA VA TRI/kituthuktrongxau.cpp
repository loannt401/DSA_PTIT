#include<bits/stdc++.h>
using namespace std;
long long F[30];
char kitutrongxau(int n, long long k){
	int x = F[n]/2 + 1;
	if(x == k) return 'A' + n - 1;
	if(x > k) return kitutrongxau(n-1,k);
	return kitutrongxau(n-1,k-x);
}
main(){
	F[1] = 1;
	for(int i=2;i<=26;i++) F[i] = F[i-1]*2+1;
	int t; cin >> t;
	while(t--){
		int n; 
		long long k;
		cin >> n >> k;
		cout << kitutrongxau(n,k) << endl;
	}
}

// 22/05/22 12:50

#include<bits/stdc++.h>
using namespace std;
char kitutrongxau(int n, long long k){
	long long x = pow(2,n-1);
	if(x == k) return 'A' + n - 1;
	if(x < k) return kitutrongxau(n-1, k-x);
	return kitutrongxau(n-1, k);
}
main(){
	int t; cin >> t;
	while(t--){
		int n;
		long long k;
		cin >> n >> k;
		cout << kitutrongxau(n,k) << endl;
	}
}

//	22/05/22 12:55
