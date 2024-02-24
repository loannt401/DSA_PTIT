#include<iostream>
#include<cmath>
using namespace std;
void sapxepchen(int a[], int n){
	for(int i=1; i<n; i++){
		int key = a[i];
		int j=i-1;
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
}
main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n], i, j;
		for(i=0; i<n; i++) cin>>a[i];
		sapxepchen(a,n);
		int min_kc = abs(a[0]-a[1]);
		for(i=2; i<n; i++){
			if(min_kc > abs(a[i]-a[i-1])) min_kc = abs(a[i]-a[i-1]);
		}
		cout<<min_kc<<endl;
	}	
}
