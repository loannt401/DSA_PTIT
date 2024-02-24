#include<bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
	return a > b;
}
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], b[n];
		for(int &x:a) cin >> x;
		for(int &x:b) cin >> x;
		sort(a,a+n);
		sort(b,b+n,cmp);
		long long sum = 0;
		for(int i=0;i<n;i++){
			sum += a[i]*b[i];
		}
		cout << sum << endl;
	}
}

//	22/05/22 16:47
