#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <string.h>
#include <iomanip>
#include <fstream>
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
	int soMenuDuocChon;
	int soMenu = 6;
	int n = 0;
	HocVien hv[MAX];
	
	do
	{
		soMenuDuocChon = ChonMenu(soMenu);
		XuLyMenu(soMenuDuocChon, hv, n);
	} while (soMenuDuocChon > 0);
}