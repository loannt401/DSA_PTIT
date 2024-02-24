//	DSA05008
//#include<bits/stdc++.h>
//using namespace std;
//int F[4005], A[205], n, s;
//int kiemtra(){
//	int i, j;
//	memset(F,0,sizeof(F));
//	F[0] = 1;
//	for(i=1;i<=n;i++){
//		for(j=s;j>=A[i];j--){
//			if(F[j]==0 && F[j-A[i]]==1) F[j] = 1;
//		}
//	}
//	return F[s];
//}
//main(){
//	int i, t; 
//	cin >> t;
//	while(t--){
//		cin >> n >> s;
//		for(i=1;i<=n;i++) cin >> A[i];
//		if(kiemtra()) cout << "YES" << endl;
//		else cout << "NO" << endl;
//	}
//}


//	DSA05018

//#include<bits/stdc++.h>
//using namepspace std;
//int F[1005][1005];
//int tinh(string s){
//	int i, j, k, kq=1, n=s.length();
//	memset(F,0,sizeof(F));
//	for(i=0;i<n;i++) F[i][j]=1;
//	for(k=1;k<n;k++){
//		for(i=0;i<n-k;i++){
//			j=i+k;
//			if(s[i] == s[j] && k>1) F[i][j] = F[i+1][j-1];
//			else if(s[i] == s[j] && k==1) F[i][j] = 1;
//			else F[i][j] = 0;
//			if(F[i][j]) kq = max(kq,j-i+1);
//		}
//	}
//	return kq;
//}
//main(){
//	int t; cin >> t;
//	while(t--){
//		cin >> s;
//		cout << tinh(s)<< endl;
//	}
//}



// DSA05012

//#include<bits/stdc++.h>
//using namespace std;
//int C[1005][1005];
//int M = 1e9 +7;
//void tinh(){
//	int i, j;
//	for(i=0;i<=1000;i++){
//		for(j=0;j<=i;j++){
//			if(j==0 || j==i) C[i][j] = 1;
//			else C[i][j] = (C[i-1][j] + C[i-1][j-1])%M;
//		}
//	}
//}
//main(){
//	int t, n, k;
//	tinh();
//	cin >> t;
//	while(t--){
//		cin >> n >> k;
//		cout << C[n][k] << endl;
//	}
//}


//	DSA05019

//#include<bits/stdc++.h>
//using namespace std;
//int A[505][505], C[505][505], N, M;
//int tinh(){
//	memset(C,0,sizeof(C));
//	int i, j, kq = 0;
//	for(i=1;i<=M;i++) C[0][i] = A[0][i];
//	for(i=1;i<=N;i++) C[i][0] = A[i][0];
//	for(i=1;i<=N;i++){
//		for(j=1;j<=M;j++){
//			if(A[i][j]==1){
//				C[i][j] = min(C[i-1][j], min(C[i][j-1], C[i-1][j-1])) + 1;
//				else C[i][j] = 0;
//				kq = max(kq, C[i][j]);
//			}
//		}
//	}
//	return kq;
//}
//main(){
//	int t, i,j;
//	cin >> t;
//	while(t--){
//		cin >> N >> M;
//		for(i=1;i<=N;i++){
//			for(j=1;j<=M;j++){
//				cin >> A[i][j];
//			}
//		}
//		cout << tinh()<< endl;
//	}
//}


//	DSA05020

//#include<bít/stdc++.h>
//using namespace std;
//int A[505][505], C[505][505], N, M;
//int tinh(){
//	memset(C, 0, sizeof(C));
//	int i, j;
//	for(i=1;i<=M;i++) C[1][i] = C[1][i-1] + A[1][i];
//	for(i=1;i<=N;i++) C[i][1] = C[i-1][1] + A[i][1];
//	
//	for(i=2;i<=N;i++) {
//		for(j=2;j<=M;j++){
//			C[i][j] = min(C[i-1][j], min(C[i][j-1], C[i-1][j-1])) + A[i][j];
//		}
//	}
//	return C[N][M];
//}
//main(){
//	int t, i, j;
//	cin >> t;
//	while(t--){
//		cin >> N >> M;
//		for(i=1;i<=N;i++){
//			for(j=1;j<=M;j++){
//				cin >> A[i][j];
//			}
//		}
//		cout << tinh() << endl;
//	}
//}

//	DSA05022

//#include<bits/stdc++.h>
//using namespace std;
//int tinh(int n, int x, int y, int z){
//	int F[105] = {0}, i;
//	F[1] = x;
//	for(i=2;i<=n;i++){
//		if(i%2==0) F[i] = min(F[i-1] + x, F[i/2] + z);
//		else F[i] = min(F[i-1] + x, F[(i+1)/2] + z + y);
//	}
//	return F[n];
//}
//main(){
//	int t, n, x, y, z;
//	cin >> t;
//	while(t--){
//		cin >> n >> x >> y >> z;
//		cout << tinh(n,x,y,z) << endl;
//	}
//}


//	DSA05024

//#include<bits/stdc++.h>
//using namespace std;
//int M = 1e9 + 7, A[1005], N, K, F[1005];
//int tinh(){
//	int i, j;
//	memset(F,0,sizeof(F));
//	F[0] = 1;
//	for(i=1;i<=K;i++){
//		for(j=1;j<=N;j++){
//			if(A[j] <= i) F[i] = (F[i] + F[i-A[j]])%M;
//		}
//	}
//	return F[K];
//}
//main(){
//	int t, i; cin >> t;
//	while(t--){
//		cin >> N >> K;
//		for(i=1;i<=N;i++) cin >> A[i];
//		cout << tinh() << endl;
//	}
//}


//	DSA05029

//#include<bits/stdc++.h>
//using namespace std;
//int tinh(string s) {
//	int n=s.length(), i, F[50] = {0};
//	if(s[0] == '0') return 0;
//	F[0] = 1; F[1] = 1;
//	for(i=2;i<=n;i++){
//		if(s[i-1] != '0') F[i] = F[i-1];
//		if(s[i-2] == '1' || (s[i-2] == '2' && s[i-1] < '7'))
//			F[i] = F[i] + F[i-2];
//	}
//	return F[n];
//}
//main(){
//	int t; string s;
//	cin >> t;
//	while(t--){
//		cin >> s;
//		cout << tinh(s) << endl;
//	}
//}











