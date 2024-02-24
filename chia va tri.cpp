//DSA04001

//#include<bits/stdc++.h>
//using namespace std;
//int M = 1e9 + 7;
//long long powMod(int n, int k){
//	if(k==0) return 1;
//	long long x = powMod(n,k/2);
//	if(k%2==0) return x*x%M;
//	return n*(x*x%M)%M;
//}
//main(){
//	int t, n, k;
//	cin>>t;
//	while(t--){
//		cin >> n >> k;
//		cout << powMod(n,k) << endl;
//	}
//}


//DSA04002

//#include<bits/stdc++.h>
//using namespace std;
//int M = 1e9 + 7;
//long long powMod(long long n, long long k){
//	if(k==0) return 1;
//	long long x = powMod(n,k/2);
//	if(k%2==0) return x*x%M;
//	return n*(x*x%M)%M;
//}
//long long dao(long long n){
//	long long d = 0;
//	while(n > 0){
//		d = d*10 + n*10;
//		n /= 10;
//	}
//	return d;
//}
//main(){
//	int t;
//	long long n;
//	cin>>t;
//	while(t--){
//		cin >> n;
//		cout << powMod(n,dao(n)) << endl;
//	}
//}



// DSA04003

//#include<bits/stdc++.h>
//using namespace std;
//int M = 123456789;
//long long powMod(int n, int k){
//	if(k==0) return 1;
//	long long x = powMod(n,k/2);
//	if(k%2==0) return x*x%M;
//	return n*(x*x%M)%M;
//}
//main(){
//	int t;
//	long long n;
//	cin>>t;
//	while(t--){
//		cin >> n;
//		cout << powMod(2,n-1) << endl;
//	}
//}


//DSA04004

//#include<bits/stdc++.h>
//using namespace std;
//int tinh(int n, long long k){
//	long long x = pow(2,n-1);
//	if(k==x) return n;
//	if(k<x) tinh(n-1,k);
//	return tinh(n-1,k-x);
//}
//main(){
//	int t,n; long long k;
//	cin>>t;
//	while(t--){
//		cin>>n>>k;
//		cout<<tinh(n,k)<<endl;
//	}
//}


//DSA04022

//#include<bits/stdc++.h>
//using namespace std;
//char tinh(int n, long long k){
//	long long x = pow(2,n-1);
//	if(k==x) return 'A' + n - 1;
//	if(k<x) tinh(n-1,k);
//	return tinh(n-1,k-x);
//}
//main(){
//	int t,n; long long k;
//	cin>>t;
//	while(t--){
//		cin>>n>>k;
//		cout<<tinh(n,k)<<endl;
//	}
//}


//DSA04005

//#include<bitsstdc++.h>
//using namespace std;
//long long F[100];
//char FiboWord(int n, long long k){
//	if(n==1) return 'A';
//	if(n==2) return 'B';
//	if(k <= F[n-2]) return FiboWord(n-2,k);
//	return FiboWord(n-1,k-F[n-2]);
//}
//main(){
//	int t, n; long long  k;
//	F[0] = 0; F[1] = 1;
//	for(int i=2; i<=92; i++) F[i] = F[i-1] + F[i-2];
//	cin>>t;
//	while(t--){
//		cin>>n>>k;
//		cout<<FiboWord(n,k)<<endl;
//	}
//}

//DSA04021


//#include<bitsstdc++.h>
//using namespace std;
//long long F[100];
//char FiboWord(int n, long long k){
//	if(n==1) return 'A';
//	if(n==2) return 'B';
//	if(k <= F[n-2]) return FiboWord(n-2,k);
//	return FiboWord(n-1,k-F[n-2]);
//}
//main(){
//	int t, n; long long  k;
//	F[0] = 0; F[1] = 1;
//	for(int i=2; i<=92; i++) F[i] = F[i-1] + F[i-2];
//	cin>>t;
//	while(t--){
//		cin>>n>>k;
//		cout<<FiboWord(n,k)<<endl;
//	}
//}



// DSA04008

//#include<bits/stdc++.h>
//using namespace std; 
//struct Matran{
//	long long f[2][2];
//};
//Matran operator* (Matran A, Matran B){
//	Matran C; int i,j,k;
//	for(i=0; i<=1; i++){
//		for(j=0; j<=1; j++){
//			for(k=0;k<=1;k++){
//				C.f[i][j] = (C.f[i][j] + A.f[i][k]*B.f[k][j]%M)%M;
//			}	
//		}
//	}
//	return C;
//}
//Matran powMod(Matran A, int n){
//	if(n==1) return A;
//	Matran X = powMod(A,n/2);
//	if(n%2==0) return X*X;
//	return A*X*X;
//}
//main(){
//	int t, n;
//	cin>>t;
//	while(t--){
//		cin>>n;
//		Matran A;
//		A.f[0][0] = 1; A.f[0][1] = 1; A.f[1][0] = 1; A.f[1][1] = 0;
//		Matran KQ = powMod(A,n);
//		cout<<KQ.f[1][0]<<endl;
//	}
//}





// DSA04013

//#include<bits/stdc++.h>
//using namespace std;
//bool cmp(int a, int b){
//	return a > b;
//}
//main(){
//	int t, i, l, r, n; cin>>t;
//	while(t--){
//		cin>>n; int a[i];
//		for(i=0;i<n;i++) cin>>a[i];
//		sort(a,a+n,cmp);
//		int dem = 0;
//		l=0; r= n/2;
//		while(l < n/2 && r < n){
//			if( a[r] >= 2*a[l]){
//				dem++; l++; r++;
//			}
//			else r++;
//		}
//		cout<< n - dem <<endl;
//	}
//}



//DSA04014

//#include<bits/stdc++.h>
//using namespace std;
//long long ghep(long long a[], int l, int m, int r){
//	int n1 = m - l + 1, n2 = r - m, i, j, k;
//	long long L[n1], R[n2];
//	for(i=0; i<n1; i++) L[i] = a[l+i];
//	for(i=0; i<n2; i++) R[i] = a[m+i+1];
//	long long kq = 0;
//	i = 0; j = 0; k = l;
//	while(i < n1 && j < n2){
//		if(L[i] <= R[j]) a[k++] = L[i++];
//		else{
//			a[k++] = R[j++];
//			kq = kq + n1 -i;
//		}
//	}
//	while(i < n1) a[k++] = L[i++];
//	while(j < n2) a[k++] = R[j++];
//	return kq;
//}
//long long xuly(long long a[], int l, int r){
//	long long kq = 0;
//	if(l < r){
//		int m = (l + r)/2;
//		kq = kq + xuly(a, l, m);
//		kq = kq + xuly(a, m+1, r);
//		kq = kq + ghep(a, l, m, r);
//	}
//	return kq;
//}
//main(){
//	int t; cin>>t;
//	while(t--){
//		int n; cin>>n;
//		long long a[n];
//		for(int i=0; i<n; i++) cin>>a[i];
//		cout<< xuly(a,0,n-1)<<endl;
//	}
//}








































