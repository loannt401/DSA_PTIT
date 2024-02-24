#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		int n = s1.length(), m = s2.length();
		int F[n+1][m+1];
		s1 = "x" + s1;
		s2 = "x" + s2;
		for(int i=0;i<=n;i++) F[i][0] = 0;
		for(int i=0;i<=m;i++) F[0][i] = 0;
		int i=0, j=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(s1[i] == s2[j]) F[i][j] = F[i-1][j-1] + 1;
				else F[i][j] = max(F[i-1][j], F[i][j-1]);
			}
		}
		cout << F[n][m] << endl;
	}
}

//	27/05/22 17:54
