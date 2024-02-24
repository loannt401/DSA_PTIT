#include<bits/stdc++.h>
using namespace std;
int n, b[15]={0}, X[15];
void in(){
	for(int i=1;i<=n;i++) cout << X[i];
	cout << endl;
}
void ql(int i){
	for(int j=1;j<=n;j++){
		if(!b[j] && j != X[i-1]+1 && j != X[i-1]-1){
			X[i] = j;
			b[j]=1;
			if(i==n) in();
			else ql(i+1);
			b[j] = 0;
		}
	}
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		X[0]=20;
		ql(1);
	}
}

