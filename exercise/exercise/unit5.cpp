//C program to print all odd numbers from 1 to n
#include <iostream>
using namespace std;

int main ()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if(i % 2 == 1)
		{
			cout << i << " " <<endl;
		}
	}
	system("pause");
	return 0;
}