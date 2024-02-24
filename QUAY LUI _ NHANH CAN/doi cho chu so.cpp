#include<bits/stdc++.h>
using namespace std;
int n;
string s;
void kq(){
	for(int i=0;i<s.length();i++){
		if(n == 0) {
			break;
		}
		else {
			int max_val = s.back(), idx = s.length()-1;
			for(int j=i+1;j<s.length();j++){
				if(s[j] >= max_val) {
					max_val = s[j];
					idx = j;
				}
			}
			if(max_val > s[i]){
				swap(s[i], s[idx]);
				n--;
			}
		}
	}
	cout << s << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> s;
		kq();
	}
}
