#include<bits/stdc++.h>
using namespace std;
int merge(int a[], int b[], int n){
	int i = 0;
	while(i<n-1){
		if(a[i] == b[i]) i++;
		else return i + 1;
	}
	return n;
}
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], b[n];
		for(int i=0;i<n;i++) cin >> a[i];
		for(int i=0;i<n-1;i++) cin >> b[i];
		cout << merge(a,b,n) << endl;
	}
}
