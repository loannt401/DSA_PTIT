#include<bits/stdc++.h>
using namespace std;
//deque : hang doi hai dau
//size()
//push_front()
//push_back()
//pop_back()
//pop_front()
//empty()
//front()
//back()
main(){
	int n; cin >> n;
	deque<int> d;
	while(n--){
		string s; cin >> s;
		if(s == "PUSHFRONT"){
			int x; cin >> x;
			d.push_front(x);
		}
		else if(s == "PRINTFRONT"){
			if(!d.empty()) cout << d.front() << endl;
			else cout << "NONE" << endl;
		}
		else if(s == "POPFRONT"){
			if(!d.empty()) d.pop_front();
		}
		else if(s == "PUSHBACK"){
			int x; cin >> x;
			d.push_back(x);
		}
		else if(s == "PRINTBACK"){
			if(!d.empty()) cout << d.back() << endl;
			else cout << "NONE" << endl;
		}
		else if(s == "POPBACK"){
			if(!d.empty()) d.pop_back();
		}
	}
}
