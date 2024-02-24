#include<bits/stdc++.h>
using namespace std;
int a[100], b[100][100], k=0;
void luu(int cnt){
	k++;
	for(int i=1; i<=cnt; i++){
		b[k][i] = a[i];
	}
	
}
//void in(int cnt){
//	cout << "[";
//	if(cnt == 1) cout << a[cnt] <<"]" << endl;
//	else {
//		for(int i=1; i<cnt; i++){
//			cout << a[i] << " ";
//		}
//		cout << a[cnt] <<"]" << endl;
//	}
//	
//}
void duyet(int idx){
	if(k == 0) return;
	else {
		cout <<"[";
		if(idx == 1) cout <<b[k][idx]<<"] ";
		else {
			for(int i=1; i< idx; i++) cout << b[k][i]<<" ";
			cout << b[k][idx] <<"] ";
		}
		
	}
	k--; 
	duyet(idx + 1);
}
void Try(int cnt){
	for(int i=1; i<cnt; i++){
		a[i] = a[i] + a[i+1];
	}
	if(cnt == 1) return;
	else {
		cnt--;
		luu(cnt);
		Try(cnt);
	} 
}
main(){
	int t; cin>>t;
	while(t--){
		int n; cin >> n;
		for(int i=1; i<=n; i++) cin >> a[i];
		int cnt = n; 
		luu(cnt);
		Try(cnt);
		duyet(1);
		cout << endl;
	}
}
