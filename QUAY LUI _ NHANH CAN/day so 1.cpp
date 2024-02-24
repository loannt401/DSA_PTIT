//#include<bits/stdc++.h>
//using namespace std;
//int n, a[100], cnt;
//void in(){
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
//void Try(int i){
//	a[i] = a[i] + a[i+1];
//	if(i == cnt - 1){
//		cnt--;
//		in(); 
//	}
//	else Try(i+1);
//}
//main(){
//	int t; cin>>t;
//	while(t--){
//		int n; cin >> n;
//		for(int i=1; i<=n; i++) cin >> a[i];
//		cnt = n; in();
//		for(int i=1; i<n; i++) Try(1);
//	}
//}



#include<bits/stdc++.h>
using namespace std;
int n, a[100];
void in(int cnt){
	cout << "[";
	if(cnt == 1) cout << a[cnt] <<"]" << endl;
	else {
		for(int i=1; i<cnt; i++){
			cout << a[i] << " ";
		}
		cout << a[cnt] <<"]" << endl;
	}
	
}
void Try(int cnt){
	for(int i=1; i<cnt; i++){
		a[i] = a[i] + a[i+1];
	}
	if(cnt == 1) return;
	else {
		cnt--;
		in(cnt);
		Try(cnt);
	} 
}
main(){
	int t; cin>>t;
	while(t--){
		int n; cin >> n;
		for(int i=1; i<=n; i++) cin >> a[i];
		int cnt = n; 
		in(cnt);
		Try(cnt);
		
	}
}
