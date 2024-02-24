//#include<bits/stdc++.h>
//using namespace std;
//main(){
//	int t; cin >> t;
//	while(t--){
//		int d; cin >> d;
//		string s; cin >> s;
//		int Freq['Z'+1] = { };
//		for(int i=0;i<s.length();i++) Freq[s[i]]++;
//		int M = *max_element(Freq+'A', Freq+'Z');
//		if((M - 1)*(d-1) <= s.length() - M) cout << 1 << endl;
//		else cout << -1 << endl;
//	}
//}
//`	21/05/22 09:48

#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int d; cin >> d;
		string s; cin >> s;
		int Freq['Z'+1] = { };
		for(int i=0;i<s.length();i++) Freq[s[i]]++;
		int b[30] = {0}, k=0;
		char c[30];
		int n = s.length();
		int kt[100] = {0};
		for(int i=0;i<s.length();i++){
			if(Freq[s[i]] > 0 && kt[s[i]] == 0 ){
				b[k] = Freq[s[i]];
				c[k] = s[i];
				k++; 
				kt[s[i]] = 1;
			}
		}
		for(int i=0;i<k-1;i++){
			int max_idx = i;
			for(int j=i+1;j<k;j++){
				if(b[max_idx] < b[j]){
					max_idx = j;
				}
			}
			swap(b[i],b[max_idx]);
			swap(c[i],c[max_idx]);
		}
		char KQ[n];
		bool check[n] = {false};
		int i=0, ok = 1;
		while(i<k){
			int j = 0;
			while(check[j] == true) j++;
			int p = b[i];
			for(int t1=0;t1<p;t1++){
				if(j + t1*p >= n){
					ok=0; break;
				}
				else {
					KQ[j+t1*d] = c[i];
					check[j + t1*d] = true;
				}
			}
			if(ok == 0) break;
			else i++;
		}
		
		if(ok ==0) cout << -1 << endl;
		else {
			for(int i=0;i<n;i++) cout << KQ[i];
			cout << endl;
		}
	}
}



//	 
/*
	Name: 
	Copyright: 
	Author: 
	Date: 21/05/22 13:37
	Description: 
	1 3 GEEKSFORGEEKS
	EGKEGKESFESFOR
*/














