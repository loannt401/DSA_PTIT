//	dsa07001
#include<bits/stdc++.h>
using namespace std;

int st[205], top = 0;
main(){
	string a; int t;
	while(cin >> a){
		if(a == "push"){
			cin >> t;
			st[++top] = t;
		}
		else if(a == "pop"){
			if(top > 0) top--;
		}
		else {
			if(top > 0){
				for(int i=1;i<=top;i++) cout << st[i] << " ";
				cout << endl;
			}
			else cout << "empty" << endl;
		}
	}
}

//	dsa07021
#include<bits/stdc++.h>
using namespace std;
int tinh(string s){
	int n = s.length(), kq = 0, i;
	stack<int> st;
	st.push(-1);
	for(i=0;i<n;i++){
		if(s[i] == '(') st.push(i);
		else {
			st.pop();
			if(!st.empty())	kq = max(kq, i-st.top());
			else st.push(i);
		}
	}
	return kq;
}
main(){
	int t; cin >> t;
	string s;
	while(t--){
		cin >> s;
		cout << tinh(s) << endl;
	}
}



#include<bits/stdc++.h>
using namespace std;

in priority(char c){
	if(c == '+' || c == '-') return 1;
	if(c == '*' || c == '/' || c == '%') return 2;
	if(c == '^') return 3;
	return -1;
}

void trungto_hauto(string s){
	int n = s.length();
	stack<char> st;
	string ans = "";
	for(int i=0;i<n;i++){
		if(s[i] == '(') st.push(s[i]);
		else if(islower(s[i])) ans += s[i];
		else if(s[i] == ')'){
			while(!st.empty() && st.top() != '('){
				char c = st.top(); st.pop(); ans+=c;
			}
			if(st.top() == '(') st.pop();
		}
		else {
			while(!st.empty() && priority(s[i]) <= priority(st.top())){
				char c = st.top(); st.pop(); ans += c;
			}
			st.push(s[i]);
		}
	}
	while(!st.empty() && st.top() != '('){
		char c = st.top(); st.pop();
		ans += c;
	}
}



string hauto_tiento(string s){
	int n = s.length(), i;
	stack<string> st;
	for(i=0;i<n;i++){
		if(checkToantu(s[i])){
			string tmp1 = st.top(); st.pop();
			string tmp2 = st.top(); st.pop();
			string tmp = s[i] + tmp2 + tmp1;
			st.push(tmp);
		}
		else st.push(string(1, s[i]));
	}
	return st.top();
}



string hauto_trungto(string s){
	int n = s.length();
	stack<int> st;
	for(int i=0;i<n;i++){
		if(checkToantu(s[i])){
			string tmp1 = st.top(); st.pop();
			string tmp2 = st.top(); st.pop();
			string tmp = "(" + tmp2 + s[i] + tmp1 + ")";
			st.push(tmp);
		}
		else st.push(string 1, s[i]);
	}
	return st.top();
}


//	dsa07018

void cong(char a[], char b[]){
	node *P = NULL, *Q = NULL, *R = NULL;
	tao_dathuc(a, P);
	tao_dathuc(b, Q);
	
	while(P != NULL && Q != NULL){
		if(P->mu > Q->mu){
			add_node(P->heso, P->mu, R);
			Q = Q->next;
		}
		else {
			add_node(P->heso + Q->heso, P->mu, R);
			P = P->next; Q = Q->next;
		}
	}
	while(P != NULL){
		add_node(P->heso, P->mu, R);
		P = P->next;
	}
}


























