#include<bits/stdc++.h>
using namespace std;

bool bobasobangk(long long a[], int n, long long k){
	for(int i=0;i<n-2;i++){
		long long tong = k - a[i];
		int l = i+1, r = n-1;
		while(l < r){
			if(a[l] + a[r] == tong){
				return 1; 
			}
			else if(a[l] + a[r] < tong) l++;
			else r--;
		}
	}
	return 0;
}

main(){
	int t; cin >> t;
	while(t--){
		int n;
		long long k;
		cin >> n >> k;
		long long a[n];
		for(long long &x:a) cin >> x;
		sort(a,a+n);
		if(bobasobangk(a,n,k)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
