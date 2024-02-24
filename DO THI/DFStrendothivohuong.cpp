#include<bits/stdc++.h>
using namespace std;
vector<int> List[1005];
bool chuaxet[1005];
void DFS(int u){
	chuaxet[u] = false;
	cout << u << " ";
	for(int i=0;i<List[u].size();i++){
		int v = List[u][i];
		if(chuaxet[v]) DFS(v);
	}
}
main(){
	int t; cin >> t;
	while(t--){
		for(int i=1;i<1005;i++) List[i].clear();
		memset(chuaxet,true,sizeof(chuaxet));
		int n, m, a;
		cin >> n >> m >> a;
		
		for(int i=1;i<=m;i++){
			int u, v;
			cin >> u >> v;
			List[u].push_back(v);
			List[v].push_back(u);
		}
		DFS(a);
		cout << endl;
	}
}


