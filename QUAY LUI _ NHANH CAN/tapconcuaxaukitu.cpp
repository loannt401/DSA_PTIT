#include<bits/stdc++.h>
using namespace std;
int n, x[20];
string s;

void ql(int i){
	for(int j=x[i-1]+1;j<=n;j++){
		x[i] = j;
		for(int k=1;k<=i;k++){
			cout << s[x[k]-1];
		}
		cout << " ";
		if(i<n) ql(i+1);
	}
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> s;
		x[0] = 0;
		ql(1);
		cout << endl;
	}
}
