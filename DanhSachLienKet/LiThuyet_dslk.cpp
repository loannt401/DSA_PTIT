#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Node
{
	int data;
	Node *pNext;	
};
struct SingleList
{
	Node *pHead;
	Node *pTail;
	
	// nSize   dem phan tu	
};
void Initialize(SingleList &list)
{
	list.pHead = NULL;
	list.pTail = NULL;
}
Node *CreateNode(int d){
	Node *pNode = new Node;
	if(pNode != NULL)
	{
		pNode -> data = d;
		pNode -> pNext = NULL;
	}
	return pNode;
}
// doi tuong binh thuong dung "."
// doi tuong con tro dung " -> "

void PrintList(SingleList list)	
{	
	Node *ptmp = list.pHead;
	if(ptmp == NULL)
	{
		cout << "Danh sach rong!";
		return;
	}
	while(ptmp != NULL)
	{
		cout << ptmp -> data << " ";
		ptmp = ptmp -> pNext;
	}
}
int SizeOfList(SingleList list)
{
	Node *ptmp = list.pHead;
	int nSize = 0;
	while(ptmp != NULL)
	{
		ptmp = ptmp -> pNext;
		nSize++;
	}
	return nSize;
}
void InsertFirst(SingleList &list, int d)
{
	Node *pNode = CreateNode(d);
	if(list.pHead == NULL)
	{
		list.pHead = pNode;
		list.pTail = pNode;
	}
	else
	{
		pNode -> pNext = list.pHead;
		list.pHead = pNode;
	}
}
void InsertLast(SingleList &list, int d)
{
	Node *pNode = CreateNode(d);
	if(list.pTail == NULL)
	{
		list.pHead = pNode;
		list.pTail = pNode;
	}
	else
	{
		list.pTail -> pNext = pNode;
		list.pTail = pNode;
	}
	
}
void InsertMid(SingleList &list, int pos, int d)
{
	if(pos < 0 || pos >= SizeOfList(list))
	{
		cout << "Thim nhap pos tao lao";
		return;
	}
	if(pos == 0)
	{
		InsertFirst(list, d);
	}
	else if(pos == SizeOfList(list)-1) InsertLast(list, d);
		else
		{
			Node *pNode = CreateNode(d);
			Node *pIns = list.pHead;
			Node *pPre = NULL;
			int i = 0;
			while(pIns != NULL)
			{
				if(i == pos) break;
				pPre = pIns;
				pIns = pIns -> pNext;
				i++;
			}
			pPre -> pNext = pNode;
			pNode -> pNext = pIns;
		}
}
void RemoveNode(SingleList &list, int d)
{
	Node *pDel = list.pHead;
	if(pDel == NULL)
	{
		cout << "danh sach rong";
	}
	else
	{
		Node *pPre = NULL;
		while(pDel != NULL)
		{
			if(pDel -> data == d) break;
			pPre = pDel;
			pDel = pDel -> pNext;
		}
		if(pDel == NULL)
		{
			cout << "Khong thay so " << d << " de xoa";
		}
		else
		{
			if(pDel == list.pHead)
			{
				list.pHead = list.pHead -> pNext;
				pDel -> pNext = NULL;
				delete pDel;
				pDel = NULL;
			}
			else if(pDel == list.pTail)   // pDel -> pNext == NULL
			{
				list.pTail = pPre;
				pPre -> pNext = NULL;
				delete pDel;
				pDel = NULL;
			}
			else
			{
				pPre -> pNext = pDel -> pNext;
				pDel -> pNext = NULL;
				delete pDel;
				pDel = NULL;
			}
		}
	}
}
Node *SearchNode(SingleList list, int d)
{
	Node *pNode = list.pHead;
	while(pNode != NULL)
	{
		if(pNode -> data == d) break;
		pNode = pNode -> pNext;
	}
	return pNode;
}
void SortList(SingleList &list)
{
	for(Node *pNode = list.pHead; pNode != NULL; pNode = pNode -> pNext)
	{
		for(Node *pNode2 = pNode -> pNext; pNode2 != NULL; pNode2 = pNode2 -> pNext)
		{
			if((pNode -> data) > (pNode2 -> data))
			{
				int tmp = pNode -> data;
				pNode -> data = pNode2 -> data;
				pNode2 -> data = tmp;
			}
		}
	}
}
int main(int argc, char** argv) {
	SingleList list;
	Initialize(list);
	InsertFirst(list,7);
	InsertFirst(list,10);
	InsertLast(list,20);
	InsertFirst(list,5);
	InsertFirst(list,3);
	InsertLast(list,30);
	InsertFirst(list,15);
	
	InsertMid(list, 3, -15);
	InsertMid(list,0,90);
	InsertMid(list,8,85);
	
	RemoveNode(list,10);
	
	PrintList(list);
	int n = SizeOfList(list);
	cout <<"\nco " << n << " Node\n";
	
	int d;
	cout << "Thim muon tim so nao: ";
	cin >> d;
	Node *pFound = SearchNode(list,d);
	if(pFound == NULL)
	{
		cout << "Khong thay " << d << " trong danh sach\n";
	}
	else 
	{
		cout << "Thay " << d << " trong danh sach\n";
	}
	
	SortList(list);
	PrintList(list);
	
	return 0;
}
