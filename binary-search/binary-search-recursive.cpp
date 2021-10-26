#include <iostream>
using namespace std;
int BinarySearch_Recursive(int a[],int x,int left,int right){
	if(left>right){
		return -1;
	}
	int mid=(left+right)/2;
	if(x==a[mid]){
		return mid;
	}
	if(x<a[mid]){
		return BinarySearch_Recursive(a,x,left,mid-1);
	}
	return BinarySearch_Recursive(a,x,mid+1,right);
}

void main()
{
	int a[7] = {3, 4, 5, 6, 7, 8, 9};
	cout<<BinarySearch_Recursive(a, 4, 0, 6);
	system("pause");
}
