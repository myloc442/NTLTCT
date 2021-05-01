#define MAX 100

typedef char String[MAX];

void gets_s_NhapChuoi(String a, char kt);
void XuatChuoi(String a);
int strlen_TinhChieuDaiCuaChuoi(String a);
void strcat_s_Noi_ChuoiSau_VaoSau_ChuoiTruoc(String a, String b);
void strcpy_s_Chep_ChuoiSau_Qua_ChuoiTruoc(String a, String b);
int _strcmpi_SoSanhChuoi_KPB(String a, String b);
int strcmp_SoSanhChuoi_PB(String a, String b);
void Noi_ChuoiSau_VaoSau_ChuoiTruoc(String a, String b);
void Chep_ChuoiSau_Qua_ChuoiTruoc(String a, String b);
int SoSanhChuoi_KPB(String a, String b);
char Chuyen_KT_Hoa(char x);
int SoSanhChuoi_PB(String a, String b);

// Hàm nhập chuỗi:
/*
Cách 1: dùng gets_s(chuỗi, số ký tự tối đa - 1);
Cách 2: dùng cin.getline(chuỗi, số ký tự tối đa - 1);
*/
void gets_s_NhapChuoi(String a, char kt)
{
	// Xóa buffer
	/* 
	Cách 1: _flushall();
	Cách 2: cin.ignore(Số ký tự tối đa, '\n');
	*/
	cin.ignore(MAX, '\n');
	cout << "\nNhap chuoi: " << kt << " = ";
	gets_s(a, MAX);
}

// Hàm xuất:
void XuatChuoi(String a)
{
	cout << a;
}

// Tính chiều dài strlen();
int strlen_TinhChieuDaiCuaChuoi(String a)
{
	int l = strlen(a);
	return l;
}

// Nối chuỗi strcat_s();
void strcat_s_Noi_ChuoiSau_VaoSau_ChuoiTruoc(String a, String b)
{
	strcat_s(a, MAX, b);
}

// Chép chuỗi strcpy_s();
void strcpy_s_Chep_ChuoiSau_Qua_ChuoiTruoc(String a, String b)
{
	strcpy_s(a, MAX, b);
}

// Hàm so sánh không phân biệt hoa thường strcmpi();
int _strcmpi_SoSanhChuoi_KPB(String a, String b)
{
	return _strcmpi(a, b);
}

// Hàm sánh có phân biệt chuỗi hoa thường strcmp();
int strcmp_SoSanhChuoi_PB(String a, String b)
{
	return strcmp(a, b);
}

void Chep_ChuoiSau_Qua_ChuoiTruoc(String a, String b)
{
	int i;
	for (i = 0; (a[i] = b[i]) != NULL; i++);
}

void Noi_ChuoiSau_VaoSau_ChuoiTruoc(String a, String b)
{
	int i, l;
	l = strlen_TinhChieuDaiCuaChuoi(a);
	for (i = 0; b[i] != NULL; i++)
		a[l++] = b[i];
	a[l] = NULL;
}

int SoSanhChuoi_KPB(String a, String b)
{
	int i;
	for (i = 0; a[i] != NULL && b[i] != NULL; i++)
	{
		if (Chuyen_KT_Hoa(a[i]) < Chuyen_KT_Hoa(b[i]))
			return -1;
		if (Chuyen_KT_Hoa(a[i]) > Chuyen_KT_Hoa(b[i]))
			return 1;
	}
	if (a[i] != NULL)
		return 1;
	if (b[i] != NULL)
		return -1;
	return 0;
}

char Chuyen_KT_Hoa(char x)
{
	if ('a' <= x && x <= 'z')
		x = x - 32;
	return x;
}

int SoSanhChuoi_PB(String a, String b)
{
	int i;
	for (i = 0; a[i] != NULL && b[i] != NULL; i++)
	{
		if (a[i] < b[i])
			return -1;
		if (a[i] > b[i])
			return 1;
	}
	if (a[i] != NULL)
		return 1;
	if (b[i] != NULL)
		return -1;
	return 0;
}