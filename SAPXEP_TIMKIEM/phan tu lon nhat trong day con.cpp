#include<iostream>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		int n, k, i, j;
		cin>>n>>k;
		int a[n];
		for(i=0; i<n; i++) cin>>a[i];
		for(i=0; i<n-k+1; i++){
			int max_val=0;
			for(j=i; j<i+k; j++){
				if(max_val<a[j]) max_val = a[j];
			}
			cout<<max_val<<" ";
		}
		cout<<endl;
	}
}
