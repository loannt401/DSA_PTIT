#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		int a[n+1];
		for(int i=1;i<=n;i++) cin >> a[i];
		int j=1;
		while(j<=n && a[j] <= x) j++;
		if(j != 1)cout << j-1 << endl;
		else cout << -1 << endl;
	}
}

//	21/05/22 23:00
