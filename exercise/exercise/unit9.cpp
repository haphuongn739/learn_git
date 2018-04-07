//C program to print multiplication table of a given number
#include <iostream>
using namespace std;
 int main ()
 {
	 int n;
	 cout << "Nhap n:";
	 cin >> n;
	 for (int i = 1; i <= n; i++)
	 {
		 cout << n << "*" << i << "=" <<" " <<n*i <<endl;
	 }
	 system("pause");
	 return 0;
 }