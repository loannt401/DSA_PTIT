#include<bits/stdc++.h>
using namespace std;
int x[10]; //12345678
int check(){     // 22022022
	for(int i=1; i<=8; i++){
		if(x[1]==0 && x[2]==0) return 0;
		if(x[3]!=0 || x[4]!=2 || x[5]!=2 ) return 0;
	}
	return 1;
}
void in(){
	cout << x[1] << x[2] << "/" << x[3] << x[4] <<"/"<<x[5]<<x[6]<<x[7]<<x[8];
	cout << endl;
}
void Try(int i){
	for(int j=0; j<=2; j+=2){
		x[i] = j;
		if(i==8){
			if(check()) in();
		} 
		else Try(i+1);
	}
}
main(){
	Try(1);
}

