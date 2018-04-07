//C program to count number of digits in an integer
#include <iostream>
using namespace std;

int main ()
{
	int n;
	int count = 0;
	cout << "Nhap n:";
	cin >> n;
	while (n > 0)
	{
		n = n / 10;
		count ++;
	}
	cout << count << " " <<endl;
	system("pause");
	return 0;
}