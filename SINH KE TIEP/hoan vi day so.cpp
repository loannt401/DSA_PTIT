#include<bits/stdc++.h>
using namespace std;
int n, a[10], ok;
void sapxepchen(){
	for(int i=2; i<=n; i++){
		int key = a[i];
		int j=i-1;
		while(j>0 && key < a[j]){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
}
void sinhhoanvi(){
	int i = n-1;
	while(i>0 && a[i] > a[i+1]) i--;
	if(i==0) ok=0;
	else {
		int j=n;
		while(a[i]>a[j]) j--;
		swap(a[i], a[j]);
		int l=i+1, r=n;
		while(l<r){
			swap(a[l], a[r]);
			l++; r--;
		}
		
	}
	
}
void in(){
	for(int i=1; i<=n; i++) cout<<a[i]<<" ";
	cout<<endl;
}
main(){
	cin>>n;
	for(int i=1; i<=n; i++) cin>>a[i];	
	sapxepchen();
	ok=1;
	while(ok){
		in();
		sinhhoanvi();
	}
}
