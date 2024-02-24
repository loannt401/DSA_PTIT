#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int A[n+1][m+1];
		for(int i=1; i<=n;i++) for(int j=1;j<=m;j++) cin >> A[i][j];
		int F[n+1][m+1];
		memset(F,0,sizeof(F));
		for(int i=1;i<=n;i++) F[i][1] = F[i-1][1] + A[i][1];
		for(int i=1;i<=m;i++) F[1][i] = F[1][i-1] + A[1][i];
		for(int i=2;i<=n;i++){
			for(int j=2;j<=m;j++){
				F[i][j] = min(F[i-1][j], min(F[i][j-1], F[i-1][j-1])) + A[i][j];
			}
		}
		cout << F[n][m] << endl;
	}
}

//	28/05/22 11:21
