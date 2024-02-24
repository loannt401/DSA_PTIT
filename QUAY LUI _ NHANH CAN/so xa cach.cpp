#include<bits/stdc++.h>
using namespace std;
int n, a[10], b[10];
void in(){
	for(int i=1; i<=n; i++) cout << a[i];
	cout << endl;
}
bool check(){
	for(int i=1; i<n; i++){
		if(abs(a[i] - a[i+1]) == 1) return false;
	}
	return true;
}
void quaylui(int i){
	if(i==n+1){
		if(check()) in();
		return;
	}
	for(int j=1; j<=n; j++){
		if(!b[j]){
			b[j] = 1;
			a[i] = j;
			quaylui(i+1);
			b[j] = 0;
		}
	}
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		b[10] = {0};
		quaylui(1);
		cout << endl;
	}
}
