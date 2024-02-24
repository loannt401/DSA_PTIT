#include<iostream>
#include<cmath>
using namespace std;

void ktao(int a[], int n){
	for(int i=0; i<n; i++) cin>>a[i];
}

//void in(int a[], int n){
//	for(int i=0; i<n; i++) cout<<a[i]<<" ";
//	cout<<endl;
//}

int timkiem(int a[], int n, int x){
	for(int i=0; i<n; i++){
		if(a[i]==x){
			return 1;
		}
	}
	return -1;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n,x; cin>>n>>x;
	 	int a[n];
	 	ktao(a,n); 
	  	cout<<timkiem(a,n,x)<<endl;
	}	
	return 0;
}
