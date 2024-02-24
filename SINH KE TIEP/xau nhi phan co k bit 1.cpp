#include<iostream>
using namespace std;
int n, i, ok, a[17], k;
void ktao(){
	for(i=1; i<=n; i++) a[i]=0;
}
void in(){
	for(i=1; i<=n; i++) cout<<a[i];
	cout<<endl;
}
void sinh(){
	i=n;
	while(i>=1 && a[i]==1){
		a[i]=0; --i;
	}
	if(i==0) ok=0;
	else a[i]=1;
}
int check(){
	int sum=0;
	for(i=1; i<=n; i++){
		sum+=a[i];
	}
	if(sum!=k) return 0;
	return 1;
}
main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k; 
		ktao();
		ok=1;
		while(ok){
			if(check()) in(); 
			sinh();
		}
	}
}
