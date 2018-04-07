//Write a C program to print all natural numbers from 1 to n 
#include <iostream>
using namespace std;

int main ()
{
	int n;
	cout << "Nhap n =";
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cout <<i<<" " <<endl;
	}
	system("pause");
	return 0;
}