#include <iostream>
#include<math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Node
{
	int x;
	int i;
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
Node *CreateNode(int x, int i)
{
	Node *pNode = new Node;
	if(pNode == NULL)
	{
		cout << "Loi cap phat bo nho";
		exit(0);
	}
	pNode -> i = i;
	pNode -> x = x;
	pNode -> pNext = NULL;
	return pNode;
}
void InsertLast(SingleList *&list, int x, int i)
{
	Node *pNode = CreateNode(x,i);
	if(list -> pTail == NULL)
	{
		list -> pHead = list -> pTail = pNode;
	}
	else 
	{
		list -> pTail -> pNext = pNode;
		list -> pTail = pNode;
	}
}
void PrintList(SingleList *list)
{
	Node *pNode = list -> pHead;
	while(pNode != NULL)
	{
		cout << pNode -> x << "^" << pNode -> i;
		if(pNode -> pNext != NULL ) cout << "+";
		pNode = pNode -> pNext;
	}
}
double SumOfList(SingleList *list)
{
	double sum = 0;
	for(Node *pNode = list -> pHead; pNode != NULL; pNode = pNode -> pNext)
	{
		double value = pow(pNode -> x, pNode -> i);
		sum += value;	
	}
	return sum;
}
int main(int argc, char** argv) {
	SingleList *list;
	Initialize(list);
	int n, x;
	cin >> n >> x;
	for(int i=1;i<=n;i++)
	{
		InsertLast(list, x, i);
	}
	PrintList(list);
	double sum = SumOfList(list);
	cout << "Sum = " << sum;
	return 0;
}
