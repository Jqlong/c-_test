#include<iostream>
using namespace std;

//int main() {
//	
//	int arr[10] = { 14,4,5,13,45,23,24,67,29 ,21};
//
//	//ð������
//	//�����ܴ�����Ԫ�ظ��� - 1
//	//ÿ�ֶԱȴ�����Ԫ�ظ��� - �������� - 1��
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
//	cout << "�����";
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}