#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n, m, p; cin >> n >> m >> p;
		string s1, s2, s3; cin >> s1 >> s2 >> s3;
		int F[n+1][m+1][p+1];
		memset(F,0,sizeof(F));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				for(int k=1;k<=p;k++){
					if(s1[i-1] == s2[j-1] && s1[i-1] == s3[k-1]) 
						F[i][j][k] = F[i-1][j-1][k-1] + 1;
					else F[i][j][k] = max(F[i-1][j][k], max(F[i][j-1][k], F[i][j][k-1]));
				}
			}
		}
		cout << F[n][m][p] << endl;
	}
}

//	28/05/22 11:08
