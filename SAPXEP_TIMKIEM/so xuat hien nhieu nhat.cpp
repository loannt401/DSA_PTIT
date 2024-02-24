#include<iostream>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n; 
		int a[n], i, j, ok=0;
		for(i=0; i<n; i++) cin>>a[i];
		for(i=0; i<n/2+1; i++){
			int dem=1;
			for(j=i+1; j<n; j++){
				if(a[i]==a[j]) dem++;
			}
			if(dem>n/2){
				cout<<a[i]<<endl;
				ok=1;
				break;
			}
		}
		if(!ok) cout<<"NO"<<endl;
	}
}
//neu so lan xuat hien lon hon n/2 thi in ra
//=> ta chi xet mot nua so dau, neu nua dau ko xuat hien tren n/2 thi ko co so can tim
