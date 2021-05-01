#include <iostream>
#include <conio.h>
#include <string.h>
#include <iomanip>

using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	int menu, soMenu = 12, n = 10;
	NhanVien a[MAX] =
	{
		{ "1", "Nguyen Van","Tan", { 1, 1, 1990 }, "Da Lat", 20345678.0 },
		{ "2", "Tran Minh","Hoang",{ 10, 10, 1980 }, "Qui Nhon", 14345678.0 },
		{ "3", "Truong","Hoang",{ 10, 12, 1980 }, "Da Lat", 10342578.0 },
		{ "4", "Le Tuan","Ban",{ 10, 1, 1975 }, "Quang Nam", 18349678.0 },
		{ "5", "Tran Minh","Ban",{ 5, 6, 1977 }, "Phu Yen", 12345978.0 },
		{ "6", "Truong","Hoang",{ 21, 12, 1987 }, "Da Lat", 15348678.0 },
		{ "7", "Vo Tuan","Trong",{ 1, 11, 1985 }, "Qui Nhon", 20341178.0 },
		{ "8", "Hoang Van","Tan",{ 15, 12, 1970 }, "Phu Yen", 22300970.0 },
		{ "9", "Tran Van","Vu",{ 11, 11, 1982 }, "Da Lat", 16348888.0 },
		{ "10", "Hoang Trong","Ban",{ 12, 1, 1980 }, "Nha Trang", 14365698.0 }
	};
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}
