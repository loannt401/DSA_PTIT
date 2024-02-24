#include<bits/stdc++.h>
using namespace std;
int n, k, a[20], ok, sum, cnt;
void ktao(){
	for(int i=1; i<=k; i++) a[i] = i;
}
void sinh(){
	int i = k;
	while(i > 0 && a[i] == n - k + i) i--;
	if(i == 0) ok = 0;
	else {
		a[i]++;
		for(int j=i+1; j<=k; j++) a[j] = a[j-1] + 1;
	}
}
main(){
	while( cin >> n && cin>>k && cin >>sum){
		if(n == k && k == sum && n == 0) break;
		else{
			if(n < k) cout << 0 << endl;
			else{
				cnt = 0;
				ktao();
				ok = 1;
				while(ok){
					int t = 0;
					for(int i=1; i<=k; i++){
						t += a[i];
					}
					if(sum == t) cnt++;
					sinh();
				}
				cout << cnt << endl;	
			}
		}
	}
}
