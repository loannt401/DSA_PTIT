#include<bits/stdc++.h>
using namespace std;
string s;
char x[15];
bool check[15];
void in(){
	for(int i=1; i<= s.length(); i++) cout << x[i];
	cout <<" ";
}
void Try(int i){
	for(int j=0; j< s.length(); j++){
		if(check[s[j]]){
			x[i] = s[j];
			check[s[j]] = false;
			if(i==s.length()) in();
			else Try(i+1);
			check[s[j]] = true;
		}
	}
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> s;
		for(int i=0; i<s.length(); i++) check[s[i]] = {true};
		Try(1);
		cout << endl;
	}
}
