#include<iostream>
using namespace std;
// dia tu cot a sang cot c, cot b la trung gian
void quaylui(int n, char a, char b, char c){
	if(n == 1){
		cout << a << " -> " << c << endl;
		return;
	}
	quaylui(n-1,a,c,b);
	quaylui(1,a,b,c);
	quaylui(n-1,b,a,c);
}
main(){
	int n;
	cin >> n;
	char a = 'A', b = 'B', c = 'C';
	quaylui(n,a,b,c);
}


se co n -1 dia dau se chuyen tu a sang b
con 1 dia cuoi se tu a sang c
va chuyen n - 1 dia o b sang c
=> dia c se dc 1 thap giong nhu ban dau cua dia a
		
