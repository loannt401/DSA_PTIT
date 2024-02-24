#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin >> n;
	int a[n+1][n+1];
	vector<int> List[n+1];
	for(int i=1;i<=n;i++) for(int j=1;j<=n;j++){
		cin >> a[i][j];
		if(a[i][j]) List[i].push_back(j);
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<List[i].size();j++){
			cout << List[i][j] << " ";
		}
		cout << endl;
	}
}

