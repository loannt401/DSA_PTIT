#include<bits/stdc++.h>
using namespace std;
int n, m, cnt;
void quaylui(int i, int j){
	if(i==n && j==m){
		cnt++; return;
	}
	if(i+1 <= n) quaylui(i+1, j);
	if(j+1 <= m) quaylui(i, j+1);
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		int a[100][100];
		for(int i=1; i<=n; i++)
			for(int j=1; j<=m; j++) cin >> a[i][j];
		cnt = 0;
		quaylui(1,1);
		cout << cnt << endl;	
	}
}
