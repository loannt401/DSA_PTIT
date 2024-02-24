#include<bits/stdc++.h>
using namespace std;
int m=1, k, a[20], c[20], ok;
void sapxepchen(int b[], int n){
	for(int i=1; i<n; i++){
		int j=i-1;
		int key = b[i];
		while(j>=0 && key < b[j] ){
			b[j+1] = b[j];
			j--;
		}
		b[j+1] = key;
	}
}
void loc(int b[], int n){
	for(int i=1; i<n; i++){
		if(b[i]!=b[i-1]) a[m++] = b[i-1];
	}
	if(b[n-1]!=b[n-2]) a[m++] = b[n-1];
	m--;
}
void ktao(){
	for(int i=1; i<=k; i++ ) c[i] = a[i];
}
void in(){
	for(int i=1; i<=k; i++) cout<<c[i]<<" ";
	cout<<endl;
}
void sinhtohop(){
	int i=k;
	while(i>0 && c[i] == a[m-k+i]) i--;
	if(i==0) ok=0;
	else {
		int idx=0;
		for(int j=1; j<=m; j++){
			if(c[i]==a[j]){
				idx = j; break;
			}
		}
		c[i] = a[++idx];
		for(int j=i+1; j<=m; j++) c[j] = a[++idx];
	}
}
main(){
	int n;
	cin>>n>>k;
	int b[n];
	for(int i=0; i<n; i++) cin>>b[i];
	sapxepchen(b,n);
	loc(b,n);
	ktao();
	ok=1;
	while(ok){
		in();
		sinhtohop();
	}
}
