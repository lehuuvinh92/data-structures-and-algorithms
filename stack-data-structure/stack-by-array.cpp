#include <iostream>
using namespace std;

#define max 10000
int Stack[max];
int Top;

//init Stack with Top = -1
void StackInit(){
	Top = -1;
}

void push(int V){
	if(Top > max-1){
		cout<<"Stack is full";
	}else{
		Top++;
		Stack[Top] = V;
	}
}

int pop(){
	if (Top == -1){
		cout<<"Stack is empty";
		return -1;
	}else{
		int res = Stack[Top];
		Top--;
		return res;
	}
}

int empty(){
	if(Top == -1){
		return 0;//stack is empty
	}
	return 1;//stack isnot empty
}

int size(){
	return Top+1;//size of stack
}

//return value at Top
int top(){
	if (Top == -1){
		cout<<"Stack is empty";
		return -1;
	}else{
		int res = Stack[Top];
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