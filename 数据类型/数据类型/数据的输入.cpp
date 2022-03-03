#include<iostream>
using namespace std;

int main() {

	//整形输入
	int a = 0;
	cout << "请给int赋值：" << endl;
	cin >> a;
	cout <<"a的值为："<< a << endl;

	//浮点型
	float f = 3.14;
	cout << "请给float赋值：" << endl;
	cin >> f;
	cout << "f的值为：" << f << endl;



	//字符型
	char ch = 'a';
	cout << "请给char赋值：" << endl;
	cin >> ch;
	cout << "ch的值为：" << ch << endl;


	//字符串型
	string str = "chinses";
	cout << "请给str赋值：" << endl;
	cin >> str;
	cout << "str的值为：" << str << endl;


	//bool类型
	bool flag = false;
	cin >> flag;
	cout << flag << endl;


	system("pause");
	return 0;
}