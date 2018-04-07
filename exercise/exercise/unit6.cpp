//C program to find sum of natural numbers from 1 to n
#include <iostream>
using namespace std;

int main ()
{
	int n;
	int sum  = 0;
	cout << "Nhap n:";
	cin >> n;
	for (int i = 1; i <=n; i++)
	{
		sum = sum + i;
	}
	cout << sum << " " <<endl;
	system("pause");
	return 0;
}