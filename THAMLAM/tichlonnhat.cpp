#include<bits/stdc++.h>
using namespace std;
main(){
	int n; cin >> n;
	int a[n];
	for(int &x:a) cin >> x;
	sort(a,a+n);
	int tong1 = 0, tong2 = 0, tong3 = 0, tong4 = 0;
	tong1 = a[0] * a[1];
	tong2 = a[n-3] * a[n-2] * a[n-1];
	tong3 = a[0] * a[1] * a[2];
	tong4 = a[0] * a[1] * a[n-1];
	cout << max(tong1, max(tong2, max(tong3, tong4))) << endl;
}
