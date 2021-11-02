#include <iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

node * front;
node *rear;

void QueueInit(){
	front = NULL;
	rear = NULL;
}

void enqueue(int V){
	node *p;
	p = new node;
	p->data = V;
	p->next = NULL;
	if (front!=NULL){
		rear->next = p;
	}else{
		front = p;
	}
	rear = p;
}

int dequeue(){
	if (front == NULL){
		cout<<"Queue is empty";
		return -1;
	}else{
		int res = front->data;
		node *p = front->next;
		delete front;
		front = p;
		if(front == NULL){
			rear = NULL;
		}
		return res;
	}
}

//print Queue
void printQueue(){
	node  *p;
	p = front;
	cout<<"Elements in Queue:";
	while (p!= NULL){
		cout<<p->data<<" ";
		p = p->next;
	}
}

int main(){
	//init Queue
	QueueInit();
	//enqueue to Queue
	enqueue(5);
	enqueue(21);
	enqueue(10);
	enqueue(99);
	enqueue(101);
	//print Queue
	printQueue();
	//dequeue from Queue
	cout<<endl<<"Dequeue fromt Queue:";
	cout<<dequeue()<<" ";
	cout<<dequeue()<<endl;
	//print Queue after dequeue
	cout<<"Print Queue after dequeue"<<endl;
	printQueue();
	system("pause");
}