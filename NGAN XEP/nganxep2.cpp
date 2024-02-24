#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	int x, a[1005], idx=0;
	while(t--){
		string s; cin >> s;
		if(s == "PUSH"){
			cin >> x;
			a[idx++] = x; 
		}
		else if(s == "POP"){
			if(idx>0) idx--;
		}
		else {
			if(idx>0) {
				cout << a[idx-1] << endl;
			}
			else cout << "NONE" << endl;
		}
	}
}
