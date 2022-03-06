#include<iostream>
using namespace std;


//const的使用场景
//struct student {
//	string name;
//	int age;
//	int score;
//};
//
//
////值传递占内存，会拷贝一份数据
////改为指针，可以减少内存空间，而且不会复制新的副本出来
//void printInfo(const student* s) {
//	//一旦修改会报错，可以防止误操作
//	//s->age = 10;
//
//	cout << "姓名：" << s->name << " 年龄：" << s->age << " 成绩：" << s->score << endl;
//}
//
//int main() {
//
//	student s = { "张三",20,100 };
//
//	//通过函数打印结构体变量信息
//
//	printInfo(&s);
//
//	system("pause");
//	return 0;
//}