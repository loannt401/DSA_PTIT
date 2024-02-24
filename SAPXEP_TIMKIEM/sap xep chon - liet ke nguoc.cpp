#include<iostream>
#include<algorithm>
using namespace std;

void in(int a[], int n){
	for(int i=0; i<n; i++) cout<<a[i]<<" ";
	cout<<endl;
}
void sapxepchon(int a[], int n, int b[100][100]){
	for(int i=0; i<n-1; i++){
		int min_idx = i;
		for(int j=i+1; j<n; j++){
			if(a[min_idx]>a[j]) min_idx = j;
		}
		swap(a[i], a[min_idx]);
		for(int j=0; j<n; j++){
			b[i+1][j]=a[j];
		}
	}
}
int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i]; 
	int b[100][100];
	sapxepchon(a,n,b);
	for(int i=n-1; i>0; i--){
		cout<<"Buoc "<<i<<": ";
		in(b[i],n);
	}
	return 0;
}

