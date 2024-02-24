
#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		for(int &x:a) cin >> x;
		sort(a,a+n);
		int h1;
		if(k <= n/2) h1 = k;
		else h1 = n - k;
		int tong1 = 0, tong2 = 0;
		for(int i=0;i<h1;i++){
			tong1 += a[i];
		} 
		for(int i = h1;i<n;i++) tong2 += a[i];
		cout << tong2 - tong1 << endl;

	}
}
/*
	Name: 
	Copyright: 
	Author: 
	Date: 18/05/22 12:17
	Description: 
*/

