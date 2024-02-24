#include<iostream>
#include<algorithm>
using namespace std;

void ktao(int a[], int n){
	for(int i=0; i<n; i++) cin>>a[i];
}

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
	}
}

int bosung(int a[], int n){
	int dem =0;
	for(int i=1; i<n; i++){
		int h=1;
		while(a[i-1]+h<a[i]){
			dem++; h++;
		}
	}
	return dem;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		ktao(a,n);
		sapxepchon(a,n);
		cout<<bosung(a,n)<<endl;
	}
}









