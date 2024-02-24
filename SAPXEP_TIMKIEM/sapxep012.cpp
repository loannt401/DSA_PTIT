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

void sapxep012(int a[], int n){
	int b[3]={0};
	for(int i=0; i<n; i++){
		b[a[i]]++;
	}
	for(int i=0; i<3; i++){
		while(b[i]>0){
			cout<<i<<" ";
			b[i]--;
		}
	}
	cout<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
	 	int a[n];
	 	ktao(a,n); 
	  	sapxep012(a,n);
	}	
	return 0;
}
