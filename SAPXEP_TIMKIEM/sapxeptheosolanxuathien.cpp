#include<bits/stdc++.h>
using namespace std;
map<int, int> mp;
bool cmp(int a, int b){
	if(mp[a] != mp[b]) return mp[a] > mp[b];
	return a < b;
}
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x:a) cin >> x;
		for(int i=0;i<n;i++){
			mp[a[i]]++;
		}
		sort(a,a+n, cmp);
		for(int x:a) cout << x << " ";
		cout << endl;
		mp.clear();
	}
}

/*
	Name: 
	Copyright: 
	Author: 
	Date: 21/05/22 23:36
	Description: 
	sd map de den tung phan tu
	ghi phan tu co so lan xuat hien tu lon den nho
	neu 2 phan tu co so lan xuat hien bang nhau thi in ra phan tu nho hon truoc
	
*/

