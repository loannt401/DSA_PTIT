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

int dem(int a[], int n, int k){
	int cost=0, ok=0;
	for(int i=0; i<n; i++ ){
		if(a[i]>k) break;
		if(a[i]==k){
			ok=1;
			cost++;
		}
	}
	if(!ok) return -1;
	return cost;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
	 	int a[n];
	 	ktao(a,n); 
	  	cout<<dem(a,n,k)<<endl;
	}	
	return 0;
}


// dem so bang k
