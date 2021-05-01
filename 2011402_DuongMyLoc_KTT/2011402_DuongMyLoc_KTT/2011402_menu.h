void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int soMenuDuocChon, HocVien hv[MAX], int& n);

void XuatMenu()
{
	cout << "\n\t\t\tMENU CHUC NANG\n";
	cout << "\t 0. Thoat khoi chuong trinh\n";
	cout << "\t 1. Tao bang diem mon hoc\n";
	cout << "\t 2. Xem bang diem mon hoc\n";
	cout << "\t 3. Xuat danh sach cac hoc vien trong bang diem co diem cao nhat\n";
	cout << "\t 4. Xoa cac hoc vien co nam sinh cho truoc ra khoi bang diem mon hoc\n";
	cout << "\t 5. Sap bang diem mon hoc tang dan theo ho va ten hoc vien\n";
	cout << "\t 6. Xuat du lieu\n";
}
int ChonMenu(int soMenu)
{

	int soMenuDuocChon;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 trong cac chuc nang tren >> ";
		cin >> soMenuDuocChon;
		while (cin.fail())  // nhập lại nếu nhập sai kiểu dữ liệu
		{
			cin.clear();
			cin.ignore(32767, '\n');
			system("CLS");
			XuatMenu();
			cout << "\nNhap 1 trong cac chuc nang tren: ";
			cin >> soMenuDuocChon;
		}
		if ((soMenuDuocChon >= 0 && soMenuDuocChon <= soMenu))
		{
			break;
		}
	}
	return soMenuDuocChon;
}
void XuLyMenu(int soMenuDuocChon, HocVien hv[MAX], int& n)
{
	char filename[MAX];
	int check;
	int namsinh;
	switch (soMenuDuocChon)
	{
	case 0:
		system("CLS");
		cout << "\nOk. Chuong trinh da thoat!";
		break;
	case 1:
		system("CLS");
		cout << "\n1. Tao bang diem mon hoc\n";
		cout << "\nNhap ten file de mo : ";
		cin >> filename;
		check = TaoDanhSachHocVien(hv, n, filename);
		if (!check)
			cout << "\nMo tap tin khong thanh cong.";
		else
		{
			cout << "\nMo tap tin thanh cong. So nhan vien hien tai la: " << n;
			cout << "\nDanh sach nhan vien hien tai:\n";
			Xuat_DanhSach_HV(hv, n);
		}
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem bang diem mon hoc\n";
		Xuat_DanhSach_HV(hv, n);
		break;
	case 3:
		system("CLS");
		cout << "\n3. Xuat danh sach cac hoc vien trong bang diem co diem cao nhat\n";
		Xuat_DanhSach_HV_DiemCaoNhat(hv, n);
		break;
	case 4:
		system("CLS");
		cout << "\n 4. Xoa cac hoc vien co nam sinh cho truoc ra khoi bang diem mon hoc\n";
		cout << "\nNhap nam sinh can xoa: ";
		cin >> namsinh;
		Xoa_HocVien_NamSinhChoTruoc(hv, n, namsinh);
		Xuat_DanhSach_HV(hv, n);
		break;
	case 5:
		system("CLS");
		cout << "\nSap bang diem mon hoc tang dan theo ho va ten hoc vien\n";
		SapXep_Tang_Ten(hv, n);
		Xuat_DanhSach_HV(hv, n);
		break;
	case 6:
		system("CLS");
		cout << "\nXuat du lieu\n";
		cout << "\nNhap ten file de mo : ";
		cin >> filename;
		check = XuatDuLieu(hv, n, filename);
		if (!check)
			cout << "\nXuat tap tin khong thanh cong.";
		else
		{
			cout << "\nXuat tap tin thanh cong. ktra file " << n;
		}
		break;
	}
	cout << "\n Ho va ten: Duong My Loc \t\t MSSV: 2011402\n";
	cout << '\n';
	system("pause");
}
