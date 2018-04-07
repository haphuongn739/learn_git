//C program to find sum of even numbers between 1 to n
#include <iostream>
using namespace std;

int main ()
{
	int n;
	int sum = 0;
	cout << "Nhap n:";
	cin >> n;
	for(int i = 2; i <= n; i += 2)
	{
		if(i % 2 == 0)
		{
			sum = sum + i;
		}
	}
	cout << sum << " " <<endl;
	system("pause");
	return 0;
}