#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int k;
		string a, b;
		cin >> k >> a >> b;
		while(a.size() < b.size()) a = "0" + a;
		while(a.size() > b.size()) b = "0" + b;
		int n = a.size();
		int nho = 0;
		string tong = "";
		for(int i=n-1;i>=0;i--){
			int so = (int)(a[i] - '0') + (int)(b[i] - '0') + nho;
			tong = char(so%k + '0') + tong;
			nho = so/k;
		}
		if(nho > 0) tong = (char)(nho + '0') + tong;
		cout << tong << endl;
	}
}

//	22/05/22 17:49
