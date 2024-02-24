#include<iostream>
using namespace std;

void ktao(long long a[], int n){
	for(int i=0; i<n; i++) cin>>a[i];
}

void in(long long a[], int n){
	for(int i=0; i<n; i++) cout<<a[i]<<" ";
	cout<<endl;
}

void giao(long long a[], int n, long long b[], int m, long long c[], int k){
	int i=0, j=0, g1=0, g2=0;
	long long giao1[n];
	while(i<n && j<m){
		if(a[i]==b[j]){
			giao1[g1++]=a[i];
			i++; j++;
		}
		else if(a[i]<b[j]) i++;
		else j++;
	}
	long long giao2[g1];
	int k1=0, k2=0;
	while(k1<g1 && k2<k){
		if(giao1[k1]==c[k2]){
			giao2[g2++]=c[k2];
			k1++; k2++;
		}
		else if(giao1[k1]<c[k2]) k1++;
		else k2++;
	}
	if(g2==0) cout<<-1<<endl;
	else in(giao2, g2);
}

int main(){
	int t; cin>>t;
	while(t--){
		int n,m,k; cin>>n>>m>>k;
		long long a[n], b[m], c[k];
		ktao(a,n); 
		ktao(b,m); 
		ktao(c,k);
		giao(a,n,b,m,c,k); 
	}
}
