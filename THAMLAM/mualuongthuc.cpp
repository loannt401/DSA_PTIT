#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n, s, m; cin >> n >> s >> m;
		int songaymua = (m * s) / n;
		if(songaymua > (s - s/7)) cout << -1 << endl;
		else {
			if((m*s)%n == 0) cout << songaymua << endl;
			else {
				if(songaymua + 1 > (s - s/7) ) cout << -1 << endl;
				else cout << songaymua + 1 << endl;
			}
		} 
	}
}

/*
	Name: 
	Copyright: 
	Author: 
	Date: 21/05/22 13:57
	Description: 
	n: so luong thuc nhieu nhat mua trong ngay
	s: so luong ngay sd luong thuc
	m: so luong thuc sd trong ngay
	
	dua ra so ngay it nhat mua luong thuc de ton tai hoac -1 neu chet doi
*/

