#include<bits/stdc++.h>
using namespace std;
int n, x[15], a[15], Xuoi[100], Nguoc[100], dem ;
void Try(int i){
	for(int j=1; j<=n; j++){
		if(!a[j] && !Xuoi[i-j+n] && !Nguoc[i+j-1]){
			x[i] = j;
			a[j] = 1; Xuoi[i-j+n] = 1; Nguoc[i+j-1] = 1;
			if(i==n) dem++;
			else Try(i+1);
			a[j] = 0; Xuoi[i-j+n] = 0; Nguoc[i+j-1] = 0;	
		}
	}
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		dem = 0;
		a[n+1] = {0}; Xuoi[2*n] = {0}; Nguoc[2*n] = {0}; 
		Try(1);	
		cout << dem << endl;
	}
}
