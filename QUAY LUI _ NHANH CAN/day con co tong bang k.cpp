#include<bits/stdc++.h>
using namespace std;
int n, k, a[15], c[15], ok;

void in(int m){
	cout <<"[";
	for(int i=1; i<m; i++){
		cout << c[i] << " ";
	}
	cout << c[m] << "] ";
}
void quaylui(int i, int t){
	int j;
	for(j=1; j<=n; j++){
		if(t + a[j] > k) return;
		if(a[j] >  c[i-1] && t + a[j] <= k){
			c[i] = a[j];
			t = t + a[j];
			if(t == k) {
				ok=1;
				in(i);
			}
			else quaylui(i+1,t);
			t = t - a[j];
		}
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}
		sort(a,a+n+1);
		ok=0; c[0] = -1;
		quaylui(1,0);
		if(!ok) cout << -1;
		cout << endl;
	}
}






//#include<bits/stdc++.h>
//using namespace std;
//int n, k, a[15], c[15], b[101], ok;
//void in(int idx){
//	cout << "[";
//	for(int i=1; i<idx; i++){
//		cout << c[i];
//		if(i != idx-1) cout << " ";
//	}
//	cout << "] ";
//}
//void quaylui( int i, int idx, int t){
//	if(t == k){
//		ok=1;
//		in(idx);
//		return;
//	}
//	for(int j=i; j<=n; j++){
//		c[idx] = a[j];
//		quaylui(j+1, idx+1, t+c[idx]);
//	}
//}
//main(){
//	int t; cin >> t;
//	while(t--){
//		cin >> n >> k;
//		for(int i=1; i<=n; i++) cin >> a[i];
//		sort(a,a+n+1);
//		ok=0;
//		quaylui(1,1,0);
//		if(!ok) cout << -1;
//		cout << endl;
//	}
//}
