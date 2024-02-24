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

void chuso(int a[], int n){
	int b[10]={0};
	for(int i=0; i<n; i++){
		while(a[i]>0){
			int x = a[i]%10;
			b[x]= 1;
			a[i]/=10;
		}
	}
	for(int i=0; i<10; i++){
		if(b[i]) cout<<i<<" ";
	}
	cout<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
	 	int a[n];
	 	ktao(a,n); 
	  	chuso(a,n);
	}	
	return 0;
}
