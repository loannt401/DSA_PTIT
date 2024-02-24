#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin >> n;
	cin.ignore();
	vector<int> List[n+1];
	for(int i=1;i<=n;i++){
		string s; getline(cin,s);
		istringstream s_cin(s);
		int j;
		while(s_cin>>j) List[i].push_back(j);
	}
	int d[100][100];
	memset(d,0,sizeof(d));
	for(int i=1;i<=n;i++){
		for(int j=0;j<List[i].size();j++){
			if(!d[i][List[i][j]] && !d[List[i][j]][i] ) 
				cout << i << " " << List[i][j] << endl;
			d[i][List[i][j]] = d[List[i][j]][i] = 1;
		}
	}
}

