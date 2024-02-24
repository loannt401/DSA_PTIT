#include<bits/stdc++.h>
using namespace std;
int n, X[20], dem;
vector<string> v;
void in(int m){
	dem++;
	string s = "(";
	for(int i=1;i<=m;i++) {
		s += to_string(X[i]);
		if(i != m) s += " ";
	}
	s += ")";
	v.push_back(s);
}
void ql(int i, int x, int s){
	for(int j=x;j>=1;j--){
		X[i] = j;
		if(X[i] == s) in(i);
		else if(j<s){
			ql(i+1,j,s-j);
		}
	}
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		dem=0;
		ql(1,n,n);
		cout << dem << endl;
		for(auto x:v) cout << x << " ";
		cout << endl;
		v.clear();
	}
}
