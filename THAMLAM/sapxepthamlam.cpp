#include<bits/stdc++.h>
using namespace std;
bool check(int a[], int n){
	int i=0, j = n-1;
	while(i<=j){
		if( (a[i] + a[j]) != (n+1)) return false;
		i++;j--; 
	}
	return true;
}
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x:a) cin >> x;
		if(check(a,n)) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
/*
	Name: 
	Copyright: 
	Author: 
	Date: 18/05/22 12:43
	Description: 
*/

