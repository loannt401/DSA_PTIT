#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n, s; cin >> n >> s;
		int a[n+1], L[s+1];
		L[0] = 1;
		for(int i=1;i<=n;i++){
			cin >> a[i];
		}
		for(int i=1;i<=s;i++) L[i] = 0;
		for(int i=1;i<=n;i++){
			for(int j=s;j>= a[i];j--){
				if(L[j] == 0 && L[j-a[i]] == 1) L[j] = 1;
			}
		}
		if(L[s]) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}

// 	27/05/22 18:19
