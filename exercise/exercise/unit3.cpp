//C program to print alphabets from a to z
#include <iostream>
using namespace std;

int main ()
{
	char chuCai;
	cout << "Nhap chu cai tu a den z:";
	cin >> chuCai;
	for (chuCai = 'a'; chuCai <= 'z'; chuCai ++)
	{
		cout << chuCai << " " <<endl;
	}
	system("pause");
	return 0;
}