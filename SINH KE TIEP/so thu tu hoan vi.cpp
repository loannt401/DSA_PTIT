#include<bits/stdc++.h>
using namespace std;
int n, a[10], b[10], ok;
void ktao(){
	for(int i=1; i<=n; i++) a[i]=i;
}
void sinhhoanvi(){
	int i=n-1;
	while(i>0 && a[i]>=a[i+1]) i--;
	if(i==0) ok=0;
	else{
		int j=n;
		while(a[i]> a[j]) j--;
		swap(a[i], a[j]);
		int l=i+1, r=n;
		while(l<r){
			swap(a[l], a[r]);
			l++; r--;
		}
	} 
}
int check(){
	for(int i=1; i<=n; i++){
		if(a[i]!=b[i]) return 0;
	}
	return 1;
}
main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=1; i<=n; i++){
			cin>>b[i];
		}
		ktao();
		ok=1;
		int dem=1;
		while(ok){
			if(!check()){
				dem++;
				sinhhoanvi();
			}
			else break;
		}
		cout<<dem;
		cout<<endl;
	}
}
