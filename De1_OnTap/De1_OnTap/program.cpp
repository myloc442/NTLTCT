#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string.h>
#include <fstream>

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
	int soMenu = 15;
	int stt; 
	NHANVIEN a[MAX];
	int n = 0;
	do
	{
		system("cls");
		stt = ChonMenu(soMenu);
		XuLyMenu(stt, a, n);
	} while (stt > 0);
}