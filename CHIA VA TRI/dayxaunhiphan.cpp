#include<bits/stdc++.h>
using namespace std;
long long F[100];
int duyetxaunhiphan(int n, long long k){
	if(n == 1) return 0;
	else if(n == 2) return 1;
	if(k <= F[n-2]) return duyetxaunhiphan(n-2, k);
	return duyetxaunhiphan(n-1, k - F[n-2]);
}
main(){
	F[0] = 0; F[1] = 1;
	for(int i=2;i<93;i++) F[i] = F[i-2] + F[i-1];
	int t; cin >> t;
	while(t--){
		int n;
		long long k; 
		cin >> n >>k;
		cout << duyetxaunhiphan(n,k) << endl;
	}
}

/*
	Name: tim ki tu thu k trong xau x[n]
	Copyright: 
	Author: 
	Date: 22/05/22 12:14
	Description: 
	ta thay:
	x[1] = 0
	X[2] = 1
	X[3] = 01
	X[4] = 101
	X[5] = 01101
	X[6] = 10101101
	...
	t thay so ki tu trong X[i] la mot so fibonacci: bang so ki tu cua X[i-2]+ X[i-1]
	=> goi F[i] luu so ki tu cho xau X[i]
	
	vi du tim ki tu vi tri thu 4 trong xau X[6]
	xau 6 bang xau 4 + xau 5
	=> so sanh 4 voi so ki tu xau 4 thay 4 > 3 
	=> ki tu 4 can tim o xau 5
	=> tim kiem vi tri (4 - so ki tu xau 4) = 1 o xau 5
	=> xau 5 = xau 3 + xau 4; x[3] = 2; x[4] = 3;
	=> vi tri 1 o xau 5 chinh la vi tri 1 o xau 3
	=> xau 3 = xau 1 + xau 2; x[1] = 1; x[2] =1
	=> 1 = X[1] => ki tu nam trong xau 1
	=> n = 1 ki tu k = 0
		
*/

