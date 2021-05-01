#include <iostream>	
#include <conio.h>
#include <ctime>
#include <cstdlib>
using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh() {
	int menu, soMenu = 6;
	DaySo a;
	int n = 0;
	do {
		menu = ChonMenu(soMenu);
		XuLyMenu(a, menu, n);
	} while (menu > 0);

	cout << "\nCam on da su dung chuong trinh";
}

int main() {
	ChayChuongTrinh();
	return 0;
}