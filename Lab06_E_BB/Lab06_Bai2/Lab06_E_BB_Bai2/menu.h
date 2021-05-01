void XuatMenu();
int  ChonMenu(int soMenu);
void XuLyMenu(int menu, int n);

void XuatMenu() {
	cout << "\n\t\t\t\tMenu Chuc Nang\n";
	cout << "\t0. Thoat khoi chuong trinh\n";
	cout << "\t1. Nhap ma tran bang tay\n";
	cout << "\t2. Nhap ma tran tu dong\n";
	cout << "\t3. Hien thi ma tran \n";
	cout << "\t4. Kiem tra ma tran co phai ma tran doi xung khong? \n";
	cout << "\t5. Ma tran tam giac tren\n";
	cout << "\t6. Ma tran tam giac duoi\n";
	cout << "\t7. Kiem tra ma tran co phai la ma tran cheo khong?\n";
	cout << "\t8 Kiem tra ma tran co phai la ma tran don vi?\n";
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
void XuLyMenu(int menu, MaTranVuong a, int n) {
	int ketQua = 0;
	switch (menu) {
	case 1: cout << "Ban da chon chuc nang 1!\n";

		NhapMaTranBangTay(a, n);
		cout << "Ma tran vua nhap la: \n";
		XuatMaTran(a, n);
		system("pause");
		break;
	case 2: cout << "Ban da chon chuc nang 2!\n";

		NhapMaTran_TD(a, n);
		cout << "Ma tran vua nhap la: \n";
		XuatMaTran(a, n);
		system("pause");
		break;
	case 3: cout << "Ban da chon chuc nang 3!\n";

		cout << "Ma tran hien hanh la: \n";
		XuatMaTran(a, n);
		system("pause");
		break;
	case 4: cout << "Ban da chon chuc nang 4!\n";

		cout << "Ma tran hien hanh la: \n";
		XuatMaTran(a, n);
		ketQua = DoiXung(a, n);
		if (ketQua == 1) {
			cout << "Ma tran nay la ma tran doi xung!\n";
		}
		else {
			cout << "Ma tran nay khong phai la ma tran doi xung!\n";
		}
		system("pause");
		break;
	case 5: cout << "Ban da chon chuc nang 5!\n";

		cout << "Ma tran hien hanh la: \n";
		XuatMaTran(a, n);
		TamGiacTren(a, n);
		system("pause");
		break;
	case 6: cout << "Ban da chon chuc nang 6!\n";

		cout << "Ma tran hien hanh la: \n";
		XuatMaTran(a, n);
		TamGiacDuoi(a, n);
		system("pause");
		break;
	case 7: cout << "Ban da chon chuc nang 7!\n";

		cout << "Ma tran hien hanh la: \n";
		XuatMaTran(a, n);
		ketQua = Cheo(a, n);
		if (ketQua == 1) {
			cout << "Ma tran nay la ma tran cheo!\n";
		}
		else {
			cout << "Ma tran nay khong phai la ma tran cheo!\n";
		}
		system("pause");
		break;
	case 8: cout << "Ban da chon chuc nang 8!\n";

		cout << "Ma tran hien hanh la: \n";
		XuatMaTran(a, n);
		ketQua = DonVi(a, n);
		if (ketQua == 1) {
			cout << "Ma tran nay la ma tran don vi!\n";
		}
		else {
			cout << "Ma tran nay khong phai la ma tran don vi!\n";
		}
		system("pause");
		break;
	}
}
