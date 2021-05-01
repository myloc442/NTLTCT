#include <iostream>
#include <conio.h>
#include <iomanip>
#include <numeric>
#include <cstdlib>
#include <time.h>
using namespace std;

#define MAX 100
typedef int DaySo[MAX];

#include "ThuVien.h"
#include "Menu.h"

void ChayChuongTrinh();

void main()
{
	ChayChuongTrinh();
	//int x = 10,	y = 20;
	//cout << "\nTruoc HV x=" << x << ", y=" << y;//x=10, y=20
	//HoanVi(x, y);
	//cout << "\nSau HV x=" << x << ", y=" << y;//x=20, y=20

	_getch();
	return;
}

void ChayChuongTrinh()
{
	int chon;
	int somenu = 6;
	//int sum = 0;
	DaySo a;
	//sum = accumulate(a, a+10,sum);
	//cout << sum;
	//0 0 -10 -3 -1 10 4 4 3 2
	int n = 0;

	cout << "\nNhap so phan tu cua mang:";
	cin >> n;
	/*srand((unsigned)time(0));

	for (int i = 0; i < n; i++) {
		a[i] = (rand() % MAX) - 20;

		cout << a[i] << "\n";
	}*/

	do
	{
		system("CLS");
		chon = ChonMenu(somenu);
		XuLyMenu(chon, a, n);
	} while (true);

}