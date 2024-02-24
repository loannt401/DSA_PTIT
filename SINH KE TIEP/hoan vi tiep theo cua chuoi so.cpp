#include<bits/stdc++.h>
using namespace std;
string s;
int ok;
void sinh(){
	int i = s.length()-2;
	while(i>=0 && s[i] >= s[i+1]) i--;
	if(i<0) ok=0;
	else {
		int j = s.length() - 1;
		while(s[j] <= s[i]) j--;
		swap(s[i], s[j]);
		int l=i+1, r=s.length()-1;
		while(l<r){
			swap(s[l], s[r]);
			l++; r--;
		}
	}
}
main(){
	int t; cin >> t;
	while(t--){
		int idx;
		cin >> idx;
		cin >> s;
		ok=1;
		sinh();
		cout << idx << " ";
		if(!ok) cout << "BIGGEST" << endl;
		else {
			cout << s << endl;
		}
	}
}
