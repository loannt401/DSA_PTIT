#include<bits/stdc++.h>
using namespace std;
int n, m, x, A[100000], B[100000]; 

int tron(){
	int H[200000];
	int i=0,j=0,h=0;
	while(i<n && j<m){
		if(A[i] <= B[j]) {
			H[++h] = A[i];
			i++;
		}
		else {
			H[++h] = B[j];
			j++;
		}
	}
	while(i<n){
		H[++h] = A[i];
		i++;
	}
	while(j<m){
		H[++h] = B[j];
		j++;
	}
	return H[x];
}

main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m >> x;
		int i;
		for(i=0;i<n;i++) cin >> A[i];
		for(i=0;i<m;i++) cin >> B[i];
		cout << tron() << endl;
		
	}
}

