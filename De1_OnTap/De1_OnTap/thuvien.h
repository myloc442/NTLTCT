#define MAX 100

typedef char String[MAX];
typedef unsigned short int Byte;

struct NGAYTHANGNAMSINH
{
	Byte ngaySinh;
	Byte thangSinh;
	Byte namSinh;
};
struct NHANVIEN
{
	char phong[6];
	char maNV[8];
	char ho_Lot[15];
	char ten[8];
	NGAYTHANGNAMSINH date;
	char queQuan[15];
	unsigned long luong;
};
int TaoDanhSachNhanVien(NHANVIEN a[], int& n, char* filename)
{
	ifstream Nhap(filename);
	if (!Nhap)
		return 0;
	else
	{
		n = 0;
		while (!Nhap.eof())
		{
			Nhap >> a[n].phong;
			Nhap >> a[n].maNV;
			Nhap >> a[n].ho_Lot;
			Nhap >> a[n].ten;
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
}
void Ke_Duong(char kyTu)
{
	cout << setiosflags(ios::left) << '|';
	for (int i = 0; i < 103; i++)
	{
		cout << kyTu;
	}
	cout << '|';
}
void Tieu_De()
{
	Ke_Duong('=');
	cout << '\n' << setiosflags(ios::left) << '|'
		<< setw(6) << "Phong" << '|'
		<< setw(8) << "MaNV" << '|'
		<< setw(15) << "Ho va lot" << '|'
		<< setw(10) << "Ten" << '|'
		<< setw(10) << "Ngay sinh" << '|'
		<< setw(10) << "Thang sinh" << '|'
		<< setw(10) << "Nam sinh" << '|'
		<< setw(16) << "Que quan" << '|'
		<< setw(10) << "Luong" << '|' << "\n";
	Ke_Duong('=');
}
void Thong_Bao(int tong)
{
	cout << '\n' << setiosflags(ios::left) << '|'
		<< setw(50) << "TONG NHAN VIEN VIEN TRONG DANH SACH LA : " << setw(53) << tong << '|' << "\n";
	Ke_Duong('=');
}
void Xuat_1_NV(NHANVIEN a)
{
	cout << '\n' << setiosflags(ios::left) << '|'
		<< setw(6) << a.phong << '|'
		<< setw(8) << a.maNV << '|'
		<< setw(15) << a.ho_Lot << '|'
		<< setw(10) << a.ten << '|'
		<< setw(10) << a.date.ngaySinh << '|'
		<< setw(10) << a.date.thangSinh << '|'
		<< setw(10) << a.date.namSinh << '|'
		<< setw(16) << a.queQuan << '|'
		<< setw(10) << a.luong << '|' << "\n";
	Ke_Duong('_');
}
void Xuat_DanhSach_NV(NHANVIEN a[MAX], int n)
{
	Tieu_De();
	for (int i = 0; i < n; i++)
	{
		Xuat_1_NV(a[i]);
	}
	Thong_Bao(n);
}
void Tim_Theo_Ten(NHANVIEN a[MAX], int& n, char FindName[8])
{
	int VT[MAX];
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		if (_strcmpi(a[i].ten, FindName) == 0)
		{
			VT[x] = i;
			x++;
		}
	}
	if (x == 0)
	{
		cout << "\nKhong tim thay nhan vien nao co ten " << FindName << " trong danh sach\n";
	}
	else
	{
		cout << "\nTim thay " << x << " nhan vien co ten " << FindName << " trong danh sach : \n";
		Tieu_De();
		for (int i = 0; i < x; i++)
		{
			Xuat_1_NV(a[VT[i]]);
		}
		Thong_Bao(x);
	}
}
void Tim_Theo_MaSo(NHANVIEN a[], int n, char maSo[8])
{
	int VT[MAX];
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		if (_strcmpi(a[i].maNV, maSo) == 0)
		{
			VT[x++] = i;
		}
	}
	if (x == 0)
	{
		cout << "\nKhong tim thay nhan vien nao co " << maSo << " trong danh sach\n";
	}
	else
	{
		cout << "\nTim thay " << x << " nhan vien co " << maSo << " trong danh sach\n";
		Tieu_De();
		for (int i = 0; i < x; i++)
		{
			Xuat_1_NV(a[VT[i]]);
		}
		Thong_Bao(n);
	}
}
void Xuat_DS_NamChoTruoc(NHANVIEN a[], int n, int namNhap)
{
	int VT[MAX];
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i].date.namSinh == namNhap)
		{
			VT[x++] = i;
		}
	}
	if (x == 0)
	{
		cout << "\nBan nhap " << namNhap << " sai roi, hay nhap lai\n";
	}
	else
	{
		cout << "\nDANH SACH NHAN VIEN CO NAM SINH " << namNhap << '\n';
		Tieu_De();
		for (int i = 0; i < x; i++)
		{
			Xuat_1_NV(a[VT[i]]);
		}
		Thong_Bao(x);
	}
}
int Tim_Luong_Cao_Nhat(NHANVIEN a[], int n)
{
	int max = a[0].luong;
	for (int i = 0; i < n; i++)
	{
		if (max < a[i].luong)
		{
			max = a[i].luong;
		}
	}
	return max;
}
void Xuat_DS_Theo_Luong_Cao_Nhat(NHANVIEN a[], int n)
{
	int max = Tim_Luong_Cao_Nhat(a, n);
	int VT[MAX];
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i].luong == max)
		{
			VT[x++] = i;
		}
	}
	if (x != 0)
	{
		cout << "\nDANH SACH NHAN VIEN CO MUC LUONG CAO NHAT\n";
		Tieu_De();
		for (int i = 0; i < x; i++)
		{
			Xuat_1_NV(a[VT[i]]);
		}
		Thong_Bao(x);
	}
}
void HoanVi(NHANVIEN& x, NHANVIEN& y)
{
	NHANVIEN tam;
	tam = x;
	x = y;
	y = tam;
}
void SapXep_TangDan_TheoLuong(NHANVIEN a[], int n)
{
	for (int i = 0; i < (n - 1); i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i].luong > a[j].luong)
			{
				HoanVi(a[i], a[j]);
			}
		}
	}
}
void SapXep_GiamDan_TheoMaNV(NHANVIEN a[], int n)
{
	for (int i = 0; i < (n - 1); i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (_strcmpi(a[i].maNV, a[j].maNV) < 0)
			{
				HoanVi(a[i], a[j]);
			}
		}
	}
}
void SapXep_Theo_YC(NHANVIEN a[], int n)
{
	for (int i = 0; i < (n - 1); i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (_strcmpi(a[i].ten, a[j].ten) != 0)
			{
				if (_strcmpi(a[i].ten, a[j].ten) > 0)
				{
					HoanVi(a[i], a[j]);
				}
			}
			else if (_strcmpi(a[i].ten, a[j].ten) == 0)
			{
				if (_strcmpi(a[i].ho_Lot, a[j].ho_Lot) != 0)
				{
					if (_strcmpi(a[i].ho_Lot, a[j].ho_Lot) > 0)
					{
						HoanVi(a[i], a[j]);
					}
				}
				else if (_strcmpi(a[i].ho_Lot, a[j].ho_Lot) == 0)
				{
					if (a[i].luong > a[j].luong)
					{
						HoanVi(a[i], a[j]);
					}
				}
			}

		}
	}
}
int Tong_Luong(NHANVIEN a[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i].luong;
	}
	return sum;
}
void LietKe_NhanVien_CoLuong(NHANVIEN a[], int n)
{
	int VT[MAX];
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i].luong >= 8000000)
		{
			VT[x++] = i;
		}
	}
	if (x != 0)
	{
		cout << "\nDANH SACH NHAN VIEN CO MUC LUONG >= 8000000\n";
		Tieu_De();
		for (int i = 0; i < x; i++)
		{
			Xuat_1_NV(a[VT[i]]);
		}
		Thong_Bao(x);
	}
}

