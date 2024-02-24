#include<bits/stdc++.h>
using namespace std;
int a[10][10], n, ok;
char s[100];
void in(int k){
	for(int i=0; i<k; i++) cout<<s[i];
	cout<<" ";
}
void quaylui(int i, int j, int k){
	if( i == n-1 && j == n-1 ){
		in(k); ok=1;
		return;
	}
	if(i+1<n && a[i+1][j]==1){
		s[k] = 'D';
		a[i+1][j] = 0;
		quaylui(i+1, j, k+1);
		a[i+1][j] = 1;
	}
	if(j-1 >= 0 && a[i][j-1] == 1){
		s[k] = 'L'; 
		a[i][j-1] = 0;
		quaylui(i,j-1,k+1);
		a[i][j-1] = 1;
	}
	if(j+1<n && a[i][j+1]){
		s[k] = 'R';
		a[i][j+1] = 0;
		quaylui(i,j+1,k+1);
		a[i][j+1] = 1;
	}
	if(i-1>=0 && a[i-1][j]==1){
		s[k] = 'U';
		a[i-1][j] = 0;
		quaylui(i-1,j,k+1);
		a[i-1][j] = 1;
	}
}
main(){
	int t, i, j;
	cin>>t;
	while(t--){
		cin>>n;
		for(i=0; i<n; i++) for(j=0; j<n; j++){
			cin>>a[i][j];
		}
		ok = 0;
		if(a[0][0] == 0) cout<<-1;
		else{
			a[0][0] = 0;
			quaylui(0,0,0);
			if(!ok) cout<< -1;			
		}
		cout << endl;
	}
}
