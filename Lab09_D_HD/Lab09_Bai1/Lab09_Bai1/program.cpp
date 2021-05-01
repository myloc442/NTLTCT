#include <iostream>
#include <conio.h>
using namespace std;

#include "thuvien.h"

int main()
{
	int* a;
	int n;
	a = TaoMang(n);
	cout << "\nMang vua nhap la: ";
	XuatMang(a, n);
	XuatGiaTri_SoLan_PhanBiet(a, n);
	delete[] a;
	return 1;
}