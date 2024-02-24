#include<bits/stdc++.h>
#include<string.h>
using namespace std;
string s[30], c[15];
int idx, n, k;
void in(){
	for(int i=1; i<=k; i++) cout << c[i] << " ";
	cout << endl;
}
void quaylui(int i, int x){
	if(i==k+1){
		in();
		return;
	}
	for(int j=x; j<idx; j++){
		c[i] = s[j];
		quaylui(i+1, j+1);
	}
}
main(){
	cin >> n >> k;
	set<string> a;
	for(int i=1; i<=n; i++){
		cin >> s[i];
		a.insert(s[i]);
	}
	idx = 1;
	for(set<string>::iterator it=a.begin(); it!=a.end(); it++){
		s[idx++] = *it;
	}
	quaylui(1,1);
}
