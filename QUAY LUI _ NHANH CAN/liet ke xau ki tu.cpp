#include<bits/stdc++.h>
using namespace std;
char c, a[15];
int k, idx, X[15];
void in(){
	for(int i=1;i<=k;i++) cout << a[X[i]];
	cout << endl;
}
void ql(int i){
	for(int j=X[i-1];j<=idx;j++){
		X[i] = j;
		if(i==k) in();
		else ql(i+1);
	}
}
main(){
	cin >> c >> k;
	a[1] = 'A';
	for(int i=2;i<=11;i++) a[i] = a[i-1] + 1;
	for(int i=1;i<=11;i++){
		if(c == a[i]){
			idx = i;
			break;
		}
	}
	X[0]= 1;
	ql(1);
	 
}
