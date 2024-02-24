#include<bits/stdc++.h>
using namespace std;

void sinh(int n){
	queue<string> q;
	vector<string> v;
	q.push("6");
	v.push_back("6");
	q.push("8");
	v.push_back("8");
	while(1){
		string res = q.front(); q.pop();
		if(res.length() == n) break;
		q.push(res + "6");
		v.push_back(res + "6");
		q.push(res + "8");
		v.push_back(res + "8");
	}
	int i = 0;
	cout << v.size() << endl;
	while(i < v.size()){
		cout << v[i] << " ";
		i++;
	}
	cout << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		sinh(n);
	}
}

//	29/05/22 18:45















