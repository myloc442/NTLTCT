void XuatMenu();
int ChonMenu(int stt);
void XuLyMenu(int stt, NHANVIEN a[MAX], int& n);

void XuatMenu()
{
	cout << "\n\n\t\t\t\tTUY CHON MENU CHUC NANG\n";
	cout << "\t\t\t0. Thoat khoi chuong trinh\n";
	cout << "\t\t\t1. Tao danh sach nhan vien\n";
	cout << "\t\t\t2. Xem danh sach nhan vien\n";
	cout << "\t\t\t3. Tim nhan vien theo ten cho truoc\n";
	cout << "\t\t\t4. Tim nhan vien theo ma so cho truoc\n";
	cout << "\t\t\t5. Xuat danh sach cac nhan vien co nam sinh cho truoc\n";
	cout << "\t\t\t6. Xuat danh sach nhan vien co luong cao nhat\n";
	cout << "\t\t\t7. Sap xep danh sach tang dan theo muc luong\n";
	cout << "\t\t\t8. Sap xep danh sach giam dan theo ma nhan vien\n";
	cout << "\t\t\t9. Sap xep danh sach theo yeu cau\n";
	cout << "\t\t\t10. Tinh tong luong cua nhan vien\n";
	cout << "\t\t\t11. Liet ke nhan vien co muc luong theo yeu cau\n";
	cout << "\t\t\t12. Xoa nhan vien theo que quan cho truoc\n";
	cout << "\t\t\t13. Xoa nhan vien co nam sinh cho truoc\n";
	cout << "\t\t\t14. Xuat danh sach nhan vien theo tung phong\n";
	cout << "\t\t\t15. Xuat du lieu\n";
}
int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "\nCHON CHUC NANG MENU >> ";
		cin >> stt;
		if (stt >= 0 && stt <= soMenu)
		{
			break;
		}
	}
	return stt;
}
void XuLyMenu(int stt, NHANVIEN a[MAX], int& n)
{
	int check;
	char* filename;
	char FindName[8];
	char maSo[8];
	int namNhap;
	int sum;
	char queQuan[15];
	unsigned short int namSinh;
	switch (stt)
	{
	case 0:
		system("cls");
		cout << "\nOK. CHUONG TRINH DA THOAT!!!\n";
		exit(0);
		break;
	case 1:
		filename = new char[MAX];
		do
		{
			system("cls");
			cout << "\nTao danh sach nhan vien\n";
			cout << "Nhap file .txt: ";
			cin >> filename;
			check = TaoDanhSachNhanVien(a, n, filename);
		} while (!check);

		cout << "\nDa mo tap tin " << filename << " thanh cong\n";
		delete[] filename;
		break;
	case 2:
		system("cls");
		cout << "\nXem danh sach nhan vien\n";
		cout << "\n\n\t\t\t\tDANH SACH NHAN VIEN\n";
		Xuat_DanhSach_NV(a, n);
		break;
	case 3:
		system("cls");
		cout << "\nTim nhan vien theo ten cho truoc\n";
		cout << "\nNhap ten muon tim : ";
		cin >> FindName;
		Tim_Theo_Ten(a, n, FindName);
		break;
	case 4:
		system("cls");
		cout << "\nTim nhan vien theo ma so cho truoc\n";
		cout << "\nNhap ma so muon tim: ";
		cin >> maSo;
		Tim_Theo_MaSo(a, n, maSo);
		break;
	case 5:
		system("cls");
		cout << "\nXuat danh sach cac nhan vien co nam sinh cho truoc\n";
		cout << "\nNhap nam sinh : ";
		cin >> namNhap;
		Xuat_DS_NamChoTruoc(a, n, namNhap);
		break;
	case 6:
		system("cls");
		cout << "\nXuat danh sach nhan vien co luong cao nhat\n";
		Xuat_DS_Theo_Luong_Cao_Nhat(a, n);
		break;
	case 7:
		system("cls");
		cout << "\nSap xep danh sach tang dan theo muc luong\n";
		SapXep_TangDan_TheoLuong(a, n);
		Xuat_DanhSach_NV(a, n);
		break;
	case 8:
		system("cls");
		cout << "\nSap xep danh sach giam dan theo ma nhan vien\n";
		SapXep_GiamDan_TheoMaNV(a, n);
		Xuat_DanhSach_NV(a, n);
		break;
	case 9:
		system("cls");
		cout << "\nSap xep danh sach theo yeu cau\n";
		SapXep_Theo_YC(a, n);
		Xuat_DanhSach_NV(a, n);
		break;
	case 10:
		system("cls");
		cout << "\nTinh tong luong cua nhan vien\n";
		cout << "\n\n\t\tDANH SACH NHAN VIEN\n";
		Xuat_DanhSach_NV(a, n);
		sum = Tong_Luong(a, n);
		cout << "\nTong luong cua " << n << " nhan vien la :" << sum << "vnd";
		break;
	case 11:
		system("cls");
		cout << "\nLiet ke nhan vien co muc luong theo yeu cau\n";
		LietKe_NhanVien_CoLuong(a, n);
		break;
	case 12:
		system("cls");
		cout << "\nXoa nhan vien theo que quan cho truoc\n";
		cout << "\nNhap que quan muon xoa: ";
		cin >> queQuan;
		cout << "\nQue quan ban muon xoa la: " << queQuan;
		Xoa_NhanVien_TheoQueQuan(a, n, queQuan);
		cout << "\nDANH SACH NHAN VIEN SAU KHI XOA\n";
		Xuat_DanhSach_NV(a, n);
		break;
	case 13:
		system("cls");
		cout << "\nXoa nhan vien co nam sinh cho truoc\n";
		cout << "\nNhap nam sinh muon xoa: ";
		cin >> namSinh;
		cout << "\nNam sinh ban muon xoa la : " << namSinh;
		Xoa_NhaVien_NamSinhChoTruoc(a, n, namSinh);
		cout << "\nDANH SACH NHAN VIEN SAU KHI XOA\n";
		Xuat_DanhSach_NV(a, n);
		break;
	case 14:
		system("cls");
		cout << "\nXuat danh sach nhan vien theo tung phong\n";
		Xuat_NhanVien_TheoPhong(a, n);
		break;
	case 15:
		system("cls");
		cout << "\n\n";
		break;
	}
	cout << "\n\nNhan 1 phim bat ki, de tiep tuc cac chuc nang!!!";
	_getch();
}