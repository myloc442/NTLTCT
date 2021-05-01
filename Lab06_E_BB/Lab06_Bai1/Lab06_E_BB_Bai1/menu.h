void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTranVuong a, int& n);

void XuatMenu() {
	cout << "\t\t\t\t MENU CHUC NANG\n";
	cout << "\t0. Thoat khoi chuong trinh\n";
	cout << "\t1. Nhap ma tran vuong\n";
	cout << "\t2. Xuat ma tran vuong\n";
	cout << "\t3. Tinh tong S voi S la tong so duong nho nhat cua hang\n";
	cout << "\t4. Tinh tong T voi T la tong so am lon nhat cua cot\n";
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
void XuLyMenu(int menu, MaTranVuong a, int& n) {
	switch (menu) {
	case 1: cout << "Ban da chon chuc nang 1!\n";

		cout << "\nNhap cap ma tran vuong : n = ";
		cin >> n;
		nhapMaTran(a, n);
		cout << "\nMa tran vuong vua nhap :\n";
		xuatMaTran(a, n);
		system("pause");
		break;
	case 2:cout << "Ban da chon chuc nang 2!\n";

		cout << "\nMa tran vuong hien hanh : \n";
		xuatMaTran(a, n);
		system("pause");
		break;
	case 3: cout << "Ban da chon chuc nang 3!\n";

		cout << "\nMa tran vuong hien hanh : \n";
		xuatMaTran(a, n);
		TongS(a, n);
		system("pause");
		break;
	case 4: cout << "Ban da chon chuc nang 4!\n";

		cout << "\nMa tran vuong hien hanh : \n";
		xuatMaTran(a, n);
		TongT(a, n);
		system("pause");
		break;
	}
}
