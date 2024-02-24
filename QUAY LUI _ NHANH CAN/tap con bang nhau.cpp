#include<bits/stdc++.h>
using namespace std;
int n, a[101],b[105],to, ok, s;
void ql(int i){
	for(int j=1;j<=n;j++){
		if(!b[j]){
			to += a[j]; b[j]=1;
			if(to==s/2){
				ok=1; return;
			}
			if(to<s/2) ql(i+1);
			to -= a[j];
			b[j]=0;
		}
		
	}
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		s=0;
		for(int i=1;i<=n;i++){
			cin >> a[i];
			s += a[i];
			b[i]=0;
		}
		if(s%2!=0) cout << "NO" << endl;
		else {
			ok=0;to=0;
			ql(1);
			if(ok) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	
	}
}

