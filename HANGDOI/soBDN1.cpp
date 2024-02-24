#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		vector<int> a;
		while(n>0){
			a.push_back(n%10);
			n/=10;
		}
		reverse(a.begin(), a.end());
		int vt = a.size();
		for(int i=0;i<a.size();i++){
			if(a[i] >= 2){
				vt = i;
				break;
			}
		}
		for(int i=vt;i<a.size();i++) a[i] = 1;
		long long res = 0;
		long long s = 1;
		for(int i=a.size()-1;i>=0;i--){
			res += a[i]*s;
			s *= 2;
		}
		cout << res << endl;
	}
}

/*
	Name: so cac BDN nho hon hoac bang n 
	BDN la cac so 0 hoac 1
	Copyright: 
	Author: 
	Date: 29/05/22 17:32
	Description: 
	Y tuong :
	tim so BDN nho hon n gan n nhat bang cach
	duyet tu dau so den cuoi so neu co chu so lon hon 1 
	ta luu vi tri cua so do
	tu vi tri so do ta thay tat so con lai = 1
	=> tim dc so BDN nho hon hoac bang n
	vd: 1120 => so BDN: 1111  
	tu so BDN t chuyen ve so thap phan 
	vd 110 = 0*2^0 + 1*2^1 + 1*2^2
	 
*/


















