#define MAX 100
#define NGANGDON '_'
#define NGANGDOI '='

typedef unsigned short int Byte;

struct NgayThangNamSinh
{
    Byte ngaysinh;
    Byte thangsinh;
    unsigned int namsinh;
};

struct HocVien
{
    char maHV[8];
    char hoten[22];
    NgayThangNamSinh Date;
    char quequan[16];
    double diem;
};

int TaoDanhSachHocVien(HocVien hv[MAX], int& n, char filename[MAX])
{
    ifstream Nhap(filename);

    if (!Nhap)
        return 0;
    else
    {
        n = 0;
        while (!Nhap.eof())
        {
            Nhap >> hv[n].maHV;
            Nhap >> hv[n].hoten;
            Nhap >> hv[n].Date.ngaysinh;
            Nhap >> hv[n].Date.thangsinh;
            Nhap >> hv[n].Date.namsinh;
            Nhap >> hv[n].quequan;
            Nhap >> hv[n].diem;
            n++;
        }
        Nhap.close();
        return 1;
    }

}
void Xuat_KeNgang(char kytu)
{
    cout << setiosflags(ios::left) << '|';
    for (int i = 0; i < 92; i++)
    {
        cout << kytu;
    }
    cout << '|';

}
void Xuat_TieuDe()
{
    Xuat_KeNgang(NGANGDOI);
    cout << "\n" << setiosflags(ios::left) << '|'
        << setw(8) << "Ma HV" << '|'
        << setw(22) << "Ho va Ten" << '|'
        << setw(10) << "Ngay sinh" << '|'
        << setw(10) << "Thang sinh" << '|'
        << setw(10) << "Nam sinh" << '|'
        << setw(16) << "Que quan" << '|'
        << setw(10) << "Diem" << '|' << "\n";
    Xuat_KeNgang(NGANGDOI);
}
void Xuat_ThongBaoTong_NV(int tong)
{
    cout << "\n" << setiosflags(ios::left) << '|'
        << setw(45) << "Tong hoc vien trong danh sach tren la: " << setw(47) << tong << '|' << "\n";
    Xuat_KeNgang(NGANGDOI);
}
void Xuat_1_HV(HocVien hv)
{
    cout << "\n" << setiosflags(ios::left) << '|'
        << setw(8) << hv.maHV << '|'
        << setw(22) << hv.hoten << '|'
        << setw(10) << hv.Date.ngaysinh << '|'
        << setw(10) << hv.Date.thangsinh << '|'
        << setw(10) << hv.Date.namsinh << '|'
        << setw(16) << hv.quequan << '|'
        << setw(10) << hv.diem << '|' << "\n";
    Xuat_KeNgang(NGANGDON);
}
void Xuat_DanhSach_HV(HocVien hv[MAX], int n)
{
    Xuat_TieuDe();
    for (int i = 0; i < n; i++)
    {
        Xuat_1_HV(hv[i]);
    }
    Xuat_ThongBaoTong_NV(n);
}
double TimDiemCaoNhat(HocVien hv[MAX], int n)
{
    // Tim diem cao nhat
    double max = hv[0].diem;
    for (int i = 0; i < n; i++)
    {
        if (hv[i].diem > max)
        {
            max = hv[i].diem;
        }
    }
    return max;
}
void Xuat_DanhSach_HV_DiemCaoNhat(HocVien hv[MAX], int n)
{
    double max = TimDiemCaoNhat(hv, n);
    bool check = false;
    for (int a = 0; a < n; a++)
    {
        if (hv[a].diem == max)
        {
            check = true;
            break;
        }
    }
    if (check == true)
    {
        Xuat_TieuDe();
        int dem = 0;
        for (int j = 0; j < n; j++)
        {
            if (hv[j].diem == max)
            {
                Xuat_1_HV(hv[j]);
                dem++;
            }
        }
        Xuat_ThongBaoTong_NV(dem);
    }
}
void Xoa_HocVien(HocVien hv[MAX], int& n, int viTriXoa)
{
    for (int i = viTriXoa + 1; i < n; i++)
    {
        hv[i - 1] = hv[i];
    }
    n--;
}
void Xoa_HocVien_NamSinhChoTruoc(HocVien hv[MAX], int &n, unsigned int namxoa)
{
    
    /*for (int i = 0; i < n; i++)
    {
        if (hv[i].Date.namsinh == namxoa)
        {
            Xoa_HocVien(hv, n, i);
            i--;
        }
    }*/
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (hv[i].Date.namsinh != namxoa)
        {
            hv[temp++] = hv[i];
        }
    }
    n = temp;
}
void HoanVi(HocVien& a , HocVien& b)
{
    HocVien trungGian;
    trungGian = a;
    a = b;
    b = trungGian;
}
void SapXep_Tang_Ten(HocVien hv[MAX], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (_strcmpi(hv[i].hoten, hv[j].hoten) > 0)
            {
                HoanVi(hv[i], hv[j]);
            }
        }
}
int XuatDuLieu(HocVien hv[MAX], int n, char filename[MAX])
{
    ofstream Xuat(filename);

    if (!Xuat)
        return 0;
    else
    {
        // xuat ke ngang doi
        Xuat << setiosflags(ios::left) << '|';
        for (int i = 0; i < 92; i++)
        {
            Xuat << '=';
        }
        Xuat << '|';

        // xuat tieu de
        Xuat << "\n" << setiosflags(ios::left) << '|'
            << setw(8) << "Ma HV" << '|'
            << setw(22) << "Ho va Ten" << '|'
            << setw(10) << "Ngay sinh" << '|'
            << setw(10) << "Thang sinh" << '|'
            << setw(10) << "Nam sinh" << '|'
            << setw(16) << "Que quan" << '|'
            << setw(10) << "Diem" << '|' << "\n";

        // xuat ke ngang doi
        Xuat << setiosflags(ios::left) << '|';
        for (int i = 0; i < 92; i++)
        {
            Xuat << '=';
        }
        Xuat << '|';

        int i;
        // xuat danh sach
        for (i = 0; i < n; i++)
        {
            Xuat << "\n" << setiosflags(ios::left) << '|'
                << setw(8) << hv[i].maHV << '|'
                << setw(22) << hv[i].hoten << '|'
                << setw(10) << hv[i].Date.ngaysinh << '|'
                << setw(10) << hv[i].Date.thangsinh << '|'
                << setw(10) << hv[i].Date.namsinh << '|'
                << setw(16) << hv[i].quequan << '|'
                << setw(10) << hv[i].diem << '|' << "\n";

            // xuat ke ngang don
            Xuat << setiosflags(ios::left) << '|';
            for (int i = 0; i < 92; i++)
            {
                Xuat << '-';
            }
            Xuat << '|';
        }

        // xuat thong bao
        Xuat << "\n" << setiosflags(ios::left) << '|'
            << setw(45) << "Tong hoc vien trong danh sach tren la: " << setw(47) << i << '|' << "\n";

        // xuat ke ngang doi
        Xuat << setiosflags(ios::left) << '|';
        for (int i = 0; i < 92; i++)
        {
            Xuat << '=';
        }
        Xuat << '|';
        
        Xuat.close();
        return 1;
    }

}
