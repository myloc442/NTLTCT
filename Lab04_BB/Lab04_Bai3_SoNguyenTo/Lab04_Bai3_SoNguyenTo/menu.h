void HienThiMenu();
void XuLyMenu(unsigned int menu, unsigned int n);
void ChayChuongTrinh();

void HienThiMenu() {
	cout << "- 1. Kiem tra n co phai so nguyen to khong ?     -" << endl;
	cout << "- 2. Xuat ra man hinh so nguyen to tu 1 toi n    -" << endl;
	cout << "- 3. Dem so luong so nguyen to tu 1 toi n        -" << endl;
	cout << "- 4. Tinh tong cac uoc so nguyen to cua n        -" << endl;
	cout << "- 5. Phan tinh n thanh tich cac thua so nguyen to-" << endl;
}

void XuLyMenu(unsigned int menu, unsigned int n) {
	
		system("CLS");
		
		switch (menu) {
		
		case 1: {
			cout << "Ban da chon 1. Kiem tra " << n << " co phai so nguyen to khong ? " << endl;
			int kq = KiemTraSNT(n);
			if (kq == 0)
				cout << n << " khong la so nguyen to";
			else
				cout << n << " la so nguyen to";
			_getch();
			break;
		}

		case 2: {
			cout << "Ban da chon 2. Xuat ra cac so nguyen to tu 1 toi " << n << endl;
			SoNguyenTo(n);
			_getch();
			break;
		}
		case 3: {
			cout << "Ban da chon 3. So luong so nguyen to tu 1 toi n " << endl;
			DemSoNguyenTo(n);
			_getch();
			break;
		}
		case 4: {
			cout << "Ban da chon 4. Tinh tong cac uoc so nguyen to cua " << n << endl;
			CacUocSNT(n);
			_getch();
			break;
		}
		case 5: {
			cout << "Ban da chon 5. Phan tich " << n << " thanh cac thua so nguyen to " << endl;
			ThuaSNT(n);
			_getch();
			break;
		}
	}
}

void ChayChuongTrinh() {
	unsigned int menu, n;
	cout << "CAM ON VI DA SU DUNG CHUC NANG!\n";
	do {
		cout << "Ban hay tuy chon Menu [1..5]: ";
		cin >> menu;
	} while (menu > MAX || menu < MIN);

	cout << endl;

	cout << "Ban hay nhap gia tri so nguyen n: ";
	cin >> n;

	XuLyMenu(menu, n);
}
