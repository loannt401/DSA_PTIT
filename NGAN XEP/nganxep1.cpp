#include<bits/stdc++.h>
using namespace std;

main(){
	string s;
	int x, a[205], idx=0;
	while(cin >> s){
		if(s == "push"){
			cin >> x;
			a[idx++] = x; 
		}
		else if(s == "pop"){
			if(idx>0) idx--;
		}
		else {
			if(idx>0) {
				for(int i=0;i<idx;i++) cout << a[i] << " ";
				cout << endl;
			}
			else cout << "empty" << endl;
		}
	}
}
