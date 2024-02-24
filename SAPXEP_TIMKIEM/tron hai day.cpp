#include<iostream>
using namespace std;

void ktao(int a[], int n){
	for(int i=0; i<n; i++) cin>>a[i];
}

void in(int a[], int n){
	for(int i=0; i<n; i++) cout<<a[i]<<" ";
	cout<<endl;
}

void sapxepchen(int a[], int n){
	for(int i=1; i<n; i++){
		int key = a[i];
		int j=i-1;
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];j--;
		}
		a[j+1]=key;
	}
	in(a,n);
}

int main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m; 
		int a[n], b[m];
		ktao(a,n); ktao(b,m);
		int c[m+n], h=0;
		for(int i=0; i<n; i++) c[h++]=a[i];
		for(int i=0; i<m; i++) c[h++]=b[i];
		sapxepchen(c,h);		
	}
}









