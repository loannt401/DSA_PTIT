#include<bits/stdc++.h>
using namespace std;
struct toado{
	int start, finish;	
};
bool cmp(toado a, toado b){
	return a.finish < b.finish;
}
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		toado a[n];
		for(auto &x:a) cin >> x.start >> x.finish;
		sort(a,a+n,cmp);
		int i=0, dem=1;
		for(int j=1;j<n;j++){
			if(a[i].finish <= a[j].start){
				dem++; i = j;
			}
		}
		cout << dem << endl;
	}
}

//	21/05/22 21:35
