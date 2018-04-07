//C program to print natural numbers in reverse from n to 1
#include <iostream>
using namespace std;

int main ()
{
	int n;
	cout << "Nhap n :";
	cin >> n;
	for (int i = n; i >=1; i--)
	{
		cout << i << " " <<endl;
	}
	system("pause");
	return 0;
}