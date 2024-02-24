#include<bits/stdc++.h>
using namespace std;
int n, k, ok;
char a[16], b[16];
void ktao1(){
	for(int i=1; i<16; i++) b[i]='A'+ i -1;
}
void ktao2(){
	for(int i=1; i<=k; i++) a[i]='A'+ i -1;
}
void sinhtohop(){
	int i=k;
	while(i>0 && a[i]==b[n-k+i]) i--;
	if(i==0) ok=0;
	else{
		a[i]++;
		for(int j=i+1; j<=k; j++) a[j]=a[j-1]+1;
	}
}
void in(){
	for(int i=1; i<=k; i++) cout<<a[i];
	cout<<endl;
}
main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		ktao1(); ktao2();
		ok=1;
		while(ok){
			in();
			sinhtohop();
		}
	}
}
