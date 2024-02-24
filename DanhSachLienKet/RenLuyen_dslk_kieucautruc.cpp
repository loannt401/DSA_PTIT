#include<bits/stdc++.h>
using namespace std;

struct PhanSo
{
	int tu;
	int mau;
 }; 
struct Node
{
	PhanSo *data;
	Node *pNext;
};
struct SingleList
{
	Node *pHead;
	Node *pTail;
};
void Initialize(SingleList *&list)
{
	list = new SingleList;
	list -> pHead = list -> pTail = NULL;
}
Node *CreateNode(int tu, int mau)
{
	Node *pNode = new Node;
	if(pNode == NULL)
	{
		cout << "Loi bo nho";
		exit(0);
	}
	PhanSo *ps = new PhanSo;
	ps -> mau = mau;
	ps -> tu = tu;
	pNode -> data = ps;
	pNode -> pNext = NULL;
	return pNode;
}
void InsertLast(SingleList *&list, int tu, int mau)
{
	Node *pNode = CreateNode(tu, mau);
	if(list->pTail == NULL)
	{
		list->pHead = list->pTail = pNode;
	}
	else
	{
		list->pTail->pNext = pNode;
		list->pTail= pNode;
	}
}
void PrintList(SingleList *list)
{
	Node *pNode = list -> pHead;
	while(pNode != NULL)
	{
		PhanSo *ps = pNode -> data;
		cout << ps -> tu << "/" << ps->mau;
		if(pNode->pNext != NULL) cout << "+";
		pNode = pNode->pNext;
	}
}

int GiaiThua(int n){
	if(n<=1) return 1;
	return n*GiaiThua(n-1);
}
double SumOfList(SingleList *list)
{
	double sum = 0;
	Node *pNode = list->pHead;
	while(pNode != NULL)
	{
		PhanSo *ps = pNode->data;
		sum = sum + (ps->tu * 1.0 / ps->mau);
		pNode = pNode->pNext;
	}
	return sum;
}
int main(){
	SingleList *list;
	Initialize(list);
	int n, x;
	cin >> n >> x;
	for(int i=1;i<=n;i++)
	{
		int tu =(int) pow(x,i);
		int mau = GiaiThua(i);
		InsertLast(list,tu,mau);
	}
	PrintList(list);
	double sum = SumOfList(list);
	cout <<"\nSum = "<< sum;
	return 0;
}
