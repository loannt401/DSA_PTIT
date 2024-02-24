#include<iostream>
#include<cmath>
using namespace std;

void ktao(long long a[], int n){
	for(int i=0; i<n; i++) cin>>a[i];
}

void in(long long a[], int n){
	for(int i=0; i<n; i++) cout<<a[i]<<" ";
	cout<<endl;
}

long long nho(long long a[], int n){
	int min_val =a[0];
	for(int i=1; i<n; i++){
		if(min_val > a[i]) min_val = a[i];
	}
	return min_val;
}

long long lon(long long a[], int n){
	int max_val = a[0];
	for(int i=1; i<n; i++){
		if(max_val < a[i]) max_val = a[i];
	}
	return max_val;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		long long a[n], b[m];
		ktao(a,n); ktao(b,m);
		cout<<lon(a,n)*nho(b,m)<<endl;		
	}
}









