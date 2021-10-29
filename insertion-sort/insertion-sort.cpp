#include <iostream>
using namespace std;
void Insertion_Sort(int a[], int n){
	int pos, i;
	int x;//lưu giá trị a[i] tránh bị ghi đè khi dời chỗ các phần tử
	for(i=1; i<n; i++){//đoạn a[0] đã sắp xếp
		x = a[i]; pos = i-1;
		//tìm vị trí chèn x
		while((pos>=0)&&(a[pos]>x)){//kết hợp dời chỗ các phần tử sẽ đứng sau x trong danh sách mới
			a[pos+1] = a[pos];
			pos--;
		}
		a[pos+1] = x;//chèn x vào danh sách
	}
}
void main()
{
	int a[5] = {8, 4, 1, 6, 5};
	Insertion_Sort(a, 5);
	cout<<"Mang sau khi sap xep:"<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	system("pause");
}
