#include<bits/stdc++.h> 
using namespace std;
long long power(int a, int n){
	if(n == 0) return 1;
	long long x = power(a,n/2);
	if(n%2 == 0) return x*x;
	return a*x*x;
} 
int main (){ 
	int t; cin>>t; 
	while(t--){ 
		int n; long long k; 
		cin>>n>>k; 
		long long len; 
		while(1){ 
			len =power(2,n-1);
			if(n==1){ 
				cout<<1; break; 
			} 
			if(len==k){ 
				cout<<n; break; 
			} 
			if(k>len){ 
				k = k - len; 
			} 
			n--; 
		} 
		cout<<endl; 
	} 
}





//#include<bits/stdc++.h>
//using namespace std;
//main(){
//	int t; cin >> t;
//	while(t--){
//		int n;
//		long long k;
//		cin >> n >> k;
//		if(k%2) cout << 1 << endl;
//		else {
//			int l = 1;
//			while(k%2==0){
//				k /= 2;
//				l++;
//			}
//			cout << l << endl;
//		}
//	}
//}




//	QUA THOI GIAN

//#include<bits/stdc++.h>
//using namespace std;
//long long power(int a, int n){
//	if(n == 0) return 1;
//	long long x = power(a,n/2);
//	if(n%2==0) return x*x;
//	return a*x*x;
//}
//int tinh(int n, int k){
//	long long x = power(2,n-1);
//	if(k == x) return n;
//	if(k < x) return tinh(n-1, k);
//	return tinh(n-1, k-x); 
//}
//main(){
//	int t; cin >> t;
//	while(t--){
//		int n;
//		long long k;
//		cin >> n >> k;
//		if(k%2) cout << 1 << endl;
//		else cout << tinh(n,k) << endl;
//	}
//}


