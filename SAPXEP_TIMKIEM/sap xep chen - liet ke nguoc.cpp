#include<iostream>
#include<algorithm>
using namespace std;

void in(int a[], int n){
	for(int i=0; i<n; i++) cout<<a[i]<<" ";
	cout<<endl;
}
void sapxepchen(int a[], int n, int b[100][100]){
	b[0][0]=a[0];
	for(int i=1; i<n; i++){
		int key = a[i];
		int j = i-1;
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
		for(int j=0; j<=i; j++){
			b[i][j]=a[j];
		}
	}
}
int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i]; 
	int b[100][100];
	sapxepchen(a,n,b);
	for(int i=n-1; i>=0; i--){
		cout<<"Buoc "<<i<<": ";
		in(b[i],i+1);
	}
	return 0;
}

