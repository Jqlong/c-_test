#include<iostream>
using namespace std;

int main() {

	//尽量不使用goto，以免造成程序紊乱
	
	cout << "1" << endl;
	cout << "2" << endl;

	goto FLAG;

	cout << "3" << endl;
	cout << "4" << endl;

FLAG:
	cout << "5" << endl;

	system("pause");
	return 0;
}