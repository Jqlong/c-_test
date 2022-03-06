#include<iostream>
using namespace std;

void swap(int x, int y);

//int main() {
//
//	int a = 10;
//	int b = 20;
//
//	//形参改变不影响实参
//	swap(a, b);
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	system("pause");
//	return 0;
//}

//两个数字进行交换
//void swap(int x, int y) {  //不需要返回值，可以不写return
//
//	cout << "交换前：" << endl;
//	cout << "num1=" << x << endl;
//	cout << "num2=" << y << endl;
//
//
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//	//return;
//
//	cout << "交换后：" << endl;
//	cout << "num1=" << x << endl;
//	cout << "num2=" << y << endl;
//
//}