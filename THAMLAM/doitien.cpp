#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	int t; cin >> t; 
	while(t--){
		int n; cin >> n;
		int kq = 0;
		for(int i=9;i>=0;i--){
			kq += n/a[i];
			n = n % a[i];
		}
		cout << kq << endl;
	}
	return 0;
}


/*
	Name: 
	Copyright: 
	Author: 
	Date: 18/05/22 11:03
	Description: 
	2 
	70 
	121
	cho tong 70
	tim so to tien it nhat voi cac menh gia: 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000
*/

