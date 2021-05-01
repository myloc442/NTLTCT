#include <iostream>
#include <conio.h>
#include <cmath>
#include <time.h>
#include <cstdlib>

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
	int menu, soMenu = 7;
	DaySo a;
	int n = 0;
	do 
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);

	cout << "\nCam on da su dung chuong trinh";
	_getch();
}