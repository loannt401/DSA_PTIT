#include<bits/stdc++.h>
using namespace std;
int n, k, a[10], b[10], ok;
void ktao(){
	for(int i=1; i<=k; i++) a[i]=i;
}
void sinhtohop(){
	int i=k;
	while(i>0 && a[i]== n-k+i) i--;
	if(i==0) ok=0;
	else{
		a[i]++;
		for(int j=i+1; j<=k; j++) a[j]=a[j-1]+1;
	}
}
int check(){
	for(int i=1; i<=k; i++){
		if(a[i]!=b[i]) return 0;
	}
	return 1;
}
main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1; i<=k; i++){
			cin>>b[i];
		}
		ktao();
		ok=1;
		int dem=1;
		while(ok){
			if(!check()){
				dem++;
				sinhtohop();
			}
			else break;
		}
		cout<<dem;
		cout<<endl;
	}
}
