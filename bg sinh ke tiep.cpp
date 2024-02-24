//#include<bits/stdc++.h>
//using namespace std;
//int ok=0;
//
//void in(){
//	for(int i=1; i<=n; i++) cout<<b[i]<<endl;
//}
//void sinh(){
//	// khi gap cau hinh cuoi cung thi gan ok=1
//	int i=n;
//	while(b[i]){
//		b[i]=0; i--;
//	}
//	if(i==0) ok=1
//	else b[i]=1;
//}
//main(){
//	// thiet lap cau hinh dau tien
//	while(!ok){
//		in();
//		sinh();
//	}
//}


// DSA01020
//#include<bits/stdc++.h>
//using namespace std;
//
//void next(string s){
//	int n=s.length(), i=n-1;
//	while(i>=0 && s[i]=='0'){
//		s[i]='1'; i--;
//	}
//	if(i>=0) s[i]='0';
//	cout<<s<<endl;
//}
//
//main(){
//	int t; string s;
//	cin>>t;
//	while(t--){
//		cin>>s;
//		next(s);
//	}
//}

// xau nhi phan khong chay dc qua 20




// sinh to hop

//#include<bits/stdc++.h>
//using namespace std;
//
//int ok, c[20], n, k;
//
//void in(){
//	for(int i=1; i<=k; i++) cout<<c[i];
//	cout<< " ";
//}
//void sinh(){
//	int i=k, j;
//	while(c[i]==n-k+i) i--;
//	if(i==0) ok=1;
//	else{
//		c[i]=i;
//		for(j=i+1; j<=k; j++) c[j]=c[j-1]+1;
//	}
//}
//main(){
//	int t, i;
//	cin>>t;
//	while(t--){
//		cin>>n>>k;
//		for(i=1; i<=k; i++) c[i]=i;
//		ok=0;
//		while(!ok){
//			in();
//			sinh();
//		}
//		
//	}
//}






//#include<bits/stdc++.h>
//using namespace std;
//int n,k,ok,c[1001];
//
//void in(){
//	for(int i=1; i<=k; i++) cout<<c[i];
//	cout<<" ";
//}
//void sinh(){
//	int i=k, j;
//	while(i>0 && c[i]-c[i-1]==1) i--;
//	if(i==0){
//		for(j=1; j<=k; j++) c[j]=n-k+j;
//	}
//	else{
//		c[i]--;
//		for(j=i+1; j<=k; j++) c[j]=n-k+j;
//	}
//	in();
//}
//main(){
//	int t, i;
//	cin>>t;
//	while(t--){
//		cin>>n>>k;
//		c[0]=0;
//		for(int i=1; i<=k; i++) cin>>c[i];
//		sinh();
//	}
//}


//sinh hoan vi

//#include<bits/stdc++.h>
//using namespace std;
//int ok=0, a[15], n;
//void in(){
//	for(int i=1; i<=n; i++) cout<<a[i]<<" ";
//	cout<<endl;
//}
//void sinh(){
//	int i=n-1, j, t;
//	while(a[i]>a[i+1]) i--;
//	if(i==0) ok=1;
//	else{
//		j=n;
//		while(a[j]<a[i]) j--;
//		t = a[i]; a[i]=a[j]; a[j]=t;
//		int d=i+1, c=n;
//		while(d<c){
//			t=a[d]; a[d]=a[c]; a[c]=t;
//			d++; c--;
//		}
//	}
//}
//main(){
//	cin>>n; for(int i=1; i<=n; i++) a[i]=i;
//	while(!ok){
//		in();
//		sinh();
//	}
//}


#include<bits/stdc++.h>
using namespace std;
int n, k, a[100], ok=0;
void in(){
	for(int i=1; i<=k; i++) cout<<a[i]<<endl;
	cout<<endl;
}
void sinh(){
	int i=k, a,b,c, j;
	while(i>0 && a[i]==1) i--;
	if(i==0) ok=1;
	else{
		a[i]--;
		a=k-i+1;
		k=i;
		b=a/a[i]; c=a%a[i];
		if(b>0){
			for(j=i+1; j<=i+b; j++) a[j]=a[i];
			k=k+b;
		}
		if(c>0){
			k++; a[k]=c;
		}
	}
}
main(){
	cin>>n;
	a[1]=n; k=1;
	while(!ok){
		in(); sinh();
	}
}













