#include<bits/stdc++.h>
using namespace std;
queue<int> q;
void inp(int a[], int n){
	for(int i=0;i<n;i++) cin >> a[i];
}
void tron(int a[], int b[], int n, int m){
	int i=0, j=0;
	while(i<n && j<m){
		if(a[i] == b[j]){
			q.push(a[i]);
			i++; j++;
		}
		else if(a[i] < b[j]) i++;
		else j++;
	}
}
main(){
	int t; cin >> t;
	while(t--){
		int n, m, k; cin >> n >> m >> k;
		int a[n], b[m], c[k];
		inp(a,n); inp(b,m); inp(c,k);
		tron(a,b,n,m);
		int d[n+m], h=0;
		while(!q.empty()){
			d[h++] = q.front();
			q.pop();
		}
		tron(d,c,h,k);
		if(q.empty()) cout << "NO" << endl;
		else {
			while(!q.empty()){
				cout << q.front() << " ";
				q.pop();
			}
			cout << endl;	
		}
	}
}

//	21/05/22 21:52
