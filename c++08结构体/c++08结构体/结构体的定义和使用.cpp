#include<iostream>
using namespace std;
#include<string>


//创建学生数据类型
//自定义数据类型
//struct Student {
//	string name;
//	int age;
//	int score;
//}stu;
//
////通过学生类型创建具体学生
//
//
//int main() {
//
//	//方法一
//	//创建的时候struct可以省略
//	struct Student s1;
//	s1.name = "张三";
//	s1.age = 12;
//	s1.score = 100;
//	cout << "s1的姓名：" << s1.name << ",s1的年龄：" << s1.age << ",s1的成绩：" << s1.score << endl;
//
//
//	//方法二
//	struct Student s2 = { "李四",10,100 };
//
//	cout << "s2的姓名：" << s2.name << ",s2的年龄：" << s2.age << ",s2的成绩：" << s2.score << endl;
//
//
//	//方法三
//	stu.name = "王五";
//	stu.age = 20;
//	stu.score = 333;
//	cout << "姓名：" << stu.name << " 年龄：" << stu.age << " 成绩：" << stu.score << endl;
//
//	system("pause");
//	return 0;
//}