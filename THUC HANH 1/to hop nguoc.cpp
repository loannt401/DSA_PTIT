#include<bits/stdc++.h>
using namespace std;
int n, k, a[20];
void in(){
	for(int i=1;i<=k;i++) cout << a[i] << " ";
	cout << endl;
}
void quaylui(int i){
	for(int j=n-k+i; j>=a[i-1]+1; j--){
		a[i] = j;
		if(i==k){
			in();
		}
		else quaylui(i+1);
	}
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		a[0] = 0; 
		quaylui(1);
	}
}

