#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int n = s.length();
		s = "x" + s;
		int res = 1;
		bool F[n+1][n+1];
		memset(F, false, sizeof(F));
		for(int i=1;i<=n;i++) F[i][i] = true;
		for(int k = 2; k <= n; k++){			// k: khoang cach 
			for(int i=1; i <= n-k+1; i++){
				int j = i + k - 1;
				if(k == 2 && s[i] == s[j]) F[i][j] = true;
				else {
					F[i][j] = F[i+1][j-1] && s[i] == s[j];
				}
				if(F[i][j]) res = max(res, k);
			}
		}
		cout << res << endl;
	}
}

/*
	Name: 
	Copyright: 
	Author: 
	Date: 27/05/22 21:40
	Description: 
	moi ki tu dc coi la 1 xau co doi xung co do dai la 1
	voi xau doi xung co do dai la 2 thi 2 ki tu phai giong nhau
	vs xau ki tu co do dai lon hon 2 thi 2 ki tu ngoai cung bang nhau
		va xau ki tu o giua phai la xau doi xung
		=> F[i][j] la xau ki tu co do dai tu i den j 
			F[i][j] = F[i+1][j-1] bang xau o giua 2 ki tu
			s[i] = s[j] : 2 ki tu ngoai cung bang nhau
			
		F[i][j] = F[i+1][j-1] && s[i] == s[j];
		F[i][j] = F[i+1][j-1] khi va chi khi s[i] = s[j]
*/















