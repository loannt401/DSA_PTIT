
#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x:a) cin >> x;
		long long so1 = 0, so2 = 0;
		sort(a,a+n);
		for(int i=0;i<n;i++){
			if(i%2==0) so1 = so1*10*1ll + a[i];
			else so2 = so2*10*1ll + a[i];
		}
		cout << so1 + so2 << endl;
	}
}

/*
	Name: 
	Copyright: 
	Author: 
	Date: 18/05/22 11:46
	Description: 
	cho mot mang cac chu so roi ghep chu so do thanh 2 so khac nhau
	sao cho tong 2 so cong lai nho nhat
	de lam dc nhu vay : 
		ta sap xep lai cac chu so
		xep cap chu so vi tri chan lam 1 so
		vi tri le lam 1 so
		ro cong 2 so vua xep ta duoc tong so nho nhat
		
	6 8 4 5 2 3
	2 3 4 5 6 8
	2 4 6
	3 5 8
	6 0 4
*/

