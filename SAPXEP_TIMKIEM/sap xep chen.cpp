#include<iostream>
#include<algorithm>
using namespace std;

void in(int a[], int n){
	for(int i=0; i<n; i++) cout<<a[i]<<" ";
	cout<<endl;
}
void sapxepchen(int a[], int n){
	cout<<"Buoc 0: "<<a[0]<<endl;
	for(int i=1; i<n; i++){
		int key = a[i];
		int j=i-1;
		while( j>=0 && key < a[j]){
			a[j+1]=a[j];
			--j;
		}
		a[j+1]=key;
		cout<<"Buoc "<<i<<": ";
		in(a,i+1);
	}
}
int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i]; 
	sapxepchen(a,n);
	return 0;
}

