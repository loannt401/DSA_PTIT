#include<bits/stdc++.h>
using namespace std;
int n, k, a[40], b[40], ok;

void sinhtohop(){
	int i=k;
	while(i>0 && a[i]==n-k+i) i--;
	if(i==0) ok=0;
	else{
		a[i]++;
		for(int j=i+1; j<=n; j++) a[j]=a[j-1]+1;
	}
}
void sosanh(){
	int g=0, i=1, j=1;
	while(i<=k && j<=k){
		if(a[i]==b[j]){
			g++; i++; j++;
		}
		else if(a[i]>b[j]){
			j++;
		}
		else i++;
	}
	cout<<k-g<<endl;
}
main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1; i<=k; i++){
			cin>>a[i];
		}
		for(int i=1; i<=k; i++){
			b[i]=a[i];
		}
		ok=1;
		sinhtohop();
		if(ok){
			sosanh();
		}
		else cout<<k<<endl;
		for(int i=2; i<=k; i++) b[i]=0;
	}
}
