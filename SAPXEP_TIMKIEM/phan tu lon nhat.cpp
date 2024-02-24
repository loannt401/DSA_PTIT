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

void sapxepchon(int a[], int n, int k){
	for(int i=0; i<k; i++){
		int max_idx = i;
		for(int j=i+1; j<n; j++){
			if(a[max_idx]<a[j]) max_idx = j;
		}
		swap(a[i], a[max_idx]);
	}
	in(a,k);
}

int main(){
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
	 	int a[n];
	 	ktao(a,n); 
	  	sapxepchon(a,n,k);
	}	
	return 0;
}
