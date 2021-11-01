#include <iostream>
using namespace std;
struct node{
	 int info;
	 node *next;
};
struct sList{
	node *head;
 	node *tail;
};

void createsList(sList &l){
	l.head = NULL;
	l.tail = NULL;
}

node* createNode(int x){
	node *p;
	p = new  node;
	if(p==NULL){
		cout<<"Khong du bo nho!";
		exit(1);
	}
	p->info = x;
	p->next = NULL;
	return p;
}

void insertHead(sList &l, int x){
	node *p;
	p = createNode(x);
	if(p==NULL){
		cout<<"Khong tao duoc node!";
		exit(1);
	}
	if(l.head==NULL){//trường hợp danh sách rỗng
		l.head = l.tail = p;
	}else{//trường hợp danh sách không rỗng
		p->next = l.head;
		l.head = p;
	}
}

void insertTail(sList &l, int x){
	node *p = createNode(x);
	if(p==NULL){
		cout<<"Khong tao duoc nut moi!";
		exit(1);
	}
	if (l.head==NULL){//trường hợp danh sách rỗng
		l.head =  l.tail = p ;
	}else{//trường hợp danh sách không rỗng
		l.tail->next = p;
		l.tail = p;
	}
}

void insertAfter(sList &l, node *p, node *q){
	p->next = q->next;
	q->next = p;
	if (q == l.tail){
		l.tail = p;
	}
}

void processList(sList &l){
	node *p;
	p = l.head;
	while (p!= NULL){
		cout<<p->info<<endl;//xuất giá trị trong node
		p = p->next;
	}
}

node* searchList(sList l, int k){	
	node *p;
	p = l.head;
	while((p!= NULL)&&(p->info != k)){
		p = p->next;
	}
	return p;
}

void deleteList(sList &l){
	node *p;
	while (l.head!= NULL){
		p = l.head;
		l.head = p->next;
		delete p;
	}
	l.tail = NULL;
}

void List_Selection_Sort(sList &l){
	node *min;
	node *p, *q;
	p = l.head;
	while(p != l.tail){
		min = p; q = p->next;
		while(q != NULL){
			if(q->info < min->info){
				min = q;
			}
			q= q->next;
    	}
		swap(min->info, p->info);
		p = p->next; 
	}
}


void main()
{
	sList intList;
	//tạo list rỗng
	createsList(intList);
	//thêm node vào list
	insertHead(intList, 5);
	insertTail(intList, 10);
	insertTail(intList, 20);
	insertTail(intList, 1);
	//xuất các giá trị trong list
	processList(intList);
	//tìm x=1 trong list
	node *p = searchList(intList, 1);
	if(p!=NULL){
		cout<<"tim thay x=1 trong list";
	}else{
		cout<<"khong tim thay x=1 trong list";
	}
	cout<<endl;
	List_Selection_Sort(intList);
	//xuất các giá trị trong list
	processList(intList);
	system("pause");
}