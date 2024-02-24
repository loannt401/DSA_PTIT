#include<bits/stdc++.h>
using namespace std;
int n, p, s, h, dem;
int a[100], X[100];
vector<string> v;
bool check(int x){
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0) return false;
	}
	return true;
}
void snt(){
	for(int i=p+1;i<s;i++){
		if(check(i)) a[++h] = i;
	}
}
void in(){
	int sum = 0;
	for(int i=1;i<=n;i++){
		sum += a[X[i]];
	}
	if(sum == s) {
		dem ++;
		string s = "";
		for(int i=1;i<=n;i++) {
			s += to_string(a[X[i]]);
			s += " ";
		}
		v.push_back(s);
	}
}
void ql(int i){
	for(int j=X[i-1]+1;j<=h-n+i;j++){
		X[i] = j;
		if(i == n) in();
		else ql(i+1);
	}
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> p >> s;
		h=0;
		snt();
		X[0] = 0;
		dem = 0;
		ql(1);
		cout << dem << endl;
		for(auto x:v) cout << x << endl;
		v.clear();
	}
}
