#define MAX 100
typedef short int byte;
struct NGAYTHANGNAMSINH
{
	byte ngaySinh;
	byte thangSinh;
	unsigned int namSinh;
};
struct NHANVIEN
{
	char maNV[8];
	char hoTen[22];
	NGAYTHANGNAMSINH date;
	char queQuan[16];
	unsigned long luong;
};
int Tao_Danh_Sach(NHANVIEN a[MAX], int& n, char *tentep)
{
	ifstream Nhap(tentep);
	if (!Nhap)
	{
		return 0;
	}
	n = 0;
	while (!Nhap.eof())
	{
		Nhap >> a[n].maNV;
		Nhap >> a[n].hoTen;
		Nhap >> a[n].date.ngaySinh;
		Nhap >> a[n].date.thangSinh;
		Nhap >> a[n].date.namSinh;
		Nhap >> a[n].queQuan;
		Nhap >> a[n].luong;
		n++;
	}
	Nhap.close();
	return 1;
}
void Ke_Ngang(char kyTu)
{
	cout << setiosflags(ios::left) << '|';
	for (int i = 0; i < 92; i++)
	{
		cout << kyTu;
	}
	cout << '|';
}
void Tieu_De()
{
	Ke_Ngang('=');
	cout << '\n' << setiosflags(ios::left) << '|'
		<< setw(8) << "Ma NV" << '|'
		<< setw(22) << "Ho va ten" << '|'
		<< setw(10) << "Ngay sinh" << '|'
		<< setw(10) << "Thang sinh" << '|'
		<< setw(10) << "Nam sinh" << '|'
		<< setw(16) << "Que quan" << '|'
		<< setw(10) << "Luong" << '|' << '\n';
	Ke_Ngang('=');
}
void Thong_Bao(int tong)
{
	cout << '\n' << setiosflags(ios::left) << '|'
		<< setw(50) << "TONG SO NHAN VIEN TRONG DANH SACH LA: " << setw(42) << tong << '|' << '\n';
	Ke_Ngang('=');
}
void Xuat_1_NV(NHANVIEN a)
{
	cout << '\n' << setiosflags(ios::left) << '|'
		<< setw(8) << a.maNV << '|'
		<< setw(22) << a.hoTen << '|'
		<< setw(10) << a.date.ngaySinh << '|'
		<< setw(10) << a.date.thangSinh << '|'
		<< setw(10) << a.date.namSinh << '|'
		<< setw(16) << a.queQuan << '|'
		<< setw(10) << a.luong << '|' << '\n';
	Ke_Ngang('_');
}
void Xuat_DS(NHANVIEN a[MAX], int n)
{
	Tieu_De();
	for (int i = 0; i < n; i++)
	{
		Xuat_1_NV(a[i]);
	}
	Thong_Bao(n);
}
void Xuat_NV_Theo_Nam_Sinh(NHANVIEN a[MAX], int n, unsigned int namSinh)
{
	int VT[MAX];
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i].date.namSinh == namSinh)
		{
			VT[x++] = i;
		}
	}
	if (x != 0)
	{
		cout << "\n\n\t\t\t\tDANH SACH NHAN VIEN THEO NAM SINH " << namSinh << '\n';
		Tieu_De();
		for (int i = 0; i < x; i++)
		{
			Xuat_1_NV(a[VT[i]]);
		}
		Thong_Bao(x);
	}
}
int Tim_Luong_Min(NHANVIEN a[MAX], int n)
{
	long min = a[0].luong;
	for (int i = 0; i < n; i++)
	{
		if (min > a[i].luong)
		{
			min = a[i].luong;
		}
	}
	return min;
}
void Xuat_NV_Theo_Luong_Thap_Nhat(NHANVIEN a[MAX], int n)
{
	long min = Tim_Luong_Min(a, n);
	int VT[MAX];
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i].luong == min)
		{
			VT[x++] = i;
		}
	}
	if (x != 0)
	{
		cout << "\n\n\t\t\t\tDANH SACH NHAN VIEN THEO LUONG THAP NHAT : " << min << '\n';
		Tieu_De();
		for (int i = 0; i < x; i++)
		{
			Xuat_1_NV(a[VT[i]]);
		}
		Thong_Bao(x);
	}
}
void Xoa_NV_Theo_Que_Quan(NHANVIEN a[MAX], int& n, char queXoa[16])
{
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		if (_strcmpi(a[i].queQuan, queXoa) != 0)
		{
			a[temp++] = a[i];
		}
	}
	n = temp;
}