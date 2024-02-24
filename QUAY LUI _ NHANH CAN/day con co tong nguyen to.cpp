#include<bits/stdc++.h>
using namespace std;
int n, a[20], X[20];
int check(int x){
	if(x<2) return 0;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0) return 0;
	}
	return 1;
}
void in(){
	int sum = 0;
	for(int i=1;i<=n;i++) if(X[i]) sum += a[i];
	if(check(sum)){
		for(int i=1;i<=n;i++) if(X[i]) cout << a[i] << " ";
		cout << endl;
	}
}
void ql(int i){
	for(int j=0;j<=1;j++){
		X[i] = j;
		if(i == n) in();
		else ql(i+1);
	}
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i=1;i<=n;i++) cin >> a[i];
		sort(a+1,a+n+1,greater<int>());
		ql(1);
	}
}

