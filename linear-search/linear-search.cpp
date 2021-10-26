#include <iostream>
using namespace std;
int LinearSearch(int a[], int n, int x){
	int i=0;
	while((i<n)&&(a[i]!=x)){
		i++;
	}
	if(i==n){
		return -1;//Tìm không thấy x
	}
	else{
		return i;//Tìm thấy x
	}
}
void main()
{
	int a[5] = {2, 4, 0, 1, 9};
	cout<<LinearSearch(a, 5, 1);
	system("pause");
}