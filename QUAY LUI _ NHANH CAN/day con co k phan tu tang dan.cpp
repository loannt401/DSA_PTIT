#include<bits/stdc++.h>
using namespace std;
int n, k, X[20], a[20];
void in(){
	for(int i=1;i<=k;i++){
		cout << a[X[i]] << " ";
	}
	cout << endl;
}
void ql(int i){
	for(int j=X[i-1]+1;j<=n-k+i;j++){
		X[i] = j;
		if(i == k) in();
		else ql(i+1);
	}
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=1;i<=n;i++) cin >> a[i];
		sort(a+1,a+n+1);
		X[0] = 0;
		ql(1);
	}
}
