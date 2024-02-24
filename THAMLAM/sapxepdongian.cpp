#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin >> n;
	int a[n+1];
	for(int i=1;i<=n;i++) cin >> a[i];
	int vt[n+1];
	for(int i=1;i<=n;i++){
		vt[a[i]] = i;
	}
	int dem = 1, max_dem = 1;
	for(int i=1;i<n;i++){
		if(vt[i] < vt[i+1]) dem++;
		else {
			max_dem = max(max_dem, dem);
			dem = 1;
		}
	}
	max_dem = max(max_dem, dem);
	cout << n - max_dem << endl;
}

/*
	Name: sap xep don gian
	di chuyen phan tu len dau hoac xuong cuoi
	Copyright: 
	Author: 
	Date: 21/05/22 22:45
	Description: 
	lap mang vt[i] la vi tri cua phan tu i trong mang ban dau
	tim day con dai nhat trong vt[n+1]
	lay n - so phan tu day con tim dc 
	10
	5 7 1 4 8 2 3 6 9 10
	
	1 2 3 4 5 6 7 8 9 10
	3 6 7 4 1 8 2 5 9 10
	
	ta thay day con : 2 5 9 10
	=> 4 phan tu: 7 8 9 10 khong can phai di chuyen
	=> 6 phan tu con lai phai di chuyen len dau de sap xep
	
	
*/

