#include<iostream>
using namespace std;

//英雄结构体
struct hero {
	string name;
	int age;
	string sex;
};

void sort(hero hs[], int length) {
	//冒泡排序
	for (int i = 0; i < length-1; i++)
	{
		for (int j = 0; j < length-1-i; j++)
		{
			if (hs[j+1].age < hs[j].age)
			{
				int temp = hs[j].age;
				hs[j].age = hs[j + 1].age;
				hs[j + 1].age = temp;
			}
		}
	}
}

void printInfo(hero hs[], int len) {
	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << hs[i].name << " 年龄为：" << hs[i].age << " 性别为：" << hs[i].sex << endl;
	}
}

int main() {

	//创建结构体
	hero hs[5] = {
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};

	//冒泡排序
	int len = sizeof(hs) / sizeof(hs[0]);
	sort(hs, len);

	//打印输出
	printInfo(hs, len);

	system("pause");
	return 0;
}