#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long F[n+1];
		F[1] = 1;
		int i2=1, i3=1, i5=1;
		for(int i=2;i<=n;i++){
			F[i] = min(F[i2]*2, min(F[i3]*3, F[i5]*5));
			if(F[i] == F[i2]*2) i2++;
			if(F[i] == F[i3]*3) i3++;
			if(F[i] == F[i5]*5) i5++;
		}
		cout << F[n] << endl;
	}
}

/*
	Name: in so ugly thu n sao cho n chia het cho 2, 3, 5
	Copyright: 
	Author: 
	Date: 28/05/22 13:58
	Description: 
	Y tuong:
		liet ke tung thu tu
		ta co so 1 cung la so ugly => F[1] = 1
		lay tich min nhu tren va tang chi so len 
		Luu y:
			khong dc dung else trong truong hop nay vi:
				vd:
				thu tu:	1	2	3	4	5	6
						1	2	3	4	5	6

					i2	1	2	2	3	3	4
					i3	1	1	2	2	2	3
					i5	1	1	1	1	1	1
					
				trong truong hop F[6] = 6 ta co: F[6] = F[i2]*2 = F[i3]*3
				neu dung else trong truong hop nay thi i2 dc tang nhung i3 khong dc tang
				=> F[7] = 6 => so 6 duoc viet 2 lan => sai
*/

















