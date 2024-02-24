#include<iostream>
#include<algorithm>
using namespace std;
void ktao(int a[], int n){
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
}
void sapxepchon(int a[], int n){
	for(int i=1; i<=n-1; i++){
		int min_idx=i;
		for(int j=i+1; j<=n; j++){
			if(a[min_idx]>a[j]){
				min_idx=j;
			}
		}
		swap(a[i], a[min_idx]);
	}
}
void sosanh(int a[], int b[], int n){
	int min_idx=1, max_idx=n;
	while(a[min_idx]==b[min_idx]){
		min_idx++;
	}
	while(a[max_idx]==b[max_idx]) max_idx--;
	cout<<min_idx<<" "<<max_idx<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n]; ktao(a,n);
		int b[n];
		for(int i=1; i<=n; i++) b[i]=a[i];
		sapxepchon(b,n);
		sosanh(a,b,n);
	}
}
