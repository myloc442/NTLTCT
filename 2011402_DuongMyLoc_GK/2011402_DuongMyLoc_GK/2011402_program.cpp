#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>
using namespace std;

#include "2011402_thuvien.h"
#include "2011402_menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh() 
{
	MaTran a;
	int soMenu = 5, menu, n = 0;
	do
	{
		cout << "Ban hay nhap Ma Tran Vuong Cap n = ";
		cin >> n;
	} while (n < 0);
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}