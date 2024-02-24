#include<bits/stdc++.h>
using namespace std;
int cnt[5] = {0};
int timkiem(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int mid = (l+r)/2;
		if(a[mid] > x){
			res = mid;
			r = mid - 1; 
		}
		else l = mid + 1;
	}
	return res;
}
int dem(int a[], int n, int x){
	if(x == 0) return 0;
	if(x == 1) return cnt[0];
	int res = cnt[0] + cnt[1];
	int l = timkiem(a,0,n-1,x);
	if(l != -1){
		res += n - l;
	} 
	if(x == 2) res -= (cnt[3] + cnt[4]);
	if(x == 3) res += cnt[2];
	return res;
}
main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n], b[m];
		for(int &x:a) cin >> x;
		for(int &x:b){
			cin >> x;
			if(x <= 4) cnt[x]++;
		}
		sort(b,b+m);
		int sum = 0;
		for(int x:a){
			sum += dem(b,m,x);
		}
		cout << sum << endl;
		memset(cnt,0,sizeof(cnt));
	}	
}

/*
	Name: dem cap x^y > y^x
	Copyright: 
	Author: 
	Date: 22/05/22 16:05
	Description: 
	Y tuong:
		x < y luon thoa man dieu kien
		=> voi moi phan tu x ta dem so phan tu trong y len hon x
		=> sap xep lai mang Y tang dan roi tim chi so dau tien lon hon x
		roi lay tong so phan tu cua y tru di chi so
		Ngoai ra:
			voi x = 0 thi khong co phan tu y naof thoa man
			x = 1 thi chi thoa man khi y = 0
			con cac so x con lai den thoa man khi y = 0 hoac y = 1
			x = 2 thi khong thao man khi y = 3 hoac y = 4
			x = 3 thoa man khi y = 2
*/



	
