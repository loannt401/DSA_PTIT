#include<iostream>
using namespace std;
int n, a[20], ok=1;
void ktao(){
	for(int i=1; i<=n; i++) a[i]=0;
}
void in(){
	for(int i=1; i<=n; i++) cout<<a[i]<<" ";
	cout<<endl;
}
void sinh(){
	int i=n;
	while(i>0 && a[i]==1){
		a[i]=0;
		--i;
	}
	if(i==0) ok=0;
	else a[i]=1;
}
int doixung(){
	int l=1, r=n;
	while(l<r){
		if(a[l]!=a[r]) return 0;
		else{
			l++; r--;
		}
	}
	return 1;
}
main(){
	cin>>n;
	ktao();
	while(ok){
		if(doixung()){
			in();
		}
		sinh();
	}
}


