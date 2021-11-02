#include <iostream>
using namespace std;

struct dNode{
	int info;
	struct dNode *pre;
	struct dNode *next;
};

struct dList{
	dNode *head;
	dNode *tail;
};

dNode* createdNode(int x){
	dNode *p;
	p = new dNode;
	if(p==NULL){
		cout<<"khong con du bo nho";
		exit(1);
	}else{
		p->info=x;
		p->next=NULL;
		p->pre=NULL;
		return p;
	}
}

void createdList(dList &l){
	l.head = NULL;
	l.tail = NULL;
}


void insertHead(dList &l, int x){
	dNode *p;
	p = createdNode(x);
	if(p==NULL){
		cout<<"Khong tao duoc node!";
		exit(1);
	}
	if(l.head==NULL){//trường hợp danh sách rỗng
		l.head = p;
		l.tail = l.head;
	}else{//trường hợp danh sách không rỗng
		p->next = l.head;
		l.head->pre = p;
		l.head = p;
	}
}

void insertTail(dList &l, int x){
	dNode *p = createdNode(x);
	if(p==NULL){
		cout<<"Khong tao duoc nut moi!";
		exit(1);
	}
	if (l.head==NULL){//trường hợp danh sách rỗng
		l.head = p;
		l.tail = l.head;
	}else{//trường hợp danh sách không rỗng
		p->pre=l.tail;
		l.tail->next=p;
		l.tail=p;
	}
}

void processList(dList &l){
	dNode *p;
	p = l.head;
	while (p!= NULL){
		cout<<p->info<<endl;//xuất giá trị trong node
		p = p->next;
	}
}

void DeleteFirst(dList &l){
	dNode *p;
	if(l.head!=NULL){
		p=l.head;
		l.head=l.head->next;
		l.head->pre=NULL;
		delete p;
		if(l.head==NULL){
			l.tail=NULL;
		}
	}
}

void DeleteEnd(dList &l ){
	dNode *p;
	if(l.head!=NULL){
		p=l.tail;
		l.tail=l.tail->pre;
		l.tail->next=NULL;
		delete p;
		if(l.tail==NULL){
			l.head=NULL;
		}
	}
}

void deleteList(dList &l){
	dNode *p;
	while (l.head!= NULL){
		p = l.head;
		l.head = l.head->next;
		delete p;
	}
	l.tail = NULL;
}
void List_Interchange_Sort(dList &l){
	dNode *p,*q;
	p=l.head;
	while(p!=l.tail){
		q=p->next;
		while(q!=NULL){
			if(p->info>q->info){
				swap(p->info, q->info);
			}
			q=q->next;
		}
		p=p->next;
	}
}

int main(){
	dList intList;
	//tạo list rỗng
	createdList(intList);
	//thêm node vào list
	insertHead(intList, 5);
	insertTail(intList, 10);
	insertTail(intList, 20);
	insertTail(intList, 1);
	//xuất các giá trị trong list
	processList(intList);
	cout<<endl;
	List_Interchange_Sort(intList);
	//xuất các giá trị trong list
	processList(intList);
	system("pause");
}
