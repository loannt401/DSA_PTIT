#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> res;
ll a[501] = {0};
bool ok;
void sinh(string &s){
	int i = s.length() - 1;
	while(i>=0 && s[i] == '9'){
		s[i] = '0'; i--;
	}
	if(i==0) ok = false;
	else s[i] = '9';
}
void boiso(){
	ok = true;
	string s = string(13,'0');
	sinh(s);
	while(ok){
		res.push_back(stoll(s));
		sinh(s);
	}
	for(int i=1;i<=500;i++){
		for(ll x:res){
			if(x%i == 0){
				a[i] = x; break;
			}
		}
	}
}

main(){
	boiso();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << a[n] << endl;
	}
}


/*
	Name: 
	Copyright: 
	Author: 
	Date: 28/05/22 00:18
	Description: 
	boi so tu 1 den 500 co so lon nhat la 13 chu so
	=> sinh xau nhi phan 13 chu so => su dung string
	
*/












