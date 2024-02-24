#include<bits/stdc++.h>
using namespace std;
int n, k, a[25], c[25], ok, cnt;
void in(int idx){
	cout << "{";
	for(int i=1; i<idx; i++){
		cout << c[i];
		if(i != idx-1) cout << " ";
	}
	cout << "} ";
}
void quaylui1(int i, int idx, int t){
	if(t == k){
		ok = 1;
		cnt ++;
		return;
	}
	else if(t > k) return;
	else {
		for(int j=i; j<=n; j++){
			quaylui1(j, idx+1, t+a[j]);
		}
	}
}
void quaylui2(int i, int idx, int t){
	if(t == k){
		in(idx);
		return;
	}
	else if(t > k) return;
	else {
		for(int j=i; j<=n; j++){
			c[idx] = a[j];
			quaylui2(j, idx+1, t+c[idx]);
		}
	}
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k; ok=0; cnt=0;
		for(int i=1; i<=n; i++) cin >> a[i];
		sort(a,a+n+1);
		quaylui1(1,1,0);
		if(!ok) cout << -1;
		else {
			cout << cnt << " ";
			quaylui2(1,1,0);
		}
		cout << endl;
	}
}
