#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		priority_queue<int,vector<int>,greater<int> > q;
		int x;
		for(int i=0;i<n;i++){
			cin >> x;
			q.push(x);
		}
		long long opt = 0;
		while(q.size()>1){
			int first = q.top(); q.pop();
			int second = q.top(); q.pop();
			opt = opt + first*1ll + second*1ll;
			q.push(first + second);
		}
		cout << opt << endl;
	}
}

/*
	Name: 
	Copyright: 
	Author: 
	Date: 19/05/22 21:50
	Description: 

		4
		4 3 2 6
	
	� D�y s? 3 n?i v?i d�y s? 2 => 3 d�y v?i d? d�i 4, 5, 6. 
	� D�y d? d�i 4 n?i v?i d�y d? d�i 5 => 2 d�y v?i d? d�i 6, 9. 
	� N?i hai d�y c�n l?i 6+9 =15. 
	� T?ng chi ph� nh? nh?t l� 5 + 9 + 15 = 29.
*/

