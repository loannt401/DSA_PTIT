// Phan tich so 1

//#include<bits/stdc++.h>
//using namespace std;
//int n, a[50];
//void in(int m){
//	cout<<"(";
//	for(int i=1; i<m; i++) cout<<a[i]<<" ";
//	cout<<a[m]<<") ";
//}
//void quaylui(int x, int i, int s){
//	int j;
//	for(j=x; j>=1; j--){
//		a[i]=j;
//		if(s==j) in(i);
//		else if(j<s){
//			quaylui(j,i+1,s-j);
//		}
//	}
//}
//main(){
//	int t; cin>>t;
//	while(t--){
//		cin>>n;
//		quaylui(n,1,n);
//		cout<<endl;
//	}
//}


// doi tien

#include<bits/stdc++.h>
using namespace std;
int n,s,a[35], kq = 1000;
void quaylui(int i, int t, int x){
	if(t > s || x > kq) return;
	if(i==n){
		if(t == s) kq = min(kq,x);
		return;
	}
	quaylui(i+1, t, x);
	quaylui(i+1, t+a[i], x+1);
}
main(){
	cin>>n>>s;
	for(int i=1; i<=n; i++) cin>>a[i];
	quaylui(0,0,0);
	if(kq==1000) cout<<-1;
	else cout<<kq;
}



// to hop so co tong bang x DSA02010

//#include<bits/stdc++.h>
//using namespace std;
//int n, x, a[25], c[25], ok;
//void in(int m){
//	ok=1;
//	cout<<"[";
//	for(int i=1; i<m; i++) cout<<c[i]<<" ";
//	cout<<c[m]<<"] ";
//}
//void quaylui(int i, int t){
//	int j;
//	for(j=1; j<=n; j++){
//		if(a[j] >=  c[i-1] && t + a[j] <= x){
//			c[i] = a[j];
//			t = t + a[j];
//			if(t == x) in(i);
//			else if(t>x) return;
//			else quaylui(i+1,t);
//			t = t - a[j];
//		}
//	}
//}
//main(){
//	int t; cin>>t;
//	while(t--){
//		cin>>n>>x;
//		for(int i=1; i<=n; i++) cin>>a[i];
//		ok = 0;
//		quaylui(1,0);
//		if(ok==0) cout<<-1;
//		cout<<endl;
//	}
//}


// Doi cho chu so

//#include<bits/stdc++.h>
//using namespace std;
//int k, string s, maxx;
//
//void quaylui(int x){
//	if(x == 0) return;
//	int i, j, n = s.length();
//	for(i=0; i<n; i++){
//		for(j=i+1; j<n; j++){
//			if(s[j] > s[i]){
//				swap(s[i], s[j]);
//				if(s.compare(maxx) > 0) maxx = s;
//				quaylui(k-1);
//				swap(s[i], s[j]);
//			}
//		}
//	}
//}
//main(){
//	int t; cin>>t;
//	while(t--){
//		cin>>k>>s;
//		maxx = s;
//		quaylui(k);
//		cout<<maxx<<endl;
//	}
//}



// di chuyen trong me cung

//#include<bits/stdc++.h>
//using namespace std;
//int a[10][10],b[10][10], n, ok;
//char s[50];
//void in(int k){
//	for(int i=0; i<k; i++) cout<<s[i];
//	cout<<" ";
//}
//void quaylui(int i, int j, int k){
//	if( i == n-1 && j == n-1 ){
//		in(k); return;
//	}
//	if(i+1<n && b[i+1][j]==0 && a[i+1][j]==1){
//		s[k] = 'D'; b[i+1][j]=1;
//		quaylui(i+1, j, k+1);
//	}
//	if(j-1 >= 0 && b[i][j-1]==0 && a[i][j-1] == 1){
//		s[k] = 'L'; b[i][j-1]=1;
//		quaylui(i,j-1,k+1);
//	}
//	if(j+1<n && b[i][j+1]==0 && a[i][j+1]){
//		s[k] = 'R'; b[i][j+1]=1;
//		quaylui(i,j+1,k+1);
//	}
//	if(i-1>=0 && b[i-1][j]==0 && a[i-1][j]==1){
//		s[k] = 'U'; b[i-1][j]=1;
//		quaylui(i-1,j,k+1);
//	}
//}
//main(){
//	int t, i, j;
//	cin>>t;
//	while(t--){
//		cin>>n;
//		for(i=0; i<n; i++) for(j=0; j<n; j++){
//			cin>>a[i][j];
//			b[i][j]=0;
//		}
//		ok = 0;
//		if(a[0][0] == 0) cout<<-1;
//		else{
//			quaylui(0,0,0);
//			if(!ok) cout<< -1;			
//		}
//		cout << endl;
//	}
//}




















































