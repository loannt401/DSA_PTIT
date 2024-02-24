#include<bits/stdc++.h>
using namespace std;

/*
	
	mang: yeu cap cac o nho trong mang phai lien tiep
	danh sach lien ket: cac phan tu trong dslk dgl node, dia chi khong can gan nhau, cap phat dong
		moi phan tu cua dslk:
			+ du lieu: 1 so, thong tin cua 1 doi tuong
			+ tham chieu: dia chi cua phan tu dung sau no
		nhuoc diem: khong the truy cap truc tiep, phai duyet tung node mot
		uu diem: mo rong, thu nho
		xay dung dslk: su dung struct 
		

*/


struct Node{
	int data;
	Node *next;		
};
// tham chieu: luu dia chi cua phan tu dung sau, phai dung con tro de luu
//	moi node trong dslk dc cap phat dong => no la 1 con tro kieu node

typedef struct Node* node;
//	de thuan tien trong khai bao thi typedef lai, moi lan cap phat 1 node khong can Node* nua, chi can dung node


// cap phat dong mot node moi voi du lieu la so nguyen x
node makeNode(int x){
	node tmp = new Node();
	tmp -> data = x;
	tmp -> next = NULL;
	return tmp;		
}
// 	node = Node*	Node chinh la struct Node	cap phap 1 con tro dang Node
// vi tmp la con tro nen de truy cap phai dung ->
// NULL == nullptr


//	kiem tra rong
bool empty(node a){
	return a == NULL;
}
// de quan li dslk ta chi can 1 node dau tien, node a la node dau tien cua dslk
//	khi khong co phan tu => a = NULL => return true


//	dem phan tu
int Size(node a){
	int cnt = 0;
	while(a != NULL){
		++cnt;
		a = a -> next;
	}
	return cnt;
}


//	them 1 phan tu vao dau dslk
void insertFirst(node &a, int x){
	node tmp = makeNode(x);
	if(a == NULL) a = tmp;
	else {
		tmp -> next = a;
		a = tmp; 
	}
}
//	them phan tu cua node cua gia tri la x vao dau dslk
// 	khi chi co node a: thi ham thuc hien xong thi gia tri dc quan li boi con tro a khong bi thay doi => tham phai dung them & de thay doi khi thuc hien ham xong
//	b1: tao node moi


//	them phan tu vao cuoi danh sach
void insertLast(node &a, int x){
	node tmp = makeNode(x);
	if(a == NULL) a = tmp;
	else{
		node p = a;
		while(p -> next != NULL){
			p = p -> next;
		}
		p -> next = tmp;
	}
}


//	them 1 phan tu o giua
void insertMiddle(node &a, int x, int pos){
	int n = Size(a);
	if(pos <= 0 || pos > n + 1) cout << "Vi tri khong hop le ! " << endl;
	if(n == 1){
		insertFirst(a,x); return;
	}
	else if(n == post + 1){
		insertLast(a,x); return;
	}
	else {
		node tmp = makeNode(x);
		node p = a;
		for(int i=1;i<post-1;i++){
			p = p -> next;
		}
		tmp -> next = p -> next;
		p -> next = tmp;
	}
	
}


//	xoa phan tu o dau
void deleteFirst(node &a){
	if(a == NULL) return;
	a = a -> next;
}

//	xoa phan tu cuoi
void deleteLast(node &a){
	if(a == NULL) return;
	node truoc = NULL, sau = a;
	while(sau -> next != NULL){
		truoc = sau;
		sau -> NULL;
	}
	if(truoc == NULL) a = NULL;
	else {
		truoc -> next = NULL;
	}
}
//	neu a co 1 phan tu => truoc = NULL => a = NULL 


//	xoa o giua
void deleteMiddle(node &a, int pos){
	if(pos <= 0 || pos > Size(a)) return;
	node truoc = NULL, sau = a;
	for(int i=1;i<pos;i++){
		truoc = sau;
		sau = sau -> next;
	}
	if(truoc == NULL) a = a -> next;
	else truoc -> next = sau -> next;
}


//	in ra man hinh
void in(node a){
	cout << "-----------------------------------------------------------\n";
	while(a != NULL){
		cout << a -> data << " ";
		a = a -> next;
	}
	cout << "-----------------------------------------------------------\n";
}
//	dung a de duyet boi ham ko thay doi gia tri


void sapxep(node &a){
	for(node p = a; p->next != NULL; p->next){
		node min = p;
		for(node q = p->next; q->next != NULL; q=q->next ){
			if(q->data < min->data) min = q;
			int tmp = min->data;
			min->data = p->data;
			p->data = tmp;
		}
	}
}
int main(){
	node head = NULL;
	
	return 0;
}
// node head = NULL => chi ra rang node dau tien = NULL






















