#include<iostream>
#include<algorithm>
using namespace std;

void ktao(int a[], int n){
	for(int i=0; i<n; i++) cin>>a[i];
}

//void in(int a[], int n){
//	for(int i=0; i<n; i++) cout<<a[i]<<" ";
//	cout<<endl;
//}

void sapxepchon(int a[], int n){
	for(int i=0; i<2; i++){
		int min_idx = i;						
		for(int j=i+1; j<n; j++){
			if(a[min_idx]>a[j]) min_idx = j;
		}
		swap(a[i],a[min_idx]);
	}
	if(a[0]==a[1]) cout<<"-1"<<endl;
	else cout<<a[0]<<" "<<a[1]<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
	 	int a[n];
	 	ktao(a,n); 
	  	sapxepchon(a,n);
	}	
	return 0;
}
