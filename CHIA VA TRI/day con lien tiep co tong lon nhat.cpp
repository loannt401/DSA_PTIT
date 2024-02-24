#include<bits/stdc++.h>
using namespace std;
int max2(int a[], int l, int m, int r){
	int sum = 0, left_sum = INT_MIN, right_sum = INT_MIN;
	for(int i=m; i>=l;i--){
		sum += a[i];
		if(sum > left_sum) left_sum = sum;
	}
	sum = 0;
	for(int i=m+1;i<=r;i++){
		sum += a[i];
		if(sum > right_sum) right_sum = sum;
	}
	return left_sum + right_sum;
}
int max1(int a[], int l, int r){
	if(l == r) return a[l];
	int m = (l+r)/2;
	return max(max(max1(a,l,m), max1(a,m+1,r)), max2(a,l,m,r));
}
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[100];
		for(int i=0;i<n;i++) cin >> a[i];
		cout << max1(a,0,n-1) << endl;
	}
}



//#include<bits/stdc++.h>
//using namespace std;
//int tongmax(int a[], int n){
//	int Max = a[0];
//	for(int i=0; i<n; i++){
//		int sum = 0;
//		for(int j=i; j<n; j++){
//			sum += a[j];
//			if(sum > Max) Max = sum;
//		}
//	}
//	return Max;
//}
//main(){
//	int t; cin >> t;
//	while(t--){
//		int n; cin >> n;
//		int a[100];
//		for(int i=0;i<n;i++) cin >> a[i];
//		cout << tongmax(a,n) << endl;
//	}
//}

