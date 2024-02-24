#include<bits/stdc++.h>
using namespace std;
int Xuoi[16], Nguoc[16], X[10], b[10];
int a[10][10], s;

void ql(int i, int t){
	for(int j=1;j<=8;j++){
		if(!b[j] && !Xuoi[i-j+8] && !Nguoc[i+j-1]){
			b[j] = 1; Xuoi[i-j+8] = 1; Nguoc[i+j-1] = 1;
			t += a[i][j];
			if(i==8){
				if(t>s) s=t;
			}
			else ql(i+1,t);
			b[j] = 0; Xuoi[i-j+8] = 0; Nguoc[i+j-1] = 0;
			t -= a[i][j];
		}
	}
}
main(){
	int t; cin >> t;
	while(t--){
		for(int i=1;i<=8;i++){
			for(int j=1;j<=8;j++){
				cin >> a[i][j];
			}
		}
		s=0;
		b[10] = {0}; Xuoi[16]={0}; Nguoc[16]={0};
		ql(1,0);
		cout << s << endl;
	}
	
}
