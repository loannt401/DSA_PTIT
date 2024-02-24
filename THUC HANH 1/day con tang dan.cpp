#include<bits/stdc++.h>
using namespace std;
int n, a[25];
vector<int> nho;
vector<vector<int>> lon;
void quaylui(int i){
	for(int j=i+1;j<=n;j++){
		if(a[j]>a[i]){
			nho.push_back(a[j]);
			if(nho.size()>1) lon.push_back(nho);
			quaylui(j);
			nho.erase(nho.end()-1);
		}
	}
}
main(){
	cin >> n;
	for(int i=1;i<=n;i++) cin >> a[i];
	a[0]=0;
	quaylui(0);
	vector<string> kq;
	for(int i=0;i<lon.size();i++){
		string s="";
		for(int j=0;j<lon[i].size();j++){
			s+=to_string(lon[i][j]);
			s+=" ";
		}
		
		kq.push_back(s);
	}
	sort(kq.begin(), kq.end());
	for(auto x:kq) cout <<x<< endl;
}
