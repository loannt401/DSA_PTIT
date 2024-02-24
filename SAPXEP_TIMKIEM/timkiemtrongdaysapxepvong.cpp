#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		int a[n];
		for(int &x:a) cin >> x;
		if(a[0] == x) cout << 1;
		else if(a[n-1] == x) cout << n;
		else if(a[0] < x){
			int j=1;
			while(j<n && a[j] < x) j++;
			cout << j+1; 
		}
		else {
			int j = n - 1;
			while(j>0 && a[j] > x) j--;
			cout << j+1;
		}
		cout << endl;
	}
}

//	21/05/22 23:51
