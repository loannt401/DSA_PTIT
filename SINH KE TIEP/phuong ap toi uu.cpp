#include<bits/stdc++.h>
using namespace std;
int n;	// n: so do vat
int bestvalue = 0, bestway[1001];	// phuong an tot nhat
int X[1001];	// phuong an thu
int ok;
void ktao(){
	for(int i=1;i<=n;i++) X[i] = 1;
}
void capnhat(int giatri){
	bestvalue = giatri;
	for(int i=1;i<=n;i++) bestway[i] = X[i];
}
void sinh(){
	int i = n;
	while(i>0 && X[i] == 0){
		X[i] = 1;
		i--;
	}
	if(i==0) ok = 0;
	else {
		X[i] = 0;
	}	
}
main(){
	int weight;	//  can nang gioi han
int a[1001], b[1001];	// gia tri do vat, can nang do vat
	cin >> n >> weight;
	int i;
	for(i=1;i<=n;i++) cin >> a[i];
	for(i=1;i<=n;i++) cin >> b[i];
	ktao(); ok=1;
	while(ok){
		int tong =0, giatri=0;
		for(i=1;i<=n;i++){
			giatri += X[i]*a[i];
			tong += X[i]*b[i];
		}
		if(tong == weight && giatri > bestvalue) capnhat(giatri);
		sinh();
	}
	cout << bestvalue << endl;
	for(i=1;i<=n;i++) cout << bestway[i] << " ";
	cout << endl;	
}
