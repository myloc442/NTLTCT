#pragma once

void XuatCacSo(unsigned int n);
void KiemTraPhepChia(unsigned int n);
void DemSoLuong(unsigned int n);
void DaoNguocSo(unsigned int n);
void TinhTong(unsigned int n);
void ChuSoDauTien(unsigned int n);
void SoNguyenM(unsigned int n);

void XuatCacSo(unsigned int n) {
	cout << "Cac so tu 1 den " << n << " la :\n";
	for (int i = 1; i <= n; i++)
	{
		cout << i << "\t";
	}
}
void KiemTraPhepChia(unsigned int n) {
	cout << "So luong cac so chia het cho 3, nhung khong chia het cho 4 trong doan[1.." << n << "] la:\n";
	for (int i = 1; i < n; i++)
	{
		if (i % 3 == 0 && i % 4 != 0) {
			cout << i << " ";
		}
	}
}
void DemSoLuong(unsigned int n) {
	cout << "Dem so luong chu so cua " << n << " la:\n";
	int dem = 0;
	while (n > 0)
	{
		n /= 10;
		dem++;
	}
	cout << dem;
}

void DaoNguocSo(unsigned int n) {
	cout << " Dao nguoc so " << n << " la:\n";
	int tmp;
	int res = 0;
	while (n > 0) { // Check n =12345 > 0 (True)
		tmp = n % 10; // tmp = n % 10 = 12345 % 10 = 5
		res = res * 10 + tmp; // res = res * 10 + tmp = 0 * 10 + 5 = 5
		n = n / 10; // n = (n / 10) = (12345 / 10) = 1234
	}
	cout << res;
}
void TinhTong(unsigned int n) {
	cout << "Tinh tong cac chu so trong " << n << " la:\n";
	int s = 0, sum = 0;
	for (; n != 0; ) { // Check n # 0 thì thực thi vòng lặp 
		s = n % 10; // 12345 % 10 = 5
		sum += s; // Tổng = 0 + 5 
		n /= 10; // 12345 / 10 = 1234
	}
	cout << sum;
}
void ChuSoDauTien(unsigned int n)
{
	cout << "Cho biet chu so dau tien trong " << n << " la:\n";
	int x = 0;
	for (; n != 0; )
	{
		x = n % 10;
		n /= 10;
	}
	cout << x;
}
void SoNguyenM(unsigned int n)
{
	cout << "Tim so nguyen m lon nhat sao cho tong 1+2+3+..+m <= " << n << " la: \n";
	int s = 0, i = 0;
	while (s + i < n)
	{
		i++;
		s = s + i;
	}
	cout << i;
}
