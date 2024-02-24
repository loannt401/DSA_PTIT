//	bai4	
#include<bits/stdc++>
using namespace std;
int kiemtra(string s){
	stack<char> st;
	char c;
	int n = s.length(), i;
	for(i=0;i<n;i++){
		c = s[i];
		if(c == '(' || c == '{' || c == '[') st.push(c);
		else {
			if( !st.empty() && c == '}' && st.top() == '[') st.pop();
			else if( !st.empty() && c == '}' && st.top() == '{') st.pop();
			else if( !st.empty() && c == ')' && st.top() == '(') st.pop();
			return 0;
		}
	}
	return 1;
}
main(){
	int t; string s;
	cin >> t;
	while(t--){
		cin >> s;
		if(kiemtra(s)) xout << "YES" << endl;
		else cout << "NO" << endl;
	}
}


//	DSA07004

#include<bits/stdc++>
using namespace std;
int tinh(string s){
	stack<char> st;
	int d = 0, i, n = s.length();
	for(i = 0; i < n; i++){
		if(s[i] == '(') st.push(s[i]);
		else {
			if( !st.empty() ) st.pop();
			else {
				st.push('('); d++;
			}
		}
	}
	return d + st.size()/2;
}
main(){
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << tinh(s) << endl;
	}
}

//	


























