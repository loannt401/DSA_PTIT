#include<iostream>
#include<algorithm>
using namespace std;

void in(int a[], int n){
	for(int i=0; i<n; i++) cout<<a[i]<<" ";
	cout<<endl;
}
void sapxep(int a[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]>a[j]) swap(a[i], a[j]);
		}
		cout<<"Buoc "<<i+1<<": ";
		in(a,n);
	}
}
int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i]; 
	sapxep(a,n);
	return 0;
}
