#include<bits/stdc++.h>
using namespace std;
int n, sum, a[25], X[25],ok;
void in(int m){
	cout << "[";
	for(int i=1;i<=m;i++){
		cout << X[i];
		if(i<m) cout << " ";
	}
	cout << "]";
}
void ql(int i, int k, int t){
	for(int j=k;j<=n;j++){
		X[i] = a[j];
		t += a[j];
		if(t<=sum){
			if(t == sum){
				in(i);
				ok=1;
			}
			else ql(i+1,j,t);
		}
		t -= a[j];
	}
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> sum;
		for(int i=1;i<=n;i++) cin >> a[i];
		sort(a,a+n+1); ok=0;
		ql(1,1,0);
		if(ok==0) cout << -1;
		cout << endl;
	}
}
