#include<iostream>
using namespace std;
int n, a[100], ok, cnt;
void ktao(){
	cnt = 1;
	a[1] = n;
}
void sinh(){
	int i = cnt;
	while( i > 0 && a[i] == 1) i--;
	if(i == 0) ok = 0;
	else {
		a[i]--;
		int T = cnt - i + 1;
		cnt = i;
		int C = T / a[i];
		int R = T % a[i];
		if(C){
			for(int j=0; j<C; j++){
				cnt++;
				a[cnt] = a[i];
			}
		}
		if(R){ 
			cnt++; a[cnt] = R;
		}
	}
}
void in(){
	cout << "(";
	for(int i=1; i< cnt; i++) cout << a[i] << " ";
	cout << a[cnt] <<") ";
}
main(){
	int t; cin>>t;
	while(t--){
		cin >> n;
		ok=1;
		ktao();
		while(ok){
			in();
			sinh();
		}
		cout<<endl;
	}
}
