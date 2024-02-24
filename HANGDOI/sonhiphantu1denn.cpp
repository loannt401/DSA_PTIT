#include<bits/stdc++.h>
using namespace std;

vector<string> v;
void sinh(){
	queue<string> q;
	q.push("1");
	v.push_back("1");
	while(v.size() <= 10000){
		string x = q.front();
		q.pop();
		v.push_back(x+"0");
		v.push_back(x+"1");
		q.push(x + "0");
		q.push(x+"1");
	}
}
main(){
	sinh();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i=0;i<n;i++) cout << v[i] << " ";
		cout << endl;
	}
}
