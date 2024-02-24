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
	
	• Dây s? 3 n?i v?i dây s? 2 => 3 dây v?i d? dài 4, 5, 6. 
	• Dây d? dài 4 n?i v?i dây d? dài 5 => 2 dây v?i d? dài 6, 9. 
	• N?i hai dây còn l?i 6+9 =15. 
	• T?ng chi phí nh? nh?t là 5 + 9 + 15 = 29.
*/

