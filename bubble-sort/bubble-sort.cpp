#include <iostream>
using namespace std;
void Bubble_Sort(int a[],int n){
	int i, j;
	for (i=0; i<n-1; i++){
		for (j=n-1; j>i; j--){
			if(a[j]<a[j-1]){//nếu sai vị trí thì đổi chỗ
				swap(a[j], a[j-1]);
			}
		}
	}
}

void main()
{
	int a[5] = {8, 4, 1, 6, 5};
	Bubble_Sort(a, 5);
	cout<<"Mang sau khi sap xep:"<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	system("pause");
}