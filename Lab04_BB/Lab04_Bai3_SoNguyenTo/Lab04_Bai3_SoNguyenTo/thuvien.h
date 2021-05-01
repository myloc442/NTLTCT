int KiemTraSNT(unsigned int n);
void SoNguyenTo(unsigned int n);
void DemSoNguyenTo(unsigned int n);
void CacUocSNT(unsigned int n);
void ThuaSNT(unsigned int n);


int KiemTraSNT(unsigned int n) {

	if (n < 2) {
		return 0;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

void SoNguyenTo(unsigned int n) {
	int dong = 0;
	if (n >= 2) {
		cout << "2 ";
	}
	for (int i = 3; i <= n; i += 2) {
		int ketQua = KiemTraSNT(i);
		if (ketQua == 1) {
			cout << i << " ";
			dong += 1;
			if (dong % 5 == 0) {
				cout << endl;
			}
		}
	}
}

void DemSoNguyenTo(unsigned int n) {
	int x = 0;
	for (int i = 1; i <= n; i++) {
		int ketQua = KiemTraSNT(i);
		if (ketQua == 1)
			x += 1;
	}
	cout << x;
}

void CacUocSNT(unsigned int n) {
	int sum = 0;
	int j = 0;
	for (int i = 0; i <= n; i++)
	{
		j = KiemTraSNT(i);
		if (j == 1 && n % i == 0) {
			sum += i;
		}
	}
	cout << sum;
}

void ThuaSNT(unsigned int n) {
	//Cách 1:
	if (n < 0) {
		n *= -1; // n se bien thanh so duong
	}
	int i = 2; // so nguyen to dau tien = 2
	cout << n << " = ";
	while (n != 1) { 
		if (n % i == 0) { // i se la 1 uoc cua n
			cout << i;
			if (n != i) { // xet xem co in ra dau x khong?
				cout << " x ";
			}
			else {
				cout << endl;
			}
			n /= i;
		}
		else {
			i++;
		}
	}
	//Cách 2:
	int dem;

	for (int i = 2; i <= n; i++) {
		dem = 0;
		while (n % i == 0) {
			++dem;
			n /= i;
		}
		if (dem != 0) {
			cout << i;
			if (dem > 1) {
				cout << "^" << dem;
			}
			if (n > i) {
				cout << " * ";
			}
		}
	}

	//Cách 3:
	for (int i = 2, count = 0; i <= n; i++)
		for (; n % i == 0; n /= i)
			cout << (count++ ? " * " : "") << i; 
	/* viết đầy đủ của cout << (count++ ? " * " : "") << i; 
	if (count > 0) cout << " * ";
	cout << i;
	count++; 
	*/
}
