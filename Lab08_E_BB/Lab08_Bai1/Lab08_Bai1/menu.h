void XuatMenu();
int ChonMenu(int);
void XuLyMenu(int, SinhVien, int);

void XuatMenu()
{
	cout << "\t\t\t\tMenu Chuc Nang\n";
	cout << "\t0. Thoat khoi chuong trinh\n";
	cout << "\t1. Tao bang diem sinh vien\n";
	cout << "\t2. Xem bang diem sinh vien\n";
	cout << "\t3. Xem bang diem day du - co ket qua XLHT\n";
	cout << "\t4. Xuat bang diem sinh vien theo tung lop\n";
	cout << "\t5. Sap xep bang diem sinh vien giam dan theo diem trung binh\n";
	cout << "\t6. Sap xep va xuat bang diem tang dan theo ten, neu trung ten, sap tang theo ma sinh vien\n";
	cout << "\t7. Tim va xuat thong tin cua sinh vien co ten cho truoc\n";
	cout << "\t8. Tim va xuat thong tin cua cac sinh vien co diem trung binh cao nhat\n";
	cout << "\t9. Xep loai hoc luc cua sinh vien dua vao diem trung binh\n";
}
int ChonMenu(int soMenu)
{
	int stt;

	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "\nNhap tuy chon Menu [0.." << soMenu << "] de chon chuc nang. STT >> ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}

	return stt;
}
void XuLyMenu(int menu, SinhVien sv[MAX], int& n)
{
	char ten[10];
	SinhVien kq;
	system("cls");
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Tao bang diem sinh vien";
		Nhap_DSSV(sv, n);
		cout << "\nDanh sach sinh vien hien tai:\n";
		Xuat_DSNV(sv, n);
		break;
	case 2:
		cout << "\n2. Xem bang diem sinh vien";
		Xuat_DSNV(sv, n);
		break;
	case 3:
		cout << "\n3. Xem bang diem day du";
		XepLoai(sv, n);
		Xuat_DSNV(sv, n);
		break;
	case 4:
		cout << "\n4. Xuat bang diem sinh vien theo tung lop";
		XuatSinhVienTheoLop(sv, n);
		break;
	case 5:
		cout << "\n5. Sap bang diem sinh vien giam dan theo DTB";
		cout << "\nBang diem hien hanh:\n";
		Xuat_DSNV(sv, n);
		GiamDan_DTB(sv, n);
		cout << "\nBang diem sau khi sap xep:\n";
		Xuat_DSNV(sv, n);
		break;
	case 6:
		cout << "\n6. Sap bang diem tang dan theo ten - MSSV";
		cout << "\nBang diem hien hanh:\n";
		Xuat_DSNV(sv, n);
		TangDan_Ten_MSSV(sv, n);
		cout << "\nBang diem sau khi sap xep:\n";
		Xuat_DSNV(sv, n);
		break;
	case 7:
		cout << "\n7. Tim thong tin sinh vien theo ten";
		cout << "\nBang diem hien hanh:\n";
		Xuat_DSNV(sv, n);
		cout << "\nNhap ten sinh vien: ";
		cin.ignore(MAX, '\n');
		gets_s(ten, 10);
		TimTenSinhVien(sv, n, ten);
		break;
	case 8:
		cout << "\n8. Tim thong tin sinh vien co DTB cao nhat";
		cout << "\nBang diem hien hanh:\n";
		Xuat_DSNV(sv, n);
		kq = DiemTBCaoNhat(sv, n);
		cout << "\nSinh vien co diem trung binh cao nhat la: \n";
		XuatTieuDe();
		Xuat_1SV(kq);
		XuatKeNgang(1);
		break;
	case 9:
		cout << "\n9. Xep loai hoc luc cua sinh vien";
		cout << "\nBang diem hien hanh:\n";
		Xuat_DSNV(sv, n);
		cout << "\nBang diem sau khi xep loai:\n";
		XepLoai(sv, n);
		Xuat_DSNV(sv, n);
		break;
	}
	_getch();
}

