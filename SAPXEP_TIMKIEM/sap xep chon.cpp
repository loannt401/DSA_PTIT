#include<iostream>
#include<algorithm>
using namespace std;

void in(int a[], int n){
	for(int i=0; i<n; i++) cout<<a[i]<<" ";
	cout<<endl;
}
void sapxepchon(int a[], int n){
	for(int i=0; i<n-1; i++){
		int min_idx = i;
		for(int j=i+1; j<n; j++){
			if(a[min_idx]>a[j]) min_idx = j;
		}
		swap(a[min_idx], a[i]);
		cout<<"Buoc "<<i+1<<": ";
		in(a,n);
	}
}
int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i]; 
	sapxepchon(a,n);
	return 0;
}

