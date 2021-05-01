#pragma once

void XuatMenu();
int ChonMenu(int somenu);
void XuLyMenu(int chon, DaySo a, int n);


void XuatMenu()
{
	cout << "\t\tTUY CHON MENU CHUC NANG\n";
	cout << setw(5) << left << "STT";
	cout << setw(20) << left << "|";
	cout << setw(30) << left << "Chuc nang" << endl;
	
	cout << setfill('-'); // chuyển từ ' ' - > ' - '
	cout << setw(55) << "-" << endl;

	cout << setfill(' ');

	cout << setw(5) << left << "0.";
	cout << setw(30) << left << " Thoat" << endl;

	cout << setw(5) << left << "1.";
	cout << setw(30) << left << " Nhap mang" << endl;

	cout << setw(5) << left << "2.";
	cout << setw(30) << left << " Xuat mang" << endl;

	cout << setw(5) << left << "3.";
	cout << setw(30) << left << " Tinh tong phan biet" << endl;

	cout << setw(5) << left << "4.";
	cout << setw(30) << left << " In danh sach cac so nguyen to" << endl;

	cout << setw(5) << left << "5.";
	cout << setw(30) << left << " Tong duy nhat" << endl;

	cout << setw(5) << left << "6.";
	cout << setw(30) << left << " Sap 0_AmGiam_DuongTang" << endl;

	cout << setfill('-');
	cout << setw(55) << "-" << endl;
}

int ChonMenu(int somenu)
{
	int chon;
	XuatMenu();
	for (;;)
	{
		cout << "\nNhap tuy chon chon chuc nang Menu [0.."<<somenu<<"]=";
		cin >> chon;
		if (chon >= 0 && chon <= somenu)
			break;
	}
	return chon;
}
void XuLyMenu(int chon,DaySo a, int n)
{
	int kq;
	switch (chon)
	{
	case 0:
		cout << "\n0. Thoat. Cam on ban da su dung chuong trinh";
		exit(0);
		break;
	case 1:
		cout << "\n1. Nhap mang";
		NhapMang(a, n);
		
		break;
	case 2:
		cout << "\n2. Xuat mang";
		cout << "\nMang vua nhap:\n";
		XuatMang(a, n);
		
		break;
	case 3:
		cout << "\n3. Tinh tong phan biet";
		kq = TongPhanBiet(a, n);
		cout << "\nMang nhap la:\n";
		XuatMang(a, n);
		cout << "\nTong cac phan tu phan biet:" << kq;
		break;
	case 4:
		cout << "\n4. In danh sach cac so nguyen to";
		cout << "\nDanh sach cac so nto\n";
		InSoNTo(a, n);
		break;
	case 5:
		cout << "\n5. Tong duy nhat";
		kq = TongDuyNhat(a, n);
		cout << "\nMang nhap la:\n";
		XuatMang(a, n);
		cout << "\nTong cac phan tu duy nhat:" << kq;
		break;
	case 6:
		cout << "\n6. Sap 0_AmGiam_DuongTang";
		cout << "\nMang la:\n";
		XuatMang(a, n);
		cout << "\n";
		SX0_AmGiam_DuongTang(a, n);
		break;
	}
	_getch();
}