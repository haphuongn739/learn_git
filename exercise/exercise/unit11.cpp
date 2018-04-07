//C program to find first and last digit of any number
#include <iostream>
using namespace std;

int main ()
{
	int n;
	int soDauTien;
	int soCuoiCung;
	cout << "Nhap n:";
	cin >> n;

	soCuoiCung = n % 10;
	while (n >= 10)
	{
		n = n / 10;
	}
	soDauTien = n;
    cout <<"So dau tien la:" << soDauTien << " "  <<endl;
	cout <<"So cuoi cung la:" << soCuoiCung << " " <<endl;

	system("pause");
	return 0;
}