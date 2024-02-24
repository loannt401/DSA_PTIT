#include<bits/stdc++.h>
using namespace std;
struct Congviec{
	int stt, thoigian, loinhuan;
};
bool cmp(Congviec A, Congviec B){
	return A.loinhuan > B.loinhuan;
}
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		Congviec A[n];
		for(int i=0;i<n;i++) cin >> A[i].stt >> A[i].thoigian >> A[i].loinhuan;
		sort(A, A+n, cmp);
		int socv = 0, tongloinhuan = 0;
		bool check[1005] = {false};
		for(int i=0;i<n;i++){
			while(check[A[i].thoigian] && A[i].thoigian > 0) A[i].thoigian --;
			if(!check[A[i].thoigian] && A[i].thoigian > 0){
				check[A[i].thoigian] = true;
				tongloinhuan += A[i].loinhuan;
				socv++;
			}
		}
		cout << socv << " " << tongloinhuan << endl;
	}
}

/*
	Name: 
	Copyright: 
	Author: 
	Date: 22/05/22 17:19
	Description: 
	deadline: thoi han cuoi cung hoan thanh cong viec
	Y tuong:
		sap xep giam dan cac loi nhuan
		coi moi cong viec dc hoan thanh trong 1 don vi thoi gian
		duyet tu 1 den n cong viec da sap xep
		neu thoi han deadline cua cong viec i con trong 
		=> thoi gian do danh cho cong viec i
		neu thoi han deadline cua cong viec i khong cong trong
		=> ta giam thoi han deadline xuong cac thoi gian cong trong 
*/

