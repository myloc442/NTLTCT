#include <iostream>
#include <conio.h>
using namespace std;

#include "2011402_thuvien.h"
#include "2011402_menu.h"

void ChayChuongTrinh();

int main() {
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh() {
	int menu, soMenu = 4;
	int n = 0;
	do {
		menu = ChonMenu(soMenu);
		cout << "Ban hay nhap gia tri nguyen duong n = ";
		cin >> n;
		XuLyMenu(menu, n);
	} while (menu > 0);
	_getch();
}