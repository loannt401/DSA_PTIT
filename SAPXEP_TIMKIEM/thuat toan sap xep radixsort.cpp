#include<iostream>
using namespace std;
void in(int a[], int n){
	for(int i=0; i<n; i++) cout<<a[i]<<" ";
	cout<<endl;
}
void radixSort(int a[], int n){
	int i, m=a[0], exp=1;
	int b[n];
	for(i=1; i<n; i++)
		if(m<a[i]) m=a[i];		// m = max a[n]
	while((m/exp)> 0){
		int bucket[10] = {0};
		for(i=0; i<n; i++) bucket[(a[i]/exp)%10]++;
		for(i=1; i<10; i++) bucket[i]+=bucket[i-1];
		for(i=n-1; i>=0; i--){
			b[--bucket[(a[i]/exp)%10]] = a[i];
		}
		for(i=0; i<n; i++) a[i]=b[i];
		exp*=10;
	} 
}
main(){
	int n; cin>>n; 
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	radixSort(a,n);
	in(a,n);
}
//  15
//  3221 1 10 9680 577 9420 7 5622 4793 2030 3138 82 2599 743 4127
//m = 9680
//exp = 1
//	bucket[(a[i]/exp)%10]++
//	bucket[3221%10] == bucket[1] = 1
//	3221 1 10 9680 577 9420 7 5622 4793 2030 3138 82 2599 743 4127
//	1	 1  0   0   7    0  7   2    3    0    8  2    9   3    7
//	bucket[1] = 2
//	bucket[0] = 4
//	bucket[7] = 3
//	bucket[2] = 2
//	bucket[3] = 2
//	bucket[8] = 1
//	bucket[9] = 1
//	
//	for(i=1; i<10; i++) bucket[i]+=bucket[i-1];
//	bucket[0] = 4
//	bucket[1] = 6
//	bucket[2] = 6
//	bucket[3] = 8
//	...
//	bucket[6] = 8
//	bucket[7] = 11
//	bucket[8] = 12
//	bucket[9] = 13
//	
//	
//	for(i=n-1; i>=0; i--) b[--bucket[(a[i]/exp)%10]] = a[i];
//	b[--bucket[7]] = 4127
//	b[10] = 4127
//	3221	 1 		10 		9680	577 	9420 7 5622 4793 2030 3138 82 2599 743 4127
//	b[5]	b[4]	b[3]	b[2]	b[10]	b[1] ...
//	
//	sap xep tu hang don vi tro ve trc
//	thuat toan :
//		nhap du lieu mang a[n] can sap xep
//		tim so lon nhat 
//		bat dau xep tu hang don vi :
//			t lay moi so % 10 roi dem bao nhieu so co don vi bang 0, 1, 2...
//			don vi 0 xep dau thi co bucket[0] so
//			don vu 1 tiep theo thi xep duoc bucket[0] + bucket[1] so
//			...
//			don vi 9 la co tong n so
//		tiep theo xep so vao mang khac theo thu tu don vi nho den lon :
//			vi du voi don vi la 0 co 4 so thi so duoc duyet toi se la b[4-1] = b[3] la thu tu trong mang
//			cu gap don vi 0 ta se lay tong so tru di 1 ra thu tu trong mang
//			3221	 1 		10 		9680	577 	9420 7 5622 4793 2030 3138 82 2599 743 4127
//			don vi 0 : 10	8680	9420	2030
//			co 4 so
//			duyet den so 10: b[3] = 10
//			duyet den so 8060: b[2] = 8060
//			...
//		ta se xep duoc thu tu hang don vi tu nho den lon
//		xong lap lai voi cac hang chuc, hang tram 
//	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
