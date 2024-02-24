#include<bits/stdc++.h>
using namespace std;
int doi6s5(int n){
	int m[10], h = 0;
	while(n>0){
		int x = n%10;
		if(x == 6) m[h++] = 5;
		else m[h++] = x;
		n/= 10; 
	}
	int sum = 0;
	for(int i=h-1;i>=0;i--) sum = sum*10 + m[i]; 
	return sum;
}
int doi5s6(int n){
	int m[10], h = 0;
	while(n>0){
		int x = n%10;
		if(x == 5) m[h++] = 6;
		else m[h++] = x;
		n/= 10; 
	}
	int sum = 0;
	for(int i=h-1;i>=0;i--) sum = sum*10 + m[i]; 
	return sum;
}
main(){
	int a, b; cin >> a >> b;
	cout << doi6s5(a) + doi6s5(b) << " " << doi5s6(a) + doi5s6(b);
}

/*
	Name: 
	Copyright: 
	Author: 
	Date: 18/05/22 11:17
	Description: 
	tim so nho va lon voi su nham lan 5 va 6
*/

