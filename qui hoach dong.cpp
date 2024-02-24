 //	THUAT TOAN QUY HOACH DONG

// CON ECH
// DSA05025

//#include<bits/stdc++.h>
//using namespace std;
//main(){
//	long long F[55], n, t;
//	F[0] = 1; F[1] = 1; F[2] = 2;
//	for(i=3;i<=50;i++) F[i] = F[i-1] + F[i-2] + F[i-3];
//	
//	cin >> t;
//	while(t--){
//		cin >> n;
//		cout << F[n] << endl;
//	}
//}


//	BAC THANG
//	DSA05013

//#include<bits/stdc++.h>
//using namespace std;
//int M = 1e9 + 7;
//int tinh(int n, int k){
//	int i,j,F[100005] = {0};
//	F[0] = 1; F[1] = 1;
//	for(i=2; i<=n; i++){
//		for(j=1; j<=min(i,k); j++){
//			F[i] = (F[i] + F[i-j])%M;
//		}
//	}
//	return F[n];
//}
//main(){
//	int t,n,k;
//	cin >> t;
//	while(t--){
//		cin >>n >>k;
//		cout << tinh(n,k) << endl;
//	}
//}


//	DSA04010

#include<bits/stdc++.h>
using namespace std;
void qhd(int a[], int n){
	int s=0, e=0;
	for(int i=0;i<n;i++){ 
		e = max(a[i], e + a[i]);
		s = max(s, e);
	}
	cout << s << endl;
}
main(){
	int t, a[1000],n,i;
	cin >> t;
	while(t--){
		cin >> n;
		for(i=0;i<n;i++) cin >> a[i];
		qhd(a,n);
	}
}


//	DSA05004

//#include<bits/stdc++.h>
//using namespace std;
//main(){
//	int i, j, n, a[1001], F[1001], kq = 0;
//	cin >> n;
//	for(i=0; i<n; i++) cin >> a[i];
//	for(i=0; i<n; i++){
//		F[i] = 1;
//		for(j=0; j<i; j++) {
//			if(a[j] < a[i]){
//				F[i] = max(F[i], F[j]+1);
//			}
//		}
//		kq = max(kq, F[i]);
//	}
//	cout << kq;
//}


//	DSA05005

//#include<bít/stdc++.h>
//using namespace std;
//int qhd(int a[], int n ){
//	int i, j, F[1005], kq = 0;
//	for(i=0;i<n;i++){
//		F[i] = 1;
//		for(j=0;j<i;j++){
//			if(a[j] <= a[i]){
//				F[i] = max(F[i], F[j]+1);
//			}
//		}
//		kq = max(kq, F[i]);
//	}
//	return n - kq;
//}
//main(){
//	int t, n, a[1001];
//	cin >> t;
//	while(t--){
//		cin >> n;
//		for(int i=0;i<n;i++) cin >> a[i];
//		cout << qhd(a,n)<< endl;
//	}
//}


//	DSA05006

//#include<bít/stdc++.h>
//using namespace std;
//int qhd(int a[], int n ){
//	int i, j, F[1005], kq = 0;
//	for(i=0;i<n;i++){
//		F[i] = a[i];
//		for(j=0;j<i;j++){
//			if(a[j] < a[i]){
//				F[i] = max(F[i], F[j]+a[i]);
//			}
//		}
//		kq = max(kq, F[i]);
//	}
//	return kq;
//}
//main(){
//	int t, n, a[1001];
//	cin >> t;
//	while(t--){
//		cin >> n;
//		for(int i=0;i<n;i++) cin >> a[i];
//		cout << qhd(a,n)<< endl;
//	}
//}


//	DSA05007

//#include<bits/stdc++.h>
//using namespace std;
//int a[1000005], F[1000005];
//main(){
//	int t,n,i; cin >> t;
//	while(t--){
//		cin >> n;
//		memset(F,0,sizeof(F));
//		for(i=1;i<=n;i++) cin >> a[i];
//		F[1] = a[1];
//		F[2] = max(a[1], a[2]);
//		for(i=1;i<=n;i++) cin >> a[i];
//		F[1] = a[1];
//		F[2] = max(a[1], a[2]);
//		for(i=3;i<=n;i++){
//			F[i] = max(F[i-2] + a[i], F[i-1]);
//		}
//		cout << F[n] << endl;
//	}
//}


//	DSA05001

//#include<bits/stdc++.h>
//using namespace std;
//int C[1005][1005];
//int qud(string s1, string s2){
//	memset(C,0,sizeof(C));
//	int i, j, n=s1.length(), m = s2.length();
//	for(i=1;i<=n;i++){
//		for(j=1;j<=m;j++){
//			if(s1[i-1] == s2[j-1]) c[i][j] = C[i-1][j-1] + 1;
//			else C[i][j] = max(C[i-1][j], C[i][j-1]);
//		}
//	}
//	return C[n][m];
//}
//main(){
//	int t; string s1, s2;
//	cin >> t;
//	while(t--){
//		cin >> s1 >> s2;
//		cout << qhd(s1,s2)<< endl;
//	}
//}


//	DSA05003

//#include<bits/stdc++.h>
//using namespace std;
//int C[1005][1005][1005];
//string s1,s2,s3; int n,m,p;
//int qud(){
//	int i,j,k;
//	memset(C,0,sizeof(C));
//	for(i=1;i<=m;i++){
//		for(j=1;j<=n;j++){
//			for(k=1;k<=p;k++){
//				if(s1[i-1] == s2[j-1] && s2[j-1] == s3[k-1]){
//					C[i][j][k] = C[i-1][j-1][k-1] + 1;
//				}
//				else C[i][j][k] = max(C[i-1][j][k], max(C[i][j-1][k], C[i][j][k-1]));
//			}
//		}
//	}
//	return C[m][n][p];
//}
//main(){
//	int t; 
//	cin >> t;
//	while(t--){
//		cin >> m >> n >> p;
//		cin >> s1 >> s2 >> s3;
//		cout << qhd()<< endl;
//	}
//}


//	DSA05027

//#include<bits/stdc++.h>
//using namespace std;
//int F[1005][1005], N, M, A[1005], C[1005];
//int qhd(){
//	int j,j;
//	memset(F,0,sizeof(F));
//	for(i=1;i<=N;i++){
//		for(j=1;j<=M;j++){
//			F[i][j] = F[i-1][j];
//			if(j >= A[i]){
//				F[i][j] =  max(F[i][j], F[i-1][j-A[i]] + C[i]);
//			}
//		}
//	}
//	return F[N][M];
//}
//main(){
//	int t, i;
//	cin >>t ;
//	while(t--){
//		cin >> N >> M;
//		for(i=0;i<N;i++) cin >> A[i];
//		for(i=0;i<M;i++) cin >> C[i];
//		cout << qhd()<< endl;
//	}
//}
























