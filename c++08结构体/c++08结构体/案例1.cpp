//#include<iostream>
//using namespace std;
//
////ѧ���ṹ��
//struct student {
//	string name;
//	int score;
//};
//
//
////��ʦ�ṹ��
//struct teacher {
//	string name;
//	struct student strs[5];
//};
//
////��ֵ����
//void setInfo(teacher t[],int len) {
//
//	string nameSeed = "ABCDE";
//
//	//����ʦ��ֵ
//	for (int i = 0; i < len; i++)
//	{
//		t[i].name = "Teacher_";
//		t[i].name += nameSeed[i];
//		//��ѧ����ֵ
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
//		cout << "��ʦ������" << ts[i].name << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\tѧ��������" << ts[i].strs[j].name << " ����Ϊ��" << ts[i].strs[j].score << endl;
//		}
//	}
//}
//int main() {
//
//	//���������
//	srand((unsigned int)time(NULL));
//
//	//����������ʦ������
//	teacher ts[3];
//	//��ֵ
//	int len = sizeof(ts) / sizeof(ts[0]);
//	setInfo(ts,len);
//
//
//	//��ӡ��Ϣ
//	printInfo(ts, len);
//
//
//	system("pause");
//	return 0;
//}