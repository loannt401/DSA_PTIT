#include<iostream> 
using namespace std;
int n, k, a[15], ok;
void ktao(){
	for(int i=1; i<=k; i++) a[i]=i;
}
void in(){
	for(int i=1; i<=k; i++) cout<<a[i];
	cout<<" ";
}
void sinh(){
	int i=k;
	while(i>0 && a[i]==n-k+i) --i;
	if(i==0) ok=0;
	else{
		a[i]++;
		for(int j=i+1; j<=k; j++) a[j]=a[j-1]+1;
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
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
