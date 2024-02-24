#include<iostream>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n+1], i, j, ok=0;
		for(int i=1; i<=n; i++) cin>>a[i];
		int val1=a[1], val2=0;
		for(int i=3; i<=n; i++) val2+=a[i];
		for(i=2; i<=n; i++){
			if(val1==val2){
				cout<<i<<endl;
				ok=1;
				break;
			}
			else{
				val1+=a[i];
				val2-=a[i+1];
			}
		}
		if(!ok) cout<<"-1"<<endl;
	}
}
