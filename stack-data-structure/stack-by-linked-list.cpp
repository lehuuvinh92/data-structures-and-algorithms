#include <iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

node *Top;

void StackInit() {
	Top = NULL;
}

void push(int V){
	node *p;
	p = new node;
	p->data = V;
	if(Top != NULL){
		p->next = Top;
		Top = p;
	}else{
		p->next = NULL;
		Top = p;
	}
}
int pop(){
	if(Top == NULL){
		cout<<"Stack is empty";
		return -1;
	}else{
		int res = Top->data;
		node *p = Top->next;
		delete Top;
		Top = p;
		return res;
	}
}

int empty(){
	if(Top == NULL){
		return 0;//stack is empty
	}
	return 1;//stack isnot empty
}

int size(){
	if(Top == NULL){
		return 0;
	}else{
		int sizeStack = 0;
		node *p;
		p = Top;
		while(p!=NULL){
			sizeStack++;
			p = p->next;
		}
		return sizeStack;//size of stack
	}
}

//return value at Top
int top(){
	if (Top == NULL){
		cout<<"Stack is empty";
		return -1;
	}else{
		int res = Top->data;
		return res;
	}
}

int main(){
	//init Stack
	StackInit();
	//push to Stack
	push(5);
	push(21);
	push(10);
	push(99);
	push(101);
	//size of Stack
	cout<<"Size of Stack = "<<size()<<endl;
	//pop from Stack
	cout<<pop()<<endl;
	cout<<pop()<<endl;
	//size of Stack after pop
	cout<<"Size of Stack after pop = "<<size()<<endl;
	system("pause");
}