#pragma once
void XuatMenu()
{
	cout << "\n\n\t\t\t\tMENU CHUC NANG\n";
	cout << "\t\t0. Thoat khoi chuong trinh \n";
	cout << "\t\t1. Tao danh sach nhan vien \n";
	cout << "\t\t2. Xem danh sach nhan vien \n";
	cout << "\t\t3. Xuat danh sach nhan vien co nam sinh cho truoc \n";
	cout << "\t\t4. Xuat danh sach cac nhan vien co luong thap nhat \n";
	cout << "\t\t5. Xoa cac nhan vien co que quan cho truoc ra khoi danh sach nhan vien \n";
}
int ChonMenu(int soMenu)
{
	int stt; 
	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "\n\n\t\t\t\tChon 1 tuy chon menu >> ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
		{
			break;
		}
	}
	return stt;
}
void XuLyMenu(NHANVIEN a[MAX], int stt, int& n)
{
	char* f;
	int check;
	unsigned int namNhap;
	char queXoa[16];
	switch (stt)
	{
	case 0:
		system("cls");
		cout << "\nOK. CHUONG TRINH DA THOAT\n";
		exit(0);
		break;
	case 1:
		f = new char[MAX];
		do
		{
			system("cls");
			cout << "\n1. Tao danh sach nhan vien\n";
			cout << "\nNhap file : ";
			cin >> f;
			check = Tao_Danh_Sach(a, n, f);
		} while (!check);
		cout << "\nNhap file " << f << " thanh cong!\n";
		delete[] f;
		break;
	case 2:
		system("cls");
		cout << "\nXem danh sach nhan vien\n";
		Xuat_DS(a, n);
		break;
	case 3:
		system("cls");
		cout << "\nXuat danh sach nhan vien co nam sinh cho truoc\n";
		cout << "\nNhap nam sinh : ";
		cin >> namNhap;
		Xuat_NV_Theo_Nam_Sinh(a, n, namNhap);
		break;
	case 4:
		system("cls");
		cout << "\nXuat danh sach cac nhan vien co luong thap nhat\n";
		Xuat_NV_Theo_Luong_Thap_Nhat(a, n);
		break;
	case 5:
		system("cls");
		cout << "\nXoa cac nhan vien co que quan cho truoc ra khoi danh sach nhan vien\n";
		cout << "\nNhap que quan muon xoa : ";
		cin >> queXoa;
		cout << "\nQue quan ban muon xoa la : " << queXoa << '\n';
		Xoa_NV_Theo_Que_Quan(a, n, queXoa);
		Xuat_DS(a, n);
		break;
	}
	cout << "\nNhan 1 phim bat ki de tiep tuc chuong trinh\n";
	_getch();
}