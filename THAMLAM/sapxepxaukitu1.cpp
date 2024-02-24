#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int a[30] = {0};
		for(int i=0;i<s.length();i++){
			a[s[i] - 'a'] ++;
		}
		int max_val = 0;
		for(int i=0;i<30;i++){
			if(max_val < a[i]) max_val = a[i]; 
		}
		if(s.length() - max_val >= max_val - 1) cout<< 1 << endl;
		else cout << -1 << endl;
	}
}

/*
	Name: 
	Copyright: 
	Author: 
	Date: 19/05/22 22:14
	Description: 
	kiem tra xem co the sap xep 2 ki tu giong nhau khong ke nhau hay khong
	1: dc
	-1: khong
	ap dung cong thuc: 
	s.size()-d>=d-1
	vs d la gia tri so lan phan tu xuat hien nhieu nhat trong chuoi
*/


#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int a['z'+1] = { };
		for(int x:a) cout << x << " ";
		for(int i=0;i<s.length();i++) a[s[i]]++;
		int M = *max_element(a+'a',a+'z');
		if(s.length() - M >= M - 1) cout << 1 << endl;
		else cout << -1 << endl;
	}
}
// 20/05/22 22:00

