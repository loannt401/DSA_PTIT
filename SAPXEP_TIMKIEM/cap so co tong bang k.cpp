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

int tongbangk(int a[], int n, int k){
	int dem =0;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]+a[j]==k) dem++;
		}
	}
	return dem;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
	 	int a[n];
	 	ktao(a,n); 
	  	cout<<tongbangk(a,n,k)<<endl;
	}	
	return 0;
}
