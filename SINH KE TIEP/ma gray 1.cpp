#include<bits/stdc++.h>
using namespace std;
int n, ok, idx, cso;
string L1[1000], L2[1000], X[2000];
void ktao(){
	L1[0] = '0'; L1[1] = '1';
	idx = 1; cso=2;
	for(int i=0;i<=idx;i++) X[i] = L1[i];
}
void sinh(){
	if(idx == n) ok=0;
	else {
		int i, c=0, c1=0;
		for(i=0;i<cso;i++) L1[i] = X[i];
		for(i=cso-1;i>=0;i--) L2[c++] = L1[i];
		for(i=0;i<cso;i++) X[c1++] = '0' + L1[i];
		for(i=0;i<cso;i++) X[c1++] = '1' + L2[i];
		idx++; cso = c1;
	}
}
void in(){
	for(int i=0;i<cso;i++) cout << X[i] << " ";
	cout << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		ktao(); ok = 1;
		while(ok){
			sinh();
		}
		in();
	}
}





//#include<bits/stdc++.h>
//using namespace std;
//vector<vector<string>> a;
//void sinh(){
//	vector<string> v1;
//	v1.push_back("0");
//	v1.push_back("1");
//	a.push_back(v1);
//	for(int i=2;i<=10;i++){
//		vector<string> v2(a[i-2]);
//		reverse(v2.begin(), v2.end());
//		vector<string> x;
//		for(int j=0; j< a[i-2].size(); j++){
//			x.push_back("0" + a[i-2][j]);
//		}
//		for(int j=0; j< v2.size(); j++){
//			x.push_back("1" + v2[j]);
//		}
//		a.push_back(x);
//	}
//	
//}
//main(){
//	sinh();
//	int t; cin >> t;
//	while(t--){
//		int n;
//		cin >> n;
//		for(string x: a[n-1]){
//			cout << x << " ";
//		}
//		cout << endl;
//	}
//}


