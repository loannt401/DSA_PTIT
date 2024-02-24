#include<bits/stdc++.h>
using namespace std;
main(){	
	int C, n; cin >> C >> n;
	int v[n];
	for(int &x:v) cin >> x;
	int F[C+1] = {0};
	F[0] = 1;
	int res = 0;
	for(int i=0;i<n;i++){
		for(int j=C;j>=v[i];j--){
			if(F[j] == 0 && F[j-v[i]] == 1){
				F[j] = 1;
				res = max(res, j);
			}
		}
	}
	cout << res << endl;	
}

//	27/05/22 19:22
