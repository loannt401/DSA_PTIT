#include<bits/stdc++.h>
using namespace std;
int sum(int x){
	int tong = 0;
	for(int i=2;i<=sqrt(x); i++){
		if(x%i==0){
			tong += i;
			if(((x/i)*(x/i)) != x) tong += (x/i);
			if(tong > x) return 1;
		}
	}
	return 0;
}
main(){
	int a, b;
	cin >> a >> b;
	int dem  = 0;
	for(int i=a;i<=b;i++){
		if(sum(i)) dem++;
	}
	cout << dem << endl;
}
