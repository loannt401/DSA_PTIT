#include<bits/stdc++.h>
using namespace std;

string sinh(int n){
	queue<string> q;
	q.push("1");
	while(1){
		string res = q.front(); q.pop();
		long long tmp = 0;
		for(int i=0;i<res.size();i++){
			tmp = 10*tmp + (int)(res[i]-'0');
			tmp%=n;
		}
		if(tmp == 0) return res;
		q.push(res + "0");
		q.push(res + "1");
	}
}
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << sinh(n) << endl;
	}
}

/*
	Name: tim so BDN nho nhat chia het cho n 
		P = M*N 	P: so BDN	N: so chia
	Copyright: 
	Author: 
	Date: 29/05/22 18:12
	Description: 
	Y  tuong :
		dung hang doi de ra tung so
		boi so BDN co the qua lon khong chia duoc 
		=> t chia du khi duyet tung phan tu res nhu tren
		thong thuong khi chia mot so ta se chia tu trai qua phai
		=> phep chia du cung vay chia tu trai qua phai
		khi chia bang tay thuong chia tu trai qua phai nhu sau:
		11101 % 17
		111 % 17 = 9 
		90 % 17 = 5
		51 % 17 = 3 => tmp = 0
		=> ap dung cach chia nay vao bai se khien ta tranh duoc
		bi tran so khi chia
*/















