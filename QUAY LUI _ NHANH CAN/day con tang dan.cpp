#include<bits/stdc++.h>
using namespace std;
int n, a[21], c[21];
vector<string> v;
void in(int m){
	string s = "";
	for(int i=1;i<=m;i++) {
		string x = to_string(c[i]);
		s += x;
		s += " ";
	}
	v.push_back(s);
}
void quaylui(int i, int h){
	for(int j=h+1;j<=n;j++){
		if( c[i-1] < a[j] ){
			c[i] = a[j];
			if(i>1){
				in(i);
			}
			quaylui(i+1,j);
		}
	}
}
main(){
	cin >> n;
	for(int i=1;i<=n;i++) cin >> a[i];
	c[0] = 0;
	quaylui(1,0);
	sort(v.begin(), v.end());
	for(auto x:v) cout << x << endl;
}
