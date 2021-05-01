#pragma once
#define MAX 100
#define NGANGDON '-'
#define NGANGDOI '='

typedef unsigned short int Byte;

struct NGAYTHANGNAMSINH
{
    Byte ngaySinh;
    Byte thangSinh;
    unsigned int namSinh;
};

struct NHANVIEN
{
    char maNhanVien[8];
    char hoTen[22];
    NGAYTHANGNAMSINH Date;
    char queQuan[16];
    unsigned int luong;
};

void Nhap_1NV(NHANVIEN& nv);
void NhapDanhSach_NV(NHANVIEN nv[MAX], int& n);
void Xuat_KeNgang_Doi();
void Xuat_KeNgang_Don();
void Xuat_TieuDe();
void Xuat_ThongBaoTong_NV(int tong);
void Xuat_1NV(NHANVIEN nv);
void XuatDanhSach_NV(NHANVIEN nv[MAX], int n);

void Nhap_1NV(NHANVIEN& nv)
{
    cout << "\nNhap ma so nhan vien: ";
    cin.ignore(MAX, '\n');
    cin.getline(nv.maNhanVien, 8);

    cout << "\nNhap ho va ten nhan vien: ";
    cin.getline(nv.hoTen, 22);

    cout << "\nNhap ngay sinh nhan vien: ";
    cin >> nv.Date.ngaySinh;

    cout << "\nNhap thang sinh nhan vien: ";
    cin >> nv.Date.thangSinh;

    cout << "\nNhap nam sinh nhan vien: ";
    cin >> nv.Date.namSinh;

    cout << "Nhap que quan: ";
    cin.ignore(MAX, '\n');
    cin.getline(nv.queQuan, 16);

    cout << "\nNhap luong: ";
    cin >> nv.luong;

}
void NhapDanhSach_NV(NHANVIEN nv[MAX], int& n)
{
    cout << "\nNhap so luong nhan vien: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        system("cls");
        cout << "\nNhap thong tin nhan vien thu " << i + 1 << " : \n";
        Nhap_1NV(nv[i]);
    }
}
void Xuat_KeNgang_Doi()
{
    cout << setiosflags(ios::left) << '|';
    for (int i = 0; i < 92; i++)
    {
        cout << '=';
    }
    cout << '|';

}
void Xuat_KeNgang_Don()
{
    cout << setiosflags(ios::left) << '|';
    for (int i = 0; i < 92; i++)
    {
        cout << '-';
    }
    cout << '|';

}
void Xuat_TieuDe()
{
    Xuat_KeNgang_Doi();
    cout << "\n" << setiosflags(ios::left) << '|'
        << setw(8) << "MaNV" << '|'
        << setw(22) << "Ho va Ten" << '|'
        << setw(10) << "Ngay sinh" << '|'
        << setw(10) << "Thang sinh" << '|'
        << setw(10) << "Nam sinh" << '|'
        << setw(16) << "Que quan" << '|'
        << setw(10) << "Luong" << '|' << "\n";
    Xuat_KeNgang_Doi();
}
void Xuat_ThongBaoTong_NV(int tong)
{
    cout << "\n" << setiosflags(ios::left) << '|'
        << setw(45) << "Tong nhan vien trong danh sach tren la: " << setw(47) << tong << '|' << "\n";
    Xuat_KeNgang_Doi();
}
void Xuat_1NV(NHANVIEN nv)
{
    cout << "\n" << setiosflags(ios::left) << '|'
        << setw(8) << nv.maNhanVien << '|'
        << setw(22) << nv.hoTen << '|'
        << setw(10) << nv.Date.ngaySinh << '|'
        << setw(10) << nv.Date.thangSinh << '|'
        << setw(10) << nv.Date.namSinh << '|'
        << setw(16) << nv.queQuan << '|'
        << setw(10) << nv.luong << '|' << "\n";
    Xuat_KeNgang_Don();

}
void XuatDanhSach_NV(NHANVIEN nv[MAX], int n)
{
    Xuat_TieuDe();
    for (int i = 0; i < n; i++)
    {
        Xuat_1NV(nv[i]);
    }
    Xuat_ThongBaoTong_NV(n);
}
void Xuat_TheoNam(NHANVIEN nv[MAX], int n)
{
    unsigned int nam;
    cout << "Nhap nam muon xuat: ", cin >> nam;

    int i;
    bool ktra = false;
    for (i = 0; i < n; i++)
    {
        if (nv[i].Date.namSinh == nam)
        {
            ktra = true;
            break;
        }
    }
    if (ktra == true)
    {
        Xuat_TieuDe();
        int dem = 0;
        for (i = 0; i < n; i++)
        {
            if (nv[i].Date.namSinh == nam)
            {
                Xuat_1NV(nv[i]);
                dem++;
            }
        }
        Xuat_ThongBaoTong_NV(dem);
    }
    else if (i == n)
    {
        cout << "Khong co nhan vien nao theo yeu cau!!!";
    }
}
void Xuat_LuongThap(NHANVIEN nv[MAX], int n)
{
    int min = nv[0].luong;  // tìm số lương thấp nhát
    for (int i = 1; i < n; i++)
    {
        if (nv[i].luong < min)
        {
            min = nv[i].luong;
        }
    }

    bool ktra = false;
    for (int a = 0; a < n; a++)
    {
        if (nv[a].luong == min)
        {
            ktra = true;
            break;
        }
    }
    if (ktra == true)
    {
        Xuat_TieuDe();
        int dem = 0;
        for (int j = 0; j < n; j++)
        {
            if (nv[j].luong == min)
            {
                Xuat_1NV(nv[j]);
                dem++;
            }
        }
        Xuat_ThongBaoTong_NV(dem);
    }
}
void Xoa_NV_TheoQueQuan(NHANVIEN NV[MAX], int& n)
{
    char quequan[16];
    cout << "Nhap que quan muon xoa: ";
    cin.ignore(MAX, '\n');
    cin.getline(quequan, 16);

    for (int i = 0; i < n; i++)
    {
        if (_strcmpi(NV[i].queQuan, quequan) == 0)
        {
            NV[i] = NV[i + 1];
            n--;
        }
    }
}

