#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> a(n);
		for(int i=0;i<n;i++) cin >> a[i];
		vector<int> b(n);
		b[n-1] = a[n-1];
		for(int i=n-2; i>=0;i--) b[i] = max(b[i+1], a[i]);
		int i=0, j=0, kc= 0;
		while(i<n && j<n){
			if(a[i] < b[j]){
				kc = max(kc, j-i);
				j++;
			}
			else i++;
		}
		if(kc == 0) cout << -1 << endl;
		else cout << kc << endl;
	}
}

/*
	Name: 
	Copyright: 
	Author: 
	Date: 27/05/22 23:57
	Description: 
		9
		1	2	3	4	5	6	7	8	9
		34	8	10	3	2	80	30	33	1
b[i]	80	80	80	80	80	80	33	33	1
		
		b[i] la so lon hon a[i] o dang sau
		lap mang b[i] nhu vay ta co the de dang di chuyen den chi so
		j cua A[j] > A[i] 
		vs A[1] = 34 ta co A[6] = 80
		so sanh tiep chi so j = 7 => B[7] < A[1] => i++
		A[2] = 8 < B[7] => j++ => den chi so ma co A[i] = B[7]	
*/














