#include<iostream>
using namespace std;

void sort(int* arr,int len) {

	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j + 1] < arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

		}
	}

}

void printArray(int* arr, int len) {
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

}

int main() {

	//创建数组
	int arr[] = { 1,32,52,13,24,45,2,32,54,0 };


	int lenth = sizeof(arr) / sizeof(arr[0]);
	//创建函数
	sort(arr,lenth);

	//打印排序
	printArray(arr, lenth);

	system("pause");
	return 0;
}