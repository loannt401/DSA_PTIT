#include<iostream>
using namespace std;
int n, i, ok;
char a[10];
void ktao(){
	for(i=1; i<=n; i++) a[i]='A';
}
void in(){
	for(i=1; i<=n; i++) cout<<a[i];
	cout<<" ";
}
void sinh(){
	int i=n;
	while(i>0 && a[i]=='B'){
		a[i]='A'; --i;
	}
	if(i==0) ok=0;
	else a[i]='B';
}
main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		ktao();
		ok=1;
		while(ok){
			in();
			sinh();
		}
		cout<<endl;
	}
}
