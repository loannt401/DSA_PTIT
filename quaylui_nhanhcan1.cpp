//#include<bits/stdc++.h>
//using namespace std;
//int a[100], n;
//void quaylui(int i){		// quay lui theo vi tri
//	int j;
//	for(j=1; j<ni; j++){
//		if(chon duoc j){
//			a[i]=j;
//			if(i==n) in();
//			else quaylui(i+1);
//		}
//	}
//}
//main(){
//	cin>>n;
//	quaylui(1);
//}


// quay lui nhi phan
//#include<bits/stdc++.h>
//using namespace std;
//int b[25], n;
//void in(){
//	for(int i=1; i<=n; i++) cout<<b[i]<<" ";
//	cout<<endl;
//}
//void quaylui(int i){
//	int j;
//	for(j=0; j<=1; j++){
//		b[i]=j;
//		if(i==n) in();
//		else quaylui(i+1);
//	}
//}


// quay lui to hop
//#include<bits/stdc++.h>
//using namespace std;
//int c[40], n, k;
//void quaylui(int i){
//	int j;
//	for(j=c[i-1]+1; j<=n-k+i; j++){
//		c[i]=j;
//		if(i==k) in();
//		else quaylui(i+1);
//	}
//}
//main(){
//	c[0]=0;
//}

  
  
  
// tap hop   DSA01014

//#include<bits/stdc++.h>
//using namespace std;
//int c[30], n, k, s, dem;
//void xuly(){
//	int t=0, i;
//	for(i=1; i<=k; i++) t+=c[i];
//	if(t==s) dem++;
//}
//void quaylui(int i){
//	int j;
//	for(j=c[i-1]; j<=n-k+i; j++){
//		c[i]=j;
//		if(i==k) xuly();
//		else quaylui(i+1);
//	}
//}
//main(){
//	while(1){
//		cin>>n>>k>>s;
//		if(!n && !k && !s) break;
//		c[0]=0; dem = 0;
//		quaylui(1);
//		cout<<dem<<endl;
//	}
//}



//#include<bits/stdc++.h>
//using namespace std;
//int a[15], b[15]={0}, n;
//void in(){
//	for(int i=1; i<=n; i++) cout<<a[i]<<" ";
//	cout<<endl;
//}
//void quaylui(int i){
//	int j;
//	for(j=1; j<=n; j++){
//		if(!b[j]){
//			a[i]=j; b[j]=1;
//			if(i==n) in();
//			else quaylui(i+1);
//			b[j]=0;
//		}
//	}
//}


// DSA02005

//main(){
//	int t; cin>>t;
//	while(t--){
//		cin>>s;
//		n=s.length();
//		for()
//	}
//}


// DSA02008


int a[15], b[15]={0}, c[15][15], n, k, dem =0;
void xuly(){
	int t=0; 
	for(int i=1; i<=n; i++)
}
















































