void XuatMenu();
int  ChonMenu(int soMenu);
void XuLyMenu(DaySo a, int menu, int& n);

void XuatMenu() {
	cout << "\t\t\t\tMenu Chuc Nang\n";
	cout << "\t0. Thoat chuong trinh\n";
	cout << "\t1. Nhap day so\n";
	cout << "\t2. Xuat day so ra man hinh\n";
	cout << "\t3. Tinh tong cac phan tu trong day so\n";
	cout << "\t4. Tinh gia tri nho nhat cua day so\n";
	cout << "\t5. Tim vi tri cuoi cung ma gia tri nho nhat cua day so a xuat hien trong a\n";
	cout << "\t6. Sap xep \n";
}
int ChonMenu(int soMenu) {
	int stt = -1;
	while (stt < 0 || stt > soMenu) {
		system("cls");
		XuatMenu();
		cout << "\n Chon chuc nang cua Menu >> ";
		cin >> stt;
	}
	if (stt == 0) {
		cout << "Ok. Chuong trinh da thoat! Cam on ban..";
		exit(0);
	}
	return stt;
}
void XuLyMenu(DaySo a, int menu, int& n) {
	switch (menu) {
	case 1: cout << "Ban da chon chuc nang 1!\n";
		NhapMangTD(a, n);
		XuatMang(a, n);
		break;
	case 2: cout << "Ban da chon chuc nang 2!\n";
		XuatMang(a, n);
		break;
	case 3: cout << "Ban da chon chuc nang 3!\n";
		XuatMang(a, n);
		cout << "\nTong cac phan tu trong day so la: " << TinhTong(a, n);
		break;
	case 4: cout << "Ban da chon chuc nang 4!\n";
		XuatMang(a, n);
		cout << "Gia tri nho nhat cua day so la: Min = " << TimMin(a, n);
		break;
	case 5: cout << "Ban da chon chuc nang 5!\n";
		XuatMang(a, n);
		cout << "Gia tri nho nhat trong a la: Min = " << TimMin(a, n) << " va co vi tri thu: " << ViTriCuoiCung_Min(a, n);
		break;
	case 6: cout << "Ban da chon chuc nang 6!\n";
		XuatMang(a, n);
		SapXep(a, n);
		break;
	}
	_getch();
}

