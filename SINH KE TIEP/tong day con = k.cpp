#include<bits/stdc++.h>
using namespace std;
int n, k, a[20], b[20], ok, dem;

void ktao(){
	for(int i=1; i<=n; i++) a[i]=0;
}
void sinh(){
	int i=n;
	while(i>0 && a[i]==1){
		a[i]=0; i--;
	}
	if(i==0) ok=0;
	else a[i]=1;
}
void in(){
	for(int i=1; i<=n; i++){
		if(a[i]) cout<<b[i]<<" ";
	}
	cout<<endl;
	dem ++;   
}
main(){
	cin>>n>>k;
	for(int i=1; i<=n; i++) cin>>b[i];
	ok=1; dem = 0;
	ktao();
	while(ok){
		int sum=0;
		for(int i=1; i<=n; i++){
			if(a[i]){
				sum+=b[i];
			}
		}
		if(sum==k) in();
		sinh(); 
	}
	cout<<dem;
}
