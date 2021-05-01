#pragma once
void HienThiMenu();
void XuLiMenu(int menu, unsigned int n);
void ChayChuongTrinh();

void HienThiMenu() {
	cout << "============================================MENU==========================================\n";
	cout << "\t\t\t\t\tLocCodeDao\n";
	cout << "	1. Xuat cac so tu 1 den n, cac so cach nhau 1 dau tab, va moi dong chua 10 so \n";
	cout << "	2. Dem so luong cac so chia het cho 3, nhung khong chia het cho 4 trong doan [1..n]\n";
	cout << "	3. Dem so luong chu so cua n\n";
	cout << "	4. Dao nguoc so n\n";
	cout << "	5. Tinh tong cac chu so trong n\n";
	cout << "	6. Cho biet chu so dau tien trong n\n";
	cout << "	7. Tim so nguyen m lon nhat sao cho tong 1+2+3+..+m <= n\n";
	cout << "==========================================================================================\n";
	cout << endl;
}

void XuLiMenu(int menu, unsigned int n) {
	cout << "==========================================================================================\n";
	cout << endl;
	cout << "CHUONG TRINH DA DUOC XU LI!\n ";
	switch (menu) {
	case 1: {
		std::cout << "Ban da chon: 1\n";
		XuatCacSo(n);
		break;
	}
	case 2: {
		std::cout << "Ban da chon: 2\n";
		KiemTraPhepChia(n);
		break;
	}
	case 3: {
		std::cout << "Ban da chon: 3\n";
		DemSoLuong(n);
		break;
	}
	case 4: {
		std::cout << "Ban da chon: 4\n";
		DaoNguocSo(n);
		break;
	}
	case 5: {
		std::cout << "Ban da chon: 5\n";
		TinhTong(n);
		break;
	}
	case 6: {
		std::cout << "Ban da chon: 6\n";
		ChuSoDauTien(n);
		break;
	}
	case 7: {
		std::cout << "Ban da chon: 7\n";
		SoNguyenM(n);
		break;
	}
	}
	_getch();
}
void ChayChuongTrinh() {
	unsigned int menu, n;
	char kt;
	do {
		cout << "Ban hay tuy chon Menu [1..7]: ";
		cin >> menu;
	} while (menu < MAX || menu > MIN);
	cout << endl;
	cout << "Ban hay nhap gia tri n: ";
	cin >> n;
	XuLiMenu(menu, n);
}
