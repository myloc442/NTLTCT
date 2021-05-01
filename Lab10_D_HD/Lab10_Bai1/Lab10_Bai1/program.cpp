#include <iostream>
#include <conio.h>
using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
}

void ChayChuongTrinh()
{
	DayDong a;
	int n = 0;
	int soMuc = 9;
	int soMucDuocChon;
	do
	{
		cout << "\nNhap vao so phan tu cua day: ";
		cin >> n;
	} while (n <= 0);
	a = new int[n];
	do
	{
		soMucDuocChon = ChonMenu(soMuc);
		XuLyMenu(soMucDuocChon, a, n);
	} while (soMucDuocChon > 0);
	delete[] a;
}