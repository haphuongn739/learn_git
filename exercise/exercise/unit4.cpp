//C program to print all even numbers from 1 to n
#include <iostream>
using namespace std;

int main ()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << " " <<endl;
		}
	}
	system("pause");
	return 0;
}