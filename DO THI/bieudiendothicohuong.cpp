#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector<int> List[n+5];
		for(int i=1;i<=m;i++){
			int u, v;
			cin >> u >> v;
			List[u].push_back(v);
		}
		for(int i=1;i<=n;i++){
			cout << i << ":";
			for(int j=0;j<List[i].size();j++) cout <<  " " << List[i][j];
			cout << endl;
		}
	}
}

