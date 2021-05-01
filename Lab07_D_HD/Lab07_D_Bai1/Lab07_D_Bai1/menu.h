void XuatMenu();
int ChonMenu(int);
void XuLyMenu(int, String, String);
void XuatMenu()
{
	cout << "\t\t\t\tBang Menu\n";
	cout << "\t0. Thoat khoi chuong trinh\n";
	cout << "\t1. Nhap chuoi\n";
	cout << "\t2. Xem chuoi\n";
	cout << "\t3. strlen_Tinh chieu dai chuoi\n";
	cout << "\t4. strcat_s_Noi chuoi sau vao sau chuoi truoc\n";
	cout << "\t5. strcpy_s_Chep chuoi sau vao chuoi truoc\n";
	cout << "\t6. _strcmpi_So sanh chuoi _ khong phan biet KT thuong, HOA\n";
	cout << "\t7. strcmp_So sanh chuoi _ phan biet KT thuong, HOA\n";
	cout << "\t8. Noi chuoi sau vao sau chuoi truoc\n";
	cout << "\t9. Chep chuoi sau qua chuoi truoc\n";
	cout << "\t10. So sanh chuoi _ khong phan biet KT thuong, HOA\n";
	cout << "\t11. So sanh chuoi _ phan biet KT thuong, HOA\n\n";
}
int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so khong khoang [0.." << soMenu << "] de chon chuc nang, STT >> ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, String a, String b)
{
	int kq;
	system("cls");

	switch (menu)
	{
	case 0:
		cout << "\nOk. Chuong trinh da thoat!";
		break;

	case 1:
		cout << "\n1. gets_s: Nhap chuoi";
		gets_s_NhapChuoi(a, 'a');
		cout << "\nChuoi vua nhap: ";
		XuatChuoi(a);

		gets_s_NhapChuoi(b, 'b');
		cout << "\nChuoi vua nhap: ";
		XuatChuoi(b);

		cout << "\nNhan phim bat ky de tiep tuc!";

		break;

	case 2:
		cout << "\n2. Xem chuoi";
		cout << "\nChuoi a: ";
		XuatChuoi(a);
		cout << "\nChuoi b: ";
		XuatChuoi(b);

		cout << "\nNhan phim bat ky de tiep tuc!";

		break;

	case 3:
		cout << "\n3. strlen_Tinh chieu dai cua chuoi";
		cout << "\nChuoi a: ";
		XuatChuoi(a);
		cout << "\nChieu dai chuoi a: l = " << strlen_TinhChieuDaiCuaChuoi(a);
		cout << "\nChuoi b: ";
		XuatChuoi(b);
		cout << "\nChieu dai chuoi b: l = " << strlen_TinhChieuDaiCuaChuoi(b);
		cout << "\nNhan phim bat ky de tiep tuc!";
		break;

	case 4:
		cout << "\n4. strcat_s_Noi chuoi sau vao sau chuoi truoc";
		cout << "\nChuoi truoc: a = ";
		XuatChuoi(a);
		cout << "\nChuoi sau: b = ";
		XuatChuoi(b);
		strcat_s_Noi_ChuoiSau_VaoSau_ChuoiTruoc(a, b);
		cout << "\nChuoi truoc sau khi noi: a = ";
		XuatChuoi(a);
		break;

	case 5:
		cout << "\n5. strcpy_s_Chep chuoi sau vao chuoi truoc";
		cout << "\nChuoi sau: b = ";
		XuatChuoi(b);

		strcpy_s_Chep_ChuoiSau_Qua_ChuoiTruoc(a, b);
		cout << "\nChuoi truoc a, do b chep qua: a = ";
		XuatChuoi(a);
		break;
	case 6:
		cout << "\n6. _strcmpi_So sanh chuoi_Khong phan biet KT thuong, HOA";
		cout << "\nChuoi a: ";
		XuatChuoi(a);
		cout << "\nChuoi b: ";
		XuatChuoi(b);

		kq = _strcmpi_SoSanhChuoi_KPB(a, b);
		if (kq > 0)
			cout << "\na > b";
		else
			if (kq < 0)
				cout << "\na < b";
			else
				cout << "\na == b";
		break;
	case 7:
		cout << "\n7. strcmp_So sanh chuoi_Phan biet KT thuong, HOA";
		cout << "\nChuoi a: ";
		XuatChuoi(a);
		cout << "\nChuoi b: ";
		XuatChuoi(b);

		kq = strcmp_SoSanhChuoi_PB(a, b);
		if (kq > 0)
			cout << "\na > b";
		else
			if (kq < 0)
				cout << "\na < b";
			else
				cout << "\na == b";
		break;
	case 8:
		cout << "\n8. Noi chuoi sau vao sau chuoi truoc";
		cout << "\nChuoi truoc: a = ";
		XuatChuoi(a);
		cout << "\nChuoi sau: b = ";
		XuatChuoi(b);
		Noi_ChuoiSau_VaoSau_ChuoiTruoc(a, b);
		cout << "\nChuoi truoc sau khi noi: a = ";
		XuatChuoi(a);

		break;

	case 9:
		cout << "\n9. Chep chuoi sau qua chuoi truoc";
		cout << "\nChuoi sau: b = ";
		XuatChuoi(b);

		Chep_ChuoiSau_Qua_ChuoiTruoc(a, b);
		cout << "\nChuoi truoc a, do b chep qua: a = ";
		XuatChuoi(a);
		break;

	case 10:
		cout << "\n10. So sanh chuoi_Khong phan biet KT thuong, HOA";
		cout << "\nChuoi a = ";
		XuatChuoi(a);
		cout << "\nChuoi b = ";
		XuatChuoi(b);

		kq = SoSanhChuoi_KPB(a, b);
		if (kq == 1)
			cout << "\na > b";
		else
			if (kq == -1)
				cout << "\na < b";
			else
				cout << "\na == b";
		break;

	case 11:
		cout << "\n11. So sanh chuoi_Phan biet KT thuong, HOA";
		cout << "\nChuoi a = ";
		XuatChuoi(a);
		cout << "\nChuoi b = ";
		XuatChuoi(b);

		kq = SoSanhChuoi_PB(a, b);
		if (kq == 1)
			cout << "\na > b";
		else
			if (kq == -1)
				cout << "\na < b";
			else
				cout << "\na == b";
		break;
	}
	_getch();
}