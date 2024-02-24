#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n, x, y, z;
		cin >> n >> x >> y >> z;
		int F[105] = {0};
		F[1] = x;
		for(int i=2;i<=n;i++){
			if(i%2 == 0) F[i] = min(F[i-1] + x, F[i/2] + z);
			else F[i] = min(F[i-1] + x, F[(i+1)/2] + y + z);
		}
		cout << F[n] << endl;
	}
}


/*
	Name: viet n ki tu giong nhau vao man hinh voi cac thao tac: 
			x: them ki tu, y: xoa ki tu, z: sao chep cac ki tu vua them va paste ra
		viet cac ki tu voi thoi gian ngan nhat
	Copyright: 
	Author: 
	Date: 28/05/22 11:32
	Description: 
	khi den ki tu chan ta co 2 thao tac: them 1 ki tu hoac copy va paste
	 => so sanh 2 thao thac xem cai nao thoi gian it hon thi lay
	voi ki tu le: them va copy paste ( (i+1)/2 copy paste se ra thua 1 ki tu, 
		ta phai xoa ki tu do di.
	
*/















