void XuatMenu()
{
    cout << "\n\n<============ CHON 1 TRONG CAC TINH NANG SAU ===========>";
    cout << "\t0. Thoat chuong trinh!\n";
    cout << "\t1. Nhap tu dong mang\n";
    cout << "\t2. Xem mang\n";
    cout << "\t3. Tinh tong cac phan tu trong mang\n";
    cout << "\t4. Tinh tich cac phan tu trong mang\n";
    cout << "\t5. Tinh gia tri nho nhat cua mang\n";
    cout << "\t6. Tinh gia tri lon nhat cua mang\n";
    cout << "\t7. Tinh tong cac so nguyen to cua mang\n";
    cout << "\t8. Tim vi tri cuoi cung x xuat hien trong mang\n";
    cout << "\t9. Dem so duong chay cua mang\n";
    cout << "\t<===============================================>";
}
int ChonMenu(int soMuc)
{
    int soMucDuocChon;
    for (;;)
    {
        system("CLS");
        XuatMenu();
        cout << "\nNhap 1 trong cac chuc nang tren: ", cin >> soMucDuocChon;
        while (cin.fail())	// Nhập lại nếu nhập sai KDL
        {
            cin.clear();
            cin.ignore(32767, '\n');
            system("CLS");
            XuatMenu();
            cout << "\nNhap 1 trong cac chuc nang tren: ", cin >> soMucDuocChon;
        }
        if ((soMucDuocChon >= 0 && soMucDuocChon <= soMuc))
        {
            break;
        }
    }
    return soMucDuocChon;
}
void XuLyMenu(int soMucDuocChon, DayDong a, int n)
{
	int kq, x;
	system("cls");
	switch (soMucDuocChon)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Nhap tu dong mang";
		NhapTuDong(a, n);
		cout << "\nDay so vua nhap: ";
		XuatMang(a, n);
		break;

	case 2:
		cout << "\n2. Xem mang";
		cout << "\nDay so hien hanh: ";
		XuatMang(a, n);
		break;

	case 3:
		cout << "\n3. Tinh tong cac phan tu trong mang";
		cout << "\nDay so hien hanh: ";
		XuatMang(a, n);
		kq = TinhTong(a, n);
		cout << "\nTong cua day so tren la: " << kq;
		break;

	case 4:
		cout << "\n4. Tinh tich cac phan tu trong mang";
		cout << "\nDay so hien hanh: ";
		XuatMang(a, n);
		kq = TinhTich(a, n);
		cout << "\nTich cua day so tren la: " << kq;
		break;

	case 5:
		cout << "\n5. Tinh gia tri nho nhat cua mang";
		cout << "\nDay so hien hanh: ";
		XuatMang(a, n);
		kq = TinhMin(a, n);
		cout << "\nGia tri nho nhat trong day so la: " << kq;
		break;

	case 6:
		cout << "\n6. Tinh gia tri lon nhat trong mang";
		cout << "\nDay so hien hanh: ";
		XuatMang(a, n);
		kq = TinhMax(a, n);
		cout << "\nGia tri lon nhat trong day so la: " << kq;
		break;

	case 7:
		cout << "\n7. Tinh tong cac so nguyen to trong mang";
		cout << "\nDay so hien hanh: ";
		XuatMang(a, n);
		kq = TinhTong_NT(a, n);
		cout << "\nTong cac so nguyen to trong mang la : " << kq;
		break;
	case 8:
		cout << "\n8. Tim vi tri cuoi cung x xuat hien trong mang, neu co";
		cout << "\nDay so hien hanh: ";
		XuatMang(a, n);
		cout << "\nNhap vao 1 so x: ";
		cin >> x;
		kq = Tim_Cscc(a, n, x);
		if (kq == -1)
			cout << "\nX khong xuat hien trong day so.";
		else
			cout << "\nVi tri cuoi cung phan tu x xuat hien la: " << kq;
		break;

	case 9:
		cout << "\n9. Dem so duong chay cua mang";
		cout << "\nDay so hien hanh: ";
		XuatMang(a, n);
		kq = TinhSo_DC(a, n);
		cout << "\nSo duong chay la: " << kq;
		break;

	}
	_getch();
}
