void XuatGiaTri_SoLan_PhanBiet(int* a, int n)
{
	int dau; //đánh dấu a[i] đã có trong b chưa
	int* b, //lưu các giá trị phân biệt
		* c, //Lưu số lần xuất hiên của các b[j]
		m;// Kích thước của b, c
	m = 0;
	b = new int[n];
	for (int i = 0; i < n; i++)
	{
		dau = 1;
		for (int j = 0; j < m && dau; j++)
			dau = dau && (*(a + i) != *(b + j));
		if (dau)
		{
			*(b + m) = *(a + i);
			m++;
		}
	}
	c = new int[n];
	for (int k = 0; k < m; k++)
		*(c + k) = 0;
	for (int j = 0; j < m; j++)
	{
		for (int i = 0; i < n; i++)
			if (a[i] == *(b + j))
			{
				*(c + j) = *(c + j) + 1;
			}
	}
	cout << "\nCac gia tri phan biet trong a va so lan xuat hien cac gia tri nay:\n";
	for (int k = 0; k < m; k++)
	{
		cout << "\nGia tri " << *(b + k) << " xuat hien " << *(c + k) << " lan.";
	}
	delete[]b;
	delete[]c;
}
int* TaoMang(int& n)
{
	int* a;
	do
	{
		cout << "\Ban hay so phan tu n cua mang : ";
		cin >> n;
	} while (n <= 0);
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		*(a + i) = rand() % 10;
	}
	return a;
}
void XuatMang(int* a, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << *(a + i) << "\t";
	}
}