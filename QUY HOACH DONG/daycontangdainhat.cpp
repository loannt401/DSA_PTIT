#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin >> n;
	int a[n], L[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
		L[i] = 1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i] > a[j]) L[i] = max(L[i], L[j] + 1);
		}
	}
	cout << *max_element(L,L+n) << endl;
}

//	27/05/22 17:20
