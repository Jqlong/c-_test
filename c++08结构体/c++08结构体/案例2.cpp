#include<iostream>
using namespace std;

//Ӣ�۽ṹ��
struct hero {
	string name;
	int age;
	string sex;
};

void sort(hero hs[], int length) {
	//ð������
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
		cout << "������" << hs[i].name << " ����Ϊ��" << hs[i].age << " �Ա�Ϊ��" << hs[i].sex << endl;
	}
}

int main() {

	//�����ṹ��
	hero hs[5] = {
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};

	//ð������
	int len = sizeof(hs) / sizeof(hs[0]);
	sort(hs, len);

	//��ӡ���
	printInfo(hs, len);

	system("pause");
	return 0;
}