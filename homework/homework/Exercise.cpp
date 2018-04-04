#include <iostream>
#include <conio.h>
using namespace std;

int luaChon = 0;

void ShowTopMenu()
{
	cout <<" Xin chao, vui long chon chuc nang: " << endl;
	cout <<" 1. Nhap SV: " << endl;
	cout <<" 2. Xuat thong tin SV: " << endl;
	cout <<" 3. Thoat" << endl;

	cout <<"Lua chon cua ban: ";
	cin >>luaChon;
}

void clearScreen()
{
	system("cls");
}

void inputSinhVien()
{
	char mssv[10];
	cout <<"MSSV: ";
	cin >>mssv;
}

void main()
{
ShowTopMenu:
	ShowTopMenu();

	clearScreen();
	switch (luaChon)
	{
	case 1:
		inputSinhVien();
		break;
	case 2:
		cout <<"Display screen Output SV" <<endl;
		break;
	case 3:
		cout <<"Exit" <<endl;
		break;
	}
	cout << "Nhan phim 0 de tro ve man hinh chinh :" <<endl;
	char x = getch();
	if( x == '0' )
	{
		system ("cls");
		goto ShowTopMenu;
	}
	system("pause");
}
