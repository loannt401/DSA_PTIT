#include<iostream>
using namespace std;
int n, ok, k;
char a[20];
void ktao(){
	for(int i=1; i<=n; i++) a[i] = 'A';
}
void sinh(){
	int i = n;
	while(i > 0 && a[i] == 'B'){
		a[i] = 'A';
		i--;
	}
	if(i == 0) ok = 0;
	else a[i] = 'B';
}
int check(){
	int dem = 1, cnt = 0;
	for(int i=1; i<=n-1; i++){
		if(a[i] == a[i+1] && a[i] == 'A') dem++;
		else {
			if(dem == k) cnt++;
			dem = 1;
		}
	}
	if(dem == k) cnt++;
	if(cnt==1) return 1;
	return 0;
	
}
// tim chu A chi xuat hien 1 lan voi k lan A lien tiep trong day
void in(){
	for(int i=1; i<=n; i++) cout << a[i];
	cout << endl;
}
main(){
	cin >> n >> k;
	ok = 1;
	ktao();
	int cnt = 0;
	while(ok){
		if(check()){
			cnt++;
		}
		sinh();
	}
	cout << cnt << endl;
	ok = 1;
	while(ok){
		if(check()){
			in();
		}
		sinh();
	}
}
