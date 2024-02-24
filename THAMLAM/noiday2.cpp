#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		priority_queue<long long, vector<long long>, greater<long long>> q;
		long long a;
		for(long long i=0;i<n;i++){
			cin >> a;
			q.push(a);
		}
		long long sum = 0;
		while(q.size() > 1){
			long long first = q.top(); q.pop();
			long long second = q.top(); q.pop();
			first%=mod;
			second%=mod;
			long long tong = first + second;
			tong%=mod;
			sum = sum + tong;
			sum%=mod;
			q.push(tong);
		}
		cout << sum << endl;
	}
}
