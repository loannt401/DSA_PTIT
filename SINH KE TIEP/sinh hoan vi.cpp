#include<iostream> 
using namespace std;
int n, a[10], ok;
void ktao(){
	for(int i=1; i<=n; i++) a[i]=i;
}
void in(){
	for(int i=1; i<=n; i++) cout<<a[i];
	cout<<" ";
}
void sinh(){
	int i=n-1;
	while(i>0 && a[i]>a[i+1]) --i;
	if(i==0) ok=0;
	else{
		int j=n;
		while(j>0 && a[i]>a[j]) --j;
		swap(a[i], a[j]);
		int l=i+1, r=n;
		while(l<r){
			swap(a[l],a[r]); l++; r--;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		ktao();
		ok=1;
		while(ok){
			in();
			sinh();
		}
		cout<<endl;
	}
	return 0;
}
