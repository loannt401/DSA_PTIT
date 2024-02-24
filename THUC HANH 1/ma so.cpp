#include<bits/stdc++.h>
using namespace std;
int n, idx, c[6], it;
bool b[100];
char a[6];
string A[150];
void luu(){
	for(int i=1;i<=n;i++) A[idx] += a[i];
	idx++;
}
void quaylui1(int i){
	for(char j='A'; j< 'A' + n; j++){
		if(!b[j]){
			a[i] = j; b[j] = 1;
			if(i==n) luu();
			else quaylui1(i+1);
			b[j] = 0; 
		}
	}
}
void in(){
	cout << A[it];
	for(int i=1;i<=n;i++) cout << c[i];
	cout <<endl;
}
void quaylui2(int i){
	for(int j= 1;j<=n;j++){
		c[i] = j;
		if(i==n) in();
		else quaylui2(i+1);
	}
}
main(){
	cin >> n;
	b[100] = {0};
	idx=0;
	it = 0;
	quaylui1(1);
	while(it < idx){
		c[0] = 0;
		quaylui2(1);
		it++;
	}
}

