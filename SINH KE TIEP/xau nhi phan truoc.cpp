#include<iostream>
using namespace std;
string s;
int i;
void sinh(){
	i=s.length()-1;
	while(i>=0 && s[i]=='0'){
		s[i]='1'; --i;
	}
	if(i>=0) s[i]='0';
	cout<<s<<endl;
}
main(){
	int t; cin>>t;
	while(t--){
		cin>>s;
		sinh();
	}
}
