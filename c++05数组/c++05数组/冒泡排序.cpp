#include<iostream>
using namespace std;

//int main() {
//	
//	int arr[10] = { 14,4,5,13,45,23,24,67,29 ,21};
//
//	//冒泡排序
//	//排序总次数：元素个数 - 1
//	//每轮对比次数：元素个数 - 排序轮数 - 1；
//	int temp = 0;
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 10 - i - 1; j++)
//		{
//			if (arr[j+1]<arr[j])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	cout << "排序后：";
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}