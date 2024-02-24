#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
};

typedef struct Node* node;

struct singleNode{
	node pHead;
	node pTail;
};

typedef struct singleNode* dslk;

void ktaodslk(dslk &list){
	list = new singleNode();
	list->pHead = list->pTail = nullptr;
}

node makeNode(int x){
	node tmp = new Node();
	tmp->data = x;
	tmp->next = NULL;
	return tmp;
}

void insertLast(dslk &list, int x){
	node tmp = makeNode(x);
	if(list->pTail == NULL){
		list->pHead = list->pTail = tmp;
	}
	else {
		list->pTail->next = tmp;
		list->pTail = tmp;
	}
}

void in(dslk list){
	node a = list->pHead;
	while(a != nullptr){
		cout << a->data << " ";
		a = a->next;
	}
	cout << endl;
}

void locdulieu(dslk &list){
	node a = list->pHead;
	for(node i=a; i->next != nullptr; i=i->next){
		node j = i;
		while(j->next != nullptr){
			if(i->data == j->next->data){
				node sau = j->next->next;
				j->next = sau;
			}
			else j = j->next;
		}
	}
}

main(){
	dslk First;
	ktaodslk(First);
	int n; cin >> n;
	int x;
	for(int i=0;i<n;i++){
		cin >> x;
		insertLast(First, x);
	}
	locdulieu(First);
	in(First);
}

//	28/05/22 19:52
















