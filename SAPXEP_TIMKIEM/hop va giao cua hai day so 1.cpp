#include<iostream>
#include<cmath>
using namespace std;

void ktao(int a[], int n){
	for(int i=0; i<n; i++) cin>>a[i];
}

void in(int a[], int n){
	for(int i=0; i<n; i++) cout<<a[i]<<" ";
	cout<<endl;
}

void hopvagiao(int a[], int n, int b[], int m){
	int hop[m+n], giao[n];
	int i=0, j=0, h=0, g=0;
	while(i<n && j<m){
		if(a[i]==b[j]){
			hop[h++]=a[i];
			giao[g++]=a[i];
			i++; j++;
		}
		else if(a[i]<b[j]){
			hop[h++]=a[i];
			i++;
		}
		else{
			hop[h++]=b[j];
			j++;
		}
	}
	while(i<n) hop[h++]=a[i++];
	while(j<m) hop[h++]=b[j++];
	in(hop,h);
	in(giao,g);
}

int main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
	 	int a[n],b[m];
	 	ktao(a,n); ktao(b,m);
	  	hopvagiao(a,n,b,m);
	}	
	return 0;
}
