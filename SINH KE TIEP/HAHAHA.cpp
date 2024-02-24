#include<iostream>
using namespace std;
int n, i, ok;
char a[16];
void ktao(){
	a[1]='H';
	a[n]='A';
	for( i=2; i<n; i++) a[i]='A';
}
void in(){
	for(i=1; i<=n; i++) cout<<a[i];
	cout<<endl;
}
void sinh(){
	i=n-1;
	while(i>=2 && a[i]=='H'){
		a[i]='A'; --i;
	}
	if(i==1) ok=0;
	else a[i]='H';
}
int check(){
	for(i=2; i<n; i++){
		if(a[i]==a[i-1] && a[i]=='H') return 0;
	}
	return 1;
}
main(){
	int t; cin>>t;
	while(t--){
		cin>>n; 
		ktao();
		ok=1;
		while(ok){
			if(check())in(); 
			sinh();
		}
	}
}
