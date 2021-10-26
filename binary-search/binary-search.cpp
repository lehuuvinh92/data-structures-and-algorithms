#include <iostream>
using namespace std;
int BinarySearch(int a[],int n,int x)
{
	int left, right, mid; left=0; right=n-1;
	do{
		mid=(left+right)/2;
		if(a[mid]==x){
			return mid;
		}
		else if(a[mid]<x){
			left=mid+1;
		}
		else{
			right=mid-1;
		}
	}while(left<=right);
	return -1;
}
void main()
{
	int a[7] = {3, 4, 5, 6, 7, 8, 9};
	cout<<BinarySearch(a, 7, 4);
	system("pause");
}