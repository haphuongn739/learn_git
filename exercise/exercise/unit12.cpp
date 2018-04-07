//C program to find sum of first and last digit of any number
#include <iostream>
using namespace std;

int main ()
{
	int n;
	int sum = 0;
	int soDauTien;
	int soCuoiCung;

	cout << "Nhap n:";
	cin >> n;

	soDauTien = n % 10;
	while (n >= 10)
	{
		n = n / 10;
	}
	soCuoiCung = n % 10;
	cout <<"So dau tien la: "  <<soDauTien << " " <<endl;
	cout <<"So cuoi cung la: " <<soCuoiCung << " " <<endl;
	cout << "sum = " << soDauTien + soCuoiCung << " " <<endl;

	system("pause");
	return 0;
}