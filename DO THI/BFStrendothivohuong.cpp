#include<bits/stdc++.h>
using namespace std;
vector<int> List[1005];
bool chuaxet[1005];
int n, m, a;
void DFS(int u){
	queue<int> q;
	q.push(u);
	chuaxet[u] = false;
	cout << u << " ";
	while(!q.empty()){
		int x = q.front(); q.pop();
		for(int i=0;i<List[x].size();i++){
			int y = List[x][i];
			if(chuaxet[y]){
				q.push(y);
				chuaxet[y] = false;
				cout << y << " ";
			}
		}
	}
	cout << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		for(int i=1;i<1005;i++) List[i].clear();
		memset(chuaxet,true,sizeof(chuaxet));
		cin >> n >> m >> a;
		
		for(int i=1;i<=m;i++){
			int u, v;
			cin >> u >> v;
			List[u].push_back(v);
			List[v].push_back(u);
		}
		DFS(a);
	}
}

