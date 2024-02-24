#include<iostream> 
using namespace std;
int n, a[1001], ok;
void in(){
	for(int i=1; i<=n; i++) cout<<a[i]<<" ";
	cout<<endl;
}
void sinh(){
	int i=n-1;
	while(i>0 && a[i]>a[i+1]) --i;
	if(i==0){
		int l=1, r=n;
		while(l<r){
			swap(a[l],a[r]); l++; r--;
		}
	}
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
		for(int i=1; i<=n; i++) cin>>a[i];
		sinh(); 
		in();
	}
	return 0;
}
