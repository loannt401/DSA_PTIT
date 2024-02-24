#include<iostream>
#include<cmath>
using namespace std;

void in(int a[], int n){
	for(int i=0; i<n; i++) cout<<a[i]<<" ";
	cout<<endl;
}

void sapxepchen(int a[], int n, int x){
	for(int i=1; i<n; i++){
		int key = a[i];
		int j=i-1;
		while(j>=0 && (abs(x-a[j])>abs(x-key)) ){
			a[j+1]=a[j]; j--;
		}
		a[j+1]=key;
	}
	in(a,n);
}

int main(){
	int t; cin>>t;
	while(t--){
		int n,x; cin>>n>>x;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	sapxepchen(a,n,x);
	}
	
	return 0;
}
