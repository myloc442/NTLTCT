#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();

int main() {
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh() {
	MaTranVuong a;
	int n = 0;
	int soMenu = 8;
	int menu;
	cout << "Ban hay nhap ma tran vuong cap n = ";
	cin >> n;
	do {
		menu = ChonMenu(soMenu);
		
		XuLyMenu(menu, a, n);
	} while (menu > 0);
	system("pause");
}