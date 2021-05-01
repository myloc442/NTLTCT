

void HoanVi(int &a, int &b);
void NhapMang(DaySo a, int n);
void XuatMang(DaySo a, int n);
int KiemTraNTo(int n);
void InSoNTo(DaySo a, int n);
int TongDuyNhat(DaySo a, int n);
int DemX(DaySo a, int n, int x);
int TimXTrongDoan(DaySo a, int x, int l, int r);
void SapTang(DaySo a, int n);
void SX0_AmGiam_DuongTang(DaySo a, int n);

//a=10, b=20
void HoanVi(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
	
}

void NhapMang(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu a[" << i << "] = ";
		cin >> a[i];
	}
}

void XuatMang(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}

int KiemTraNTo(int n)
{
	if (n <= 1)
		return 0;

	int kq = 1;
	
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			kq = 0;
			break;
		}
	}
	return kq;
}
void InSoNTo(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (KiemTraNTo(a[i])==1)
			cout << a[i] << "\t";
	}
}
int TongDuyNhat(DaySo a, int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		cout << DemX(a, n, a[i]);
		if (DemX(a, n, a[i]) == 1)
			s += a[i];//s=s+a[i]
	}
	return s;
}
int DemX(DaySo a, int n, int x)
{
	int d = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			d++;
	}
	return d;
}
int TimXTrongDoan(DaySo a, int x, int l, int r)
{
	int kq = 0;
	for (int i = l; i <= r; i++)
	{
		if (a[i] == x)
		{
			kq = 1;
			break;
		}
	}
	return kq;
}
int TongPhanBiet(DaySo a, int n)
{
	int s = a[0];
	for (int i = 1; i < n; i++)
	{
		if (TimXTrongDoan(a, a[i], 0, i - 1) == 0)
			s += a[i];
	}
	return s;
}

void SapTang(DaySo a, int n)
{
	int dk;
	for (int i = 0; i < n-1; i++)
		for (int j = i+1; j < n; j++)
		{
			dk = (a[i] > a[j]);
			if (dk)
				HoanVi(a[i], a[j]);
		}
	
}

void SX0_AmGiam_DuongTang(DaySo a, int n)
{
	int dk;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			/*dk = (a[i] < 0 && a[j] < 0 && a[i] < a[j])
				|| (a[i] > 0 && a[j] < 0)
				|| (a[i] < 0 && a[j] == 0)
				|| (a[i] > 0 && a[j] == 0)
				|| (a[i] > 0 && a[j] > 0 && a[i] > a[j]);*/
			dk = (a[i] < 0 && a[j] < 0 && a[i] < a[j])
				|| (a[i] > 0 && a[j] < 0)
				|| (a[i] != 0 && a[j] == 0)				
				|| (a[i] > 0 && a[j] > 0 && a[i] > a[j]);

			if (dk)
				HoanVi(a[i], a[j]);
		}
	cout << "Sap 0_AmGiam_DuongTang\n";
	for (int i = 0; i < n; i++) {
		if (TimXTrongDoan(a, a[i], 0, i-1) == 0) {
			cout << a[i] << "\t";
		}
	}
}