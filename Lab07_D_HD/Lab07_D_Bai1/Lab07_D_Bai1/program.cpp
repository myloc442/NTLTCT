#include <iostream>
#include <conio.h>
using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	String a, b;
	int soMenu = 11;
	int menu;
	do
	{
		system("cls");
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, b);
	} while (menu > 0);
}