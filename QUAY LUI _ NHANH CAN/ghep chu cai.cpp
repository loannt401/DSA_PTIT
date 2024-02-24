#include<bits/stdc++.h>
using namespace std;
char c, a[10];
int b[10], n, d[10]={0}, X[10];
void chucai(){
	a[1] = 'A';
	for(int i=2;i<=8;i++) a[i] = a[i-1] + 1;
	b[1] = 1;
	b[5] = 1;
	for(int i=2;i<=8;i++){
		if(i != 5) b[i] = 0;
	}
}
int check(){
	for(int i=3;i<=n;i++){
		if(b[X[i-2]] == b[X[i]] && b[X[i]] == 0 && b[X[i-1]] == 1) return 0;
	}
	return 1;
}
void in(){
	if(check()){
		for(int i=1;i<=n;i++) cout << a[X[i]];
		cout << endl;
	}
}
void ql(int i){
	for(int j=1;j<=n;j++){
		if(!d[j]){
			X[i] = j;
			d[j] = 1;
			if(i==n) in();
			else ql(i+1);
			d[j] = 0;
		}
	}
}
main(){
	chucai();
	cin >> c;
	n = c - 'A' + 1;
	ql(1);
}
