//	quan li sinh vien


//#include<bits/stdc++.h>
//using namespace std;
//
//struct student{
//	string name, id;
//	double gpa;
//};
//
//struct SV{
//	student s;
//	node *next;
//};
//
//typedef struct SV* sv;
//
//sv makeNode(int x){
//	student s;
//	cout << "Nhap thong tin sinh vien : \n";
//	cout << "Nhap ID : ";
//	cin >> s.id;
//	cout << "Nhap ten : "; cin.ignore();
//	getline(cin, s.name);
//	cout << "Nhap gpa : "; cin >> s.gpa;
//	sv tmp = new SV();
//	tmp->s = s;
//	tmp->next = NULL;
//	return s;
//}


//	ngan xep bang dslk don

#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data; 
	Node *next;
};

typedef struct Node* node;

bool empty(node top){
	return top == NULL;
}

int getSize(node top){
	int ans = 0;
	while(top != nullptr){
		++ans;
		top = top->next;
	}
}

node makeNode(int x){
	node tmp = new Node();
	tmp->data = x;
	tmp->next = nullptr;
	return tmp;
}

void push(node &top, int x){
	node tmp = makeNode(x);
	if(top == nullptr) top = tmp;
	else {
		tmp->next = top;
		top = tmp;
	}
}

void pop(node &top){
	if(top == nullptr) return;
	top = top->next;
}

void getTop(node top){
	return top->data;
}

main(){
	node top = nullptr;
	long long n; cin >> n;
	while(n){
		int r = n%2;
		push(top, r);
		n /= 2;
	}
	while(!empty(top)){
		cout << getTop(top);
		pop(top);
	}
}



























