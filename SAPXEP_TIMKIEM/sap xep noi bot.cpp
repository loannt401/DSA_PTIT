#include<iostream>
#include<algorithm>
using namespace std;

void in(int a[], int n){
	for(int i=0; i<n; i++) cout<<a[i]<<" ";
	cout<<endl;
}

void sapxepnoibot(int a[], int n){
	int k=1;
	for(int i=0; i<n; i++){
		int check = false;
		for(int j=0; j<n-i-1; j++){
			if(a[j]>a[j+1]){
				check = true;
				swap(a[j], a[j+1]);
			}
		}
		
		if(check){
			cout<<"Buoc "<<k<<": ";
			in(a,n); k++;
		}
		else break;
	}
}

int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	sapxepnoibot(a,n);
	return 0;
}
