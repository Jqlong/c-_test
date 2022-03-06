//#include<iostream>
//using namespace std;
//
////学生结构体
//struct student {
//	string name;
//	int score;
//};
//
//
////老师结构体
//struct teacher {
//	string name;
//	struct student strs[5];
//};
//
////赋值函数
//void setInfo(teacher t[],int len) {
//
//	string nameSeed = "ABCDE";
//
//	//给老师赋值
//	for (int i = 0; i < len; i++)
//	{
//		t[i].name = "Teacher_";
//		t[i].name += nameSeed[i];
//		//给学生赋值
//		for (int j = 0; j < 5; j++)
//		{
//			t[i].strs[j].name = "Student_";
//			t[i].strs[j].name += nameSeed[j];
//
//
//			int random = rand() % 61 + 40;  //0-60  40-100
//			t[i].strs[j].score = random;
//		}
//	}
//
//}
//
//void printInfo(teacher ts[], int len) {
//	for (int i = 0; i < len; i++)
//	{
//		cout << "老师姓名：" << ts[i].name << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t学生姓名：" << ts[i].strs[j].name << " 分数为：" << ts[i].strs[j].score << endl;
//		}
//	}
//}
//int main() {
//
//	//随机数种子
//	srand((unsigned int)time(NULL));
//
//	//创建三名老师的数组
//	teacher ts[3];
//	//赋值
//	int len = sizeof(ts) / sizeof(ts[0]);
//	setInfo(ts,len);
//
//
//	//打印信息
//	printInfo(ts, len);
//
//
//	system("pause");
//	return 0;
//}