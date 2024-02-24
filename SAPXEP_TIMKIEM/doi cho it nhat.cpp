#include<bits/stdc++.h>
using namespace std;
int sapxepchon(int a[], int n){
	int dem=0;
	for(int i=0; i<n-1; i++){
		int min_idx = i;
		for(int j=i+1; j<n; j++){
			if(a[min_idx]>a[j]) min_idx = j;
		}
		if(min_idx != i){
			swap(a[i], a[min_idx]);
			dem++;
		}
	}
	return dem;
}
main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		cout<<sapxepchon(a,n)<<endl;
	}
}
