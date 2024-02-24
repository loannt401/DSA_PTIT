#include<bits/stdc++.h>
using namespace std;
main(){	
	int t; cin >> t;
	while(t--){
		int n, V; cin >> n >> V;
		int A[n+1], C[n+1];
		for(int i=1;i<=n;i++) cin >> A[i];
		for(int i=1;i<=n;i++) cin >> C[i];
		int F[n+1][V+1];
		memset(F,0,sizeof(F));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=V;j++){
				F[i][j] = F[i-1][j];
				if(j >= A[i]) F[i][j] = max(F[i-1][j], F[i-1][j-A[i]]+C[i]);
			}
		}
		cout << F[n][V] << endl;
	}	
}

//	27/05/22 19:40
