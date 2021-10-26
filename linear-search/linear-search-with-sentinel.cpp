#include <iostream>
using namespace std;
int LinearSearchWithSentinel(int a[], int n, int x){
	int i=0; a[n]=x; //a[n] là phần tử “lính canh”
	while(a[i]!=x){
		i++;
	}
	if(i==n){
		return -1; //Tìm không thấy x
	}
	else{
		return i; // Tìm thấy x
	}
}
void main()
{
	int a[5] = {2, 4, 0, 1, 9};
	cout<<LinearSearchWithSentinel(a, 5, 1);
	system("pause");
}