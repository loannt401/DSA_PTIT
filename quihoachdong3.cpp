// thuat toan cho day fibonacci

//#include<bít/stdc++.h>
//using namespace std;
//
//main(){
//	int n; cin >> n;
//	int F[n+1];
//	F[0] = 0;
//	F[1] = 1;
//	for(int i=2;i<=n;i++) F[i] = F[i-2] + F[i-1];
//	cout << F[n] << endl;
//}

//	27/05/22 16:09

//	cai tui 0 - 1
//#include<bits/stdc++.h>
//using namespace std;
//
//main(){
//	int t; cin >> t;
//	while(t--){
//		int n, S; cin >> n >> S;
//		int w[n+1], v[n+1];
//		for(int i=1;i<=n;i++) cin >> w[i];
//		for(int i=1;i<=n;i++) cin >> v[i];
//		int C[n+1][S+1];
//		memset(C,0,sizeof(C));
//		for(int i=1;i<=n;i++){
//			for(int j=1;j<=S;j++){
//				C[i][j] = C[i-1][j];
//				if(w[i] <= j) C[i][j] = max(C[i-1][j], C[i-1][j-w[i]] + v[i]);
//			}
//		}
//		cout << C[n][S] << endl;
//	}
//}

/*
	Name: 
	Copyright: 
	Author: 
	Date: 27/05/22 16:21
	Description: 
	w[i]: trong luong do vat i
	v[i]: gia tri do vat i
	S : trong luong toi da cua cai tui
	
	C[i][j]: gia tri lon nhat cua cai tui khi lua chon cac do vat 1, 2, ... i
	va co trong luong la j
	
	Co 2 truong hop xay ra khi duyet vat thu i va tong so trong luong la j:
		khi vat thu j ko dc chon:
			gia tri lon nhat cua C[i][j] = gia tri trc do C[i-1][j]
		khi vat thu j dc chon:
			C[i][j] = C[i-1][j-w[i] + v[i]
			gia tri cua vat truoc do voi trong luong la j - w[i]
		=> max 2 gia tri tren 
		
*/





//	2. bai toan day con chung dai nhat

//#include<bits/stdc++.h>
//using namespace std;
//
//main(){
//	int t; cin >> t;
//	while(t--){
//		int m, n; cin >> m >> n;
//		int x[m+1], y[n+1];
//		for(int i=1;i<=m;i++) cin >> x[i];
//		for(int i=1;i<=n;i++) cin >> y[i];
//		int C[m+1][n+1];
//		memset(C, 0, sizeof(C));
//		for(int i=1;i<=m;i++){
//			for(int j=1;j<=n;j++){
//				if(x[i] == y[j]) C[i][j] = C[i-1][j-1] + 1;
//				else C[i][j] = max(C[i-1][j], C[i][j-1]);
//			}
//		}
//		cout << C[m][n] << endl;
//	}
//}



//	3. bai toan co day con lien tiep co tong lon nhat

//#include<bits/stdc++.h>
//using namespace std;
//main(){
//	int t; cin >> t;
//	while(t--){
//		int n; cin >> n;
//		int a[n+1];
//		for(int i=1;i<=n;i++) cin >> a[i];
//		int S[n+1]; S[1] = a[1];
//		int E[n+1]; E[1] = a[1];
//		for(int i=1;i<=n;i++){
//			
//		}
//	}
//}



// 	5.	day con tang dai nhat

//#include<bits/stdc++.h>
//using namespace std;
//
//main(){
//	int t; cin >> t;
//	while(t--){
//		int n; cin >> n;
//		int a[n];
//		for(int &x:a) cin >> x;
//		int L[n] = {1};
//		for(int i=0;i<n;i++){
//			for(int j=0;j<i;j++){
//				if(a[i] > a[j]){
//					L[i] = max(L[i], L[j]+1);
//				}
//			}
//		}
//		cout << *max_element(L,L+n) << endl;
//	}
//}

/*
	Name: tim do dai day con (khong nhat thiet cac phan tu phai lien tiep)
			tang dai nhat cua mang a.
	Copyright: 
	Author: 
	Date: 23/05/22 10:49
	Description: 
	1
	14
	128 104 53 876 660 961 754 775 299 231 224 915 392 994
	
	Y tuong:
	Lap mot mang L[n] luu do dai tung day con	
	ban dau cho L[n] = {1}	(moi chi so deu co do dai toi thieu bang 1)
		128 104 53 876 660 961 754 775 299 231 224 915 392 994
	i =  0   1   2  3   4   5   6   7   8   9   10  11  12  13
 L[i] =  1   1   1  1   1   1   1   1   1   1    1   1   1   1
	Duyet i tu 0 den n-1
		goi 1 chi so j de duyet cac so truoc i
		=> duyet j tu 0 den i-1
			i = 0 => khong co so truoc do => L[0] = 1;
			i = 1 => co so trc do la a[0] => so sanh a[1] voi a[0]
			=> a[1] < a[0] => a[j] < a[i] => khong cap nhat lai L[1] 
			=> L[1] = 1;
			tiep tuc duyet nhu tren 
			
	128 104 53 876 660 961 754 775 299 231 224 915 392 994
	i =  0   1   2  3   4   5   6   7   8   9   10  11  12  13
 L[i] =  1   1   1  1   1   1   1   1   1   1    1   1   1   1
 			  	 2  2   3   3   ...	
*/






















