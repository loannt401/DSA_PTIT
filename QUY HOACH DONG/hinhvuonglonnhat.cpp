#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n+1][m+1];
		for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin >> a[i][j];
		int F[n+1][m+1];
		memset(F,0,sizeof(F));
		int res = 0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(a[i][j]){
					F[i][j] = min(F[i-1][j], min(F[i][j-1], F[i-1][j-1])) + 1;
					res = max(res, F[i][j]);
				}
			}
		}
		cout << res << endl;
	}
}

//	28/05/22 01:09

