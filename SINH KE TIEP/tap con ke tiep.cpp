#include<iostream>
using namespace std;
int n, k, a[1001];
void in(){
	for(int i=1; i<=k; i++) cout<<a[i]<<" ";
	cout<<endl;
}
void sinh(){
	int i=k;
	while(i>0 && a[i]==n-k+i) --i;
	if(i==0){
		for(int i=0; i<=k; i++) a[i]=i;
	}
	else{
		a[i]++;
		for(int j=i+1; j<=k; j++) a[j]=a[j-1]+1;
	}
}
main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1; i<=k; i++) cin>>a[i];
		sinh();
		in();
	}
}
