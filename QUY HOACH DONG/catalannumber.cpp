#include<bits/stdc++.h>
using namespace std;
string cong(string a, string b){
	while(a.size() > b.size()) b = "0" + b;
	while(a.size() < b.size()) a = "0" + a;
	int n = a.size() - 1;
	int nho = 0;
	string res = "";
	for(int i=n;i>=0;i--){
		int so = int(a[i] - '0') + int(b[i] - '0') + nho;
		res = char(so%10 + '0') + res;
		nho = so/10;
	}
	if(nho > 0) res = char(nho + '0') + res;
	return res; 
}
string nhan(string a, string b){
	int n, m;
	string lon, nho;
	if(a.size() > b.size()) {
		n = b.size(); m = a.size(); 
		lon = a; nho = b;
	}
	else {
		n = a.size(); m = b.size();
		lon = b; nho = a;
	} 
	string res[n];
	int index = 0;
	for(int i=n-1;i>=0;i--){
		res[index] = "";
		int t = 0;
		while(t<index){
			res[index] += "0";
			t++;
		}
		int du = 0;
		for(int j=m-1;j>=0;j--){
			int so = int(lon[j] - '0') * int(nho[i] - '0') + du;
			res[index] = char(so%10 + '0') + res[index];
			du = so/10;
		}
		if(du > 0) res[index] = char(du + '0') + res[index];
		index++;
	}
	string tong = "";
	for(int i=0;i<n;i++){
		tong = cong(tong, res[i]); 
	}

	return tong; 
}

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string F[105];
		F[0] = "1"; F[1] = "1"; 
		for(int i=2;i<=n;i++){
			F[i] = "";
			for(int j=0;j<i;j++){
				F[i] = cong(F[i] , nhan(F[j],F[i-j-1]));
			}
		}
		cout << F[n] << endl;
	}
}

//	28/05/22 13:15
















