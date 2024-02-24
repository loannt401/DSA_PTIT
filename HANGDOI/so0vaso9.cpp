#include<bits/stdc++.h>
using namespace std;

vector<long long> v;
long long ans[101];
void sinh(){
	queue<string> q;
	q.push("9");
	v.push_back(9);
	while(1){
		string x = q.front();
		q.pop();
		if(x.length() == 10) break;
		v.push_back(stoll(x+"0"));
		v.push_back(stoll(x+"9"));
		q.push(x + "0");
		q.push(x+"9");
	}
	for(int i=1;i<=100;i++){
		for(long long x:v){
			if(x%i==0){
				ans[i] = x;
				break;
			}
		}
	}
}
main(){
	sinh();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << ans[n] << endl;
	}
}
