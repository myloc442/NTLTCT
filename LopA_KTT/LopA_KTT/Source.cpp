#include <iostream>
#include <conio.h>
#include <iomanip>
#include <fstream>
#include <string.h>

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
	int soMenu = 5;
	int stt;
	NHANVIEN a[MAX];
	int n = 0;
	do
	{
		stt = ChonMenu(soMenu);
		XuLyMenu(a, stt, n);
	} while (stt > 0);
}