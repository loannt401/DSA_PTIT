// 	nguoi du lich
//	DSA02027

#include<bits/stdc++.h>
using namespace std;
int C[20][20], A[20], B[20]={0}, n, fopt=1e9, cmin = 1e9;
void quaylui(int i){
	int j, cost = 0;
	for(j=2;j<=n;j++){
		if(B[j] == 0){
			A[i] = j; B[j] = 1;
			cost = cost + C[A[i-1]][A[i]];
			if(i == n) {
				int v = cost + C[A[n]][A[1]];
				fopt = min(fopt, v);
			}
			else if(cost + cmin*(n-i+1) < fopt ){
				quaylui(i+1);
			}
			cost = cost - C[A[i-1]][A[i]];
			B[j] = 0;
		}
	}
}
main(){
	int i, j;
	cin >> n;
	for(i=1;i<=n;i++) for(j=1;j<=n; j++){
		cin >> C[i][j];
		if(i!=j) cmin = min(cmin, C[i][j]);
	}
	A[1] = 1;
	quaylui(2);
	cout << fopt << endl;
}








// DSA02025

#include<bits/stdc++.h>
using namespace std;
int C[20][20], A[20], B[20]={0}, n, fopt=1e9, cmin = 1e9;
void quaylui(int i){
	int j, cost = 0;
	for(j=2;j<=n;j++){
		if(B[j] == 0){
			A[i] = j; B[j] = 1;
			cost = cost + C[A[i-1]][A[i]];
			if(i == n) {
				fopt = min(fopt, cost);
			}
			else if(cost + cmin*(n-i+1) < fopt ){
				quaylui(i+1);
			}
			cost = cost - C[A[i-1]][A[i]];
			B[j] = 0;
		}
	}
}
int dem(string s1, string s2){
	int i=0,j=0, d=0;
	while(i<s1.size() && j<s2.size()){
		if(s1[i]==s2[j]){
			i++; j++; d++;
		}
		else if(s1[i] < s2)[j] i++;
		else j++
	}
	return d;
}
main(){
	int i, j; string vs;
	vector<string> vs;
	cin >> n;
	for(i=0; i<n; i++){
		cin >> tmp; vs.push_back(tmp);
	}
	for(i=1;i<=n;i++) for(j=1;j<=n; j++){
		if(i==j) C[i][j] = 1e9;
		else C[i][j] = dem(vs[i-1],vs[j-1]);
		cmin = min(cmin, C[i][j]);
	}
	quaylui(1);
	cout << fopt << endl;
}





//	DSA02021

//	ki tu dac biet

#include<bits/stdc++.h>
using namespace std;
char quaylui(string s, long long n){
	long long x = s.length();
	if(n < x) return s[n];
	while(2*x <= n) x = x*2;
	if(x==n) return quaylui(s, n-1);
	return quaylui(s, n - x - 1);
}
main(){
	int t; string s; long long n;
	cin >> t;
	while(t--){
		cin >> s >> n;
		cout << quaylui(s, n-1) << endl;
	}
}


//	DSA02018
// bieu thuc toan hoc

