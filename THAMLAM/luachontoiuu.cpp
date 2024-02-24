#include<bits/stdc++.h>
using namespace std;
struct thoigian{
	int t1, t2;
};
bool cmp(thoigian a, thoigian b){
	return a.t2 < b.t2;
}
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		thoigian a[n];
		for(auto &x:a) cin >> x.t1 >> x.t2;
		sort(a,a+n,cmp);
		int i=0, dem = 1;
		for(int j=1;j<n;j++){
			if(a[i].t2 <= a[j].t1 ){
				dem++;
				i = j;
			}
		}
		cout << dem << endl;
	}
}

//	21/05/22 21:27
