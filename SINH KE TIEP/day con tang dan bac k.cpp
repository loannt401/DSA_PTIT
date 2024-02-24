#include<bits/stdc++.h>
using namespace std;
int n, k, X[101], b[101], ok;
void ktao(){
	for(int i=1;i<=k;i++) X[i] = i;
}
void sinh(){
	int i = k;
	while(i>0 && X[i] == n-k+i) i--;
	if(i==0) ok=0;
	else{
		X[i]++;
		for(int j=i+1;j<=k;j++) X[j] = X[j-1] + 1;
	}
}
int check(int a[]){
	for(int i=1; i<k;i++){
		if(a[X[i]] >= a[X[i+1]]) return 0;
	}
	return 1;
}
main(){
	cin >> n >> k;
	int a[101];
	for(int i=1;i<=n;i++) cin >> a[i];
	ktao(); ok=1;
	int dem = 0;
	while(ok){
		if(check(a)) dem++;
		sinh();
	}
	cout << dem << endl;
}