#include<bits/stdc++.h>
using namespace std;
int OK = 0, numer[6], B[6];
void quaylui(int t, int s){
	if(OK) return;
	if(s==23 && i==5){
		OK = 1;
		return;
	}
	for(int j=0; j<5; j++){
		if(B[j] == 0){
			B[j] = 1;
			quaylui(i+1, s + number[j]);
			quaylui(i+1, s*number[j]);
			quaylui(i+1, s - number[j]);
			B[j] = 0;
		}
	}
}
main(){
	int t, i;
	cin >> t;
	while(t--){
		for(i=0;i<5;i++) cin >> number[i];
		OK = 0;
		for(i=0;i<5;i++) {
			B[i] = 1;
			quaylui(1, number[i]);
			B[i] = 0;
		}
		if(OK) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}




// DSA03008

//#include<bits/stdc++.h>
//using namespace std;
//
//struct task{
//	int start, finish;
//} a[1005];
//bool cmp(task, task y){
//	return x.finish > y.finish;
//}
//main(){
//	int t, n, i, d, j;
//	cin >> t;
//	while(t--){
//		cin >> n;
//		for(i=0;i<n;i++) cin >> a[i].start;
//		for(i=0; i<n; i++) cin >> a[i].finish;
//		sort(a,a+n,cmp);
//		i = 0; d = 1;
//		for(j=1;j<n;j++){
//			if(a[j].start >= a[i].finish){
//				d++; i = j;
//			}
//		}
//		cout << d << endl;
//	}
//}




// 	DSA03024
// lua chon toi uu

//#include<bits/stdc++.h>
//using namespace std;
//
//struct task{
//	int start, finish;
//} a[1005];
//bool cmp(task, task y){
//	return x.finish > y.finish;
//}
//main(){
//	int t, n, i, d, j;
//	cin >> t;
//	while(t--){
//		cin >> n;
//		for(i=0;i<n;i++) cin >> a[i].start >> a[i].finish;
//		sort(a,a+n,cmp);
//		i = 0; d = 1;
//		for(j=1;j<n;j++){
//			if(a[j].start >= a[i].finish){
//				d++; i = j;
//			}
//		}
//		cout << d << endl;
//	}
//}


//	DSA03025
// truc toa do


//#include<bits/stdc++.h>
//using namespace std;
//
//struct task{
//	int start, finish;
//} a[1005];
//bool cmp(task, task y){
//	return x.finish > y.finish;
//}
//main(){
//	int t, n, i, d, j;
//	cin >> t;
//	while(t--){
//		cin >> n;
//		for(i=0;i<n;i++) cin >> a[i].start >> a[i].finish;
//		sort(a,a+n,cmp);
//		i = 0; d = 1;
//		for(j=1;j<n;j++){
//			if(a[j].start >= a[i].finish){
//				d++; i = j;
//			}
//		}
//		cout << d << endl;
//	}
//}



// DSA03010

//#include<bits/stdc++.h>
//using namespace std;
//main(){
//	int t,n,a; cin >> t;
//	while(t--){
//		cin >> n;
//		priority_queue <int,vector<int>,greater<int> > q;
//		for(int i=0; i<n; i++){
//			cin >> a;
//			q.push(a);
//		}
//		long long kq = 0;
//		while(q.size() >= 2){
//			int x = q.top(); q.pop();
//			int y = q.top(); q.pop();
//			q.push(x+y);
//			kq += x+y;
//		}
//		cout << kq << endl;
//	}
//}


//DSA03011

//#include<bits/stdc++.h>
//using namespace std;
//int M = 1e9 + 7;
//main(){
//	int t,n,a; cin >> t;
//	while(t--){
//		cin >> n;
//		priority_queue <int,vector<int>,greater<int> > q;
//		for(int i=0; i<n; i++){
//			cin >> a;
//			q.push(a);
//		}
//		long long kq = 0;
//		while(q.size() >= 2){
//			int x = q.top(); q.pop();
//			int y = q.top(); q.pop();
//			long long tong = (x+y)%M;
//			q.push(tong);
//			kq = (kq+tong)%M;
//		}
//		cout << kq << endl;
//	}
//}



// DSA03012

// SAP DAT XAU KI TU

//#include<bits/stdc++.h>
//using namespace std;
//main(){
//	int t, i, M; string s;
//	cin >> t;
//	while(t--){
//		cin >> s;
//		int a['z' + 1] = { };
//		for(i=0;i<s.size(); i++) a[s[i]]++;
//		M = *max_element(a+'a',a+'z');
//		if(M > s.size() - M + 1) cout << -1 << endl;
//		else cout << 1 << endl;
//	}
//}


// DSA03014
//	so lap phuong





