void Xoa_NhanVien_TheoQueQuan(NHANVIEN a[], int& n, char queQuan[15])
{
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		if (_strcmpi(a[i].queQuan, queQuan) != 0)
		{
			a[temp++] = a[i];
		}
	}
	n = temp;
}
void Xoa_NhaVien_NamSinhChoTruoc(NHANVIEN a[], int& n, unsigned int namxoa)
{

	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i].date.namSinh != namxoa)
		{
			a[temp++] = a[i];
		}
	}
	n = temp;
}
void XuatNhanVien_1_Phong(NHANVIEN a[MAX], int n, char phong[])
{
	int i;
	Tieu_De();
	for (i = 0; i < n; i++)
	{
		if (_strcmpi(a[i].phong, phong) == 0)
			Xuat_1_NV(a[i]);
	}
	cout << '\n';
}

void SapTangTheoLop(NHANVIEN a[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (_strcmpi(a[i].phong, a[j].phong) > 0)
				HoanVi(a[i], a[j]);
		}
	}
}
void Xuat_NhanVien_TheoPhong(NHANVIEN a[MAX], int n)
{
	/*String phong[MAX];
	int m = 1;
	strcpy_s(phong[0], a[0].phong);
	int dau;

	for (int i = 1; i < n; i++)
	{
		dau = 1;
		for (int j = 0; j < m; j++)
			if (_strcmpi(a[i].phong, phong[j]) == 0)
			{
				dau = 0;
				break;
			}

		if (dau)
			strcpy_s(phong[m++], a[i].phong);
	}


	for (int j = 0; j < m; j++)
	{
		cout << '\n';
		XuatNhanVien_1_Phong(a, n, phong[j]);
	}*/

	SapTangTheoLop(a, n);

	String phong[MAX];

	int h = 0;
	int count = 1;
	strcpy_s(phong[0], a[0].phong);

	for (int i = 0; i < n; i++)
	{
		if (_strcmpi(a[i].phong, phong[h]) > 0)
		{
			h++;
			count++;
			strcpy_s(phong[h], a[i].phong);
		}
	}
	for (int b = 0; b < count; b++)
	{
		cout << "\n\n\t\t\t\t\tDANH SACH NHAN VIEN PHONG " << phong[b] << "\n";
		Tieu_De();
		int dem = 0;
		for (int i = 0; i < n; i++)
		{
			if (_strcmpi(a[i].phong, phong[b]) == 0)
			{
				Xuat_1_NV(a[i]);
				dem++;
			}
		}
		Thong_Bao(dem);
	}
}