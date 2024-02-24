#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int F[n+1];
		for(int i=0;i<=n;i++) F[i] = i;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=sqrt(i);j++){
				F[i] = min(F[i], F[i-j*j] + 1);
			}
		}
		cout << F[n] << endl;
	}
}

/*
	Name: tim so luong it nhat cac so nho hon N ma tong binh phuong bang n
	Copyright: 
	Author: 
	Date: 28/05/22 12:01
	Description: 
	Note: 
		6 = 2^2+1^2+1^2 => 3 
		100 = 10^2 =>1 
		25=5^2 =>1
	Y tuong:
	goi F[n] la so luong so co tong binh phuong moi so cong lai bang n
		F[n] = 1^2 + 1^2 + ... => co n so 1 binh phuong cong lai ra n
		=> F[i] = i so luong cac so nho hon n tong binh phuong lai bang i
	duyet tu i=1 den i = n thi co 2 truong hop
		F[i] bang chinh no la co so luong nho nhat
		F[i] = F[i-j*j] + 1 bang so luong cac so co tong bang i -j^2 va voi chinh so j
		
*/


















