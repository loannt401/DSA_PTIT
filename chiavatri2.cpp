//	TIM KIEM NHI PHAN

//#include<bits/stdc++.h>
//using namespace std;
//int n, a[100], x;
//int timkiemnhiphan(int l, int r){
//	int mid;
//	if(l > r) return 0;
//	else {
//		mid = (l+r)/2;
//		if(a[mid] == x) return mid;
//		else {
//			if(x < a[mid]) return timkiemnhiphan(l,mid-1);
//			else return timkiemnhiphan(mid+1,r);
//		}
//	}
//}
//main(){
//	int t; cin >> t;
//	while(t--){
//		cin >> n >> x;
//		for(int i=0;i<n;i++) cin >> a[i];
//		cout << timkiemnhiphan(0, n-1) << endl;
//	}
//}


// 	thuat toan Karatsuba
//#include<bits/stdc++.h>
//using namespace std;
//long long Karatsuba(int X[], int Y[], int n){
//	if(n == 1) return X[n-1] * Y[n-1] *1ll;
//	else {
//		int a[100], b[100], c[100], d[100];
//		long long a1 = 0, b1 = 0,c1 = 0, d1 = 0;
//		long long t = 1;
//		for(int i=0;i<n/2;i++){
//			a[i] = X[i]; a1 = a1*t + a[i];
//			c[i] = Y[i]; c1 = c1*t + c[i];
//			t*=10;
//		}
//		t = 1;
//		for(int i=n/2;i<n;i++){
//			b[i] = X[i]; b1 = b1*t + b[i];
//			d[i] = Y[i]; d1 = d1*t + d[i];
//			t*=10;
//		}
//		long long ab = a1+b1;
//		long long cd = c1+d1;
//		
//		long long U = Karatsuba(a,c,n/2);
//		long long V = Karatsuba(b,d,n/2);
//		long long W = Karatsuba(a+b, c+d, n/2);
//		return U*pow(10,n) + (W-U-V)*pow(10,n/2) + V;
//	}
//}
//main(){
//	int t; cin >> t;
//	while(t--){
//		string s1, s2; cin >> s1 >> s2;
//		int n = s1.length();
//		int X[n], Y[n];
//		for(int i=0;i<n;i++){
//			X[i] = (int)(s1[i] - '0');
//			Y[i] = (int)(s2[i] - '0');
//		}
//		cout << Karatsuba(X,Y,n) << endl;
//	}
//}
// bo


// 	tim tong day con lien tuc lon nhat

//#include<bits/stdc++.h>
//using namespace std;
//int tonglonnhat(int a[], int n){
//	int max_sum = a[0];
//	for(int i=0;i<n;i++){
//		int tong = a[i];
//		for(int j=i+1;j<n;j++){
//			tong = tong + a[j];
//			max_sum = max(max_sum, tong);
//		}
//		max_sum = max(max_sum, tong);
//	}
//	return max_sum;
//}
//main(){
//	int n; cin >> n;
//	int a[n];
//	for(int &x:a) cin >> x;
//	cout << tonglonnhat(a,n) << endl;
//}


// c2

//#include<bits/stdc++.h>
//using namespace std;
//int dayconlonnhat(int a[], int l, int m, int r){
//	int sum = 0, l_sum = INT_MIN, r_sum = INT_MIN;
//	for(int i=m;i>=1)
//}
//int tonglonnhat(int a[], int l, int r){
//	if(l == r) return a[l];
//	int m = (l+r)/2;
//	return max(tonglonnhat(a,l,m), max(tonglonnhat(a,m+1,r), dayconlonnhat(a,l,m,r)));
//}
//main(){
//	int n; cin >> n;
//	int a[n];
//	for(int &x:a) cin >> x;
//	
//}























