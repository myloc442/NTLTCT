void HienThiMenu();
void XuLyMenu(unsigned int n, unsigned int menu);
void ChayChuongTrinh();

void HienThiMenu() {
	cout << "1. Xuat tat ca cac uoc so cua n." << endl;
	cout << "2. Dem so luong cac so luong cua n." << endl;
	cout << "3. Tinh tong cac uoc so cua n." << endl;
	cout << "4. Tim so lon nhat nho hon hoac bang n ma luy thua cua 2." << endl;
	cout << "5. Kiem tra so n co phai la so hoan hao?" << endl;
}

void XuLyMenu(unsigned int n, unsigned int menu) {
	system("CLS");

	switch (menu) {
	case 1: {
		cout << "Ban da chon 1. Xuat tat cac uoc so cua " << n << endl;
		XuatUocSo(n);
		_getch();
		break;
	}
	case 2: {
		cout << "Ban da chon 2. Dem so luong cac uoc so cua " << n << endl;
		DemSoLuong(n);
		_getch();
		break;
	}
	case 3: {
		cout << "Ban da chon 3. Tinh tong cac uoc so cua " << n << endl;
		TinhTong(n);
		_getch();
		break;
	}
	case 4: {
		cout << "Ban da chon 4. Tim so lon nhat nho hon hoac bang " << n << " ma luy thua cua 2. " << endl;
		int ketQua = TimMax(n);
		cout << ketQua;
		_getch();
		break;
	}
	case 5: {
		cout << "Ban da chon 5. Kiem tra so" << n << " co phai la so hoan hao?" << endl;
		KiemTra(n);
		_getch();
		break;
	}
	}
}

void ChayChuongTrinh() {
	unsigned int menu, n;
	cout << endl;
	cout << "CAM ON VI DA SU DUNG CHUC NANG!\n";
	do {
		cout << "Ban hay tuy chon Menu [1..5]: ";
		cin >> menu;
	} while (menu > MAX || menu < MIN);

	cout << endl;

	cout << "Ban hay nhap gia tri so nguyen n: ";
	cin >> n;

	XuLyMenu(n, menu);
}
