#include<bits/stdc++.h>
using namespace std;
struct thoigian{
	int start, finish;
};
bool cmp(thoigian a, thoigian b){
	return a.finish < b.finish; 
}
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		thoigian c[n];
		for(int i=0;i<n;i++){
			cin >> c[i].start;
		}
		for(int i=0;i<n;i++){
			cin >> c[i].finish;
		}
		sort(c,c+n,cmp);
		int i=0, dem =1;
		for(int j=1;j<n;j++){
			if(c[i].finish <= c[j].start){
				dem++;
				i = j;
			}
		}
		cout << dem << endl;
	}
}

// 	22/05/22 00:08

