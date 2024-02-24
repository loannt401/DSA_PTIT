#include<bits/stdc++.h>
using namespace std;
int n, k, a[20], b[20], ok;
void sinh(){
	int i = k;
	while(i>0 && a[i] == n - k + i) i--;
	if(i==0) ok = 0;
	else {
		a[i]++;
		for(int j = i+1; j<=k; j++) a[j] = a[j-1] + 1;
	}
}
int check(){
	int i=1, j=1, g=0;
	while(i<=k && j<=k){
		if(a[i] == b[j]){
			g++; i++; j++;
		}
		else if(a[i] > b[j]) j++;
		else i++;
	}
	return k - g;
}
void in(){
	for(int i=1; i<=k; i++) cout << a[i];
}
main(){
	int t; cin >> t;
	while(t--){
		b[k+1] = {0};
		cin >> n >> k;
		for(int i=1; i<=k; i++) cin >> a[i];
		for(int i=1; i<=k; i++) b[i] = a[i];
		ok = 1;
		sinh();
		if(!ok) cout << k << endl;
		else{
			cout << check() << endl;
		}
	}
}
