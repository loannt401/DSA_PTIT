#include<iostream>
#include<algorithm>
using namespace std;

void in(int a[], int n){
	for(int i=0; i<n; i++) cout<<a[i]<<" ";
	cout<<endl;
}
void sapxep(int a[], int n, int b[100][100]){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]>a[j]) swap(a[i], a[j]);
		}
		for(int j=0; j<n; j++){
			b[i+1][j]=a[j];
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i]; 
		int b[100][100];
		sapxep(a,n,b);
		for(int i=n-1; i>0; i--){
			cout<<"Buoc "<<i<<": ";
			in(b[i],n);
		}
	}
	return 0;
}
// sap xep noi bot
