#include<bits/stdc++.h>
using namespace std;
int ok;
struct Node{
	int data;
	Node *pNext;
};
struct SingleList{
	Node *pHead;
	Node *pTail;
};
void Initialize(SingleList *&list)
{
	list = new SingleList;
	list->pHead = list->pTail = NULL;
}
Node *CreateNode(int d)
{
	Node *pNode = new Node;
	if(pNode != NULL)
	{
		pNode->data = d;
		pNode->pNext = NULL;
	}
	return pNode;
}
void InsertLast(SingleList *&list, int d)
{
	Node *pNode = CreateNode(d);
	if(list->pTail == NULL)
	{
		list->pHead = list->pTail = pNode;
	}
	else
	{
		list->pTail->pNext = pNode;
		list->pTail = pNode;
	}	
}
void PrintList(SingleList *list)
{
	Node *pNode = list->pHead;
	while(pNode != NULL)
	{
		cout << pNode->data << " ";
		pNode = pNode->pNext;
	}
}
void RemoveNode(SingleList *&list, int d)
{
	Node *pDel = list->pHead;
	if(pDel == NULL) return;
	else 
	{
		Node *pPre = NULL;
		while(pDel != NULL)
		{
			if(pDel->data == d) break;
			pPre = pDel;
			pDel = pDel->pNext;
		}
		if(pDel == NULL) ok=1;
		else 
		{
			if(pDel == list->pHead)
			{
				list->pHead = list->pHead->pNext;
				pDel->pNext = NULL;
				delete pDel;
				pDel = NULL;
			}
			else if(pDel->pNext == NULL)
			{
				list->pTail = pPre;
				pPre->pNext = NULL;
				delete pDel;
				pDel = NULL;
			}
			else
			{
				pPre->pNext = pDel->pNext;
				pDel->pNext = NULL;
				delete pDel;
				pDel = NULL;
			}
		}
	}
}
main(){
	SingleList *First;
	Initialize(First);
	int n, d;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin >> a;
		InsertLast(First,a);
	}
	cin >> d;
	ok=0;
	while(!ok)
	{
		RemoveNode(First,d);
	}
	PrintList(First);
}
