#include<bits/stdc++.h>
using namespace std;
main(){	
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		if(s[0] == '0') cout << '0' << endl;
		else {
			int n = s.length();
			int F[50] = {0};
			F[0] = 1; F[1] = 1;
			for(int i=2;i<=n;i++){
				if(s[i-1] != '0') F[i] = F[i-1];
				if(s[i-2] == '1' || (s[i-2] == '2' && s[i-1] < '7')) 
					F[i] = F[i-1] + F[i-2];
			}
			cout << F[n] << endl;
		}	
	}
}


#include<bits/stdc++.h>
using namespace std;
int tinh(string s) {
	int n=s.length(), i, F[50] = {0};
	if(s[0] == '0') return 0;
	F[0] = 1; F[1] = 1;
	for(i=2;i<=n;i++){
		if(s[i-1] != '0') F[i] = F[i-1];
		if(s[i-2] == '1' || (s[i-2] == '2' && s[i-1] < '7'))
			F[i] = F[i] + F[i-2];
	}
	return F[n];
}
main(){
	int t; string s;
	cin >> t;
	while(t--){
		cin >> s;
		cout << tinh(s) << endl;
	}
}


/*
	Name: so cach ma hoa khi cho A->1, B->2, ... Z->26
	Copyright: 
	Author: 
	Date: 27/05/22 20:52
	Description: 
	M = 123 => ABC(1 2 3), LC(12 3), AW(1 23) => 3 CACH MA HOA
	
	voi s[0] = 0 thi 0 co cach ma hoa nao het
	nhung s[i != 0 ] thi co cach ma hoa => so 10, 20
	khi s[i] != 0 => so cach F bang so cach trc do
	voi cac so 12, 13, ... 19 va 20,21,... 27 
		ta lay F hien tai cong voi F[i-2] (so cach trc so 20, 12 ...)
*/


















