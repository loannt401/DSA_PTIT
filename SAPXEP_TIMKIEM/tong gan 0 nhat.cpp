#include<iostream>
#include<cmath>
using namespace std;

void ktao(int a[], int n){
	for(int i=0; i<n; i++) cin>>a[i];
}

void in(int a[], int n){
	for(int i=0; i<n; i++) cout<<a[i]<<" ";
	cout<<endl;
}

int tonggan0(int a[], int n){
	int min_val = 2000000;
	int s1, s2;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(min_val > abs(a[i]+a[j])){
				min_val = abs(a[i]+a[j]);
				s1 = i; s2 = j;
			}
		}
	}
	return a[s1]+a[s2];
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		ktao(a,n);
		cout<<tonggan0(a,n)<<endl;		
	}
}









