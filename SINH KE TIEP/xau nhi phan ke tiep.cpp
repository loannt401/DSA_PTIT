#include<iostream>
using namespace std;

void next(string s){
	int n=s.length(), i=n-1;
	while(i>=0 && s[i]=='1'){
		s[i]='0'; i--;
	}
	if(i>=0) s[i]='1';
	cout<<s<<endl;
}
main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		next(s);
	}
}

