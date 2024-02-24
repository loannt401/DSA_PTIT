#include<iostream>
#include<vector>
using namespace std;
void merge(int a[], int l, int m, int r){
	vector<int> x(a+l, a+m+1);
	vector<int> y(a+m+1, a+r+1);
	int i=0, j=0;
	while(i<x.size() && j<y.size()){
		if(x[i]<=y[j]){
			a[l++]=x[i++];
		}
		else a[l++]=y[j++];
	}
	while(i<x.size()) a[l++]=x[i++];
	while(j<y.size()) a[l++]=y[j++];
}
void mergesort(int a[], int l, int r){
	if(l>=r) return;
	int m = (l+r)/2;
	mergesort(a,l,m);
	mergesort(a,m+1,r);
	merge(a,l,m,r);
}
void in(int a[], int n){
	for(int i=0;i<n; i++) cout<<a[i]<<" ";
	cout<<endl;
}
main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		int l=0, r=n-1;
		mergesort(a,l,r);
		in(a,n);
	}
}
