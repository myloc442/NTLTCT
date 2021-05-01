int TimMax(unsigned int n);
void KiemTra(unsigned int n);
void XuatUocSo(unsigned int n);
void DemSoLuong(unsigned int n);
void TinhTong(unsigned int n);

int TimMax(unsigned int n) {
	int count = 0;
	int i = 1;
	while (pow(2, i) <= n)
	{
		count += 1;
		i++;
	}
	return pow(2, count);
}

void KiemTra(unsigned int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0) {
			sum += i;
		}
	}
	if (sum / 2 == n) {
		cout << n << " day la so hoan chinh!\n";
	}
	else {
		cout << n << " day khong phai la so hoan chinh!\n";
	}
}

void XuatUocSo(unsigned int n) {
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0) {
			cout << i << " ";
		}
	}
}

void DemSoLuong(unsigned int n) {
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0) {
			dem++;
		}
	}
	cout << dem;
}

void TinhTong(unsigned int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0) {
			sum += i;
		}
	}
	cout << sum;
}