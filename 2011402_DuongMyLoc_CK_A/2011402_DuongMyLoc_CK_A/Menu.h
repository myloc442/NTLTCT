#pragma once
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int soMenuDuocChon, NHANVIEN nv[MAX], int& n);

void XuatMenu()
{
    cout << "\n\n<============ CHON 1 TRONG CAC TINH NANG SAU ===========>";
    cout << "\n0. Thoat chuong trinh!";
    cout << "\n1. Tao danh sach nhan vien";
    cout << "\n2. Xem danh sach nhan vien";
    cout << "\n3. Xuat danh sach cac nhan vien co nam cho truoc";
    cout << "\n4. Xuat danh sach cac nhan vien co luong thap nhat";
    cout << "\n5. Xoa cac nhan vien co que quan cho truoc khoi danh sach nhan vien";
    cout << "\n<===============================================>";
}
int ChonMenu(int soMenu)
{
    int soMenuDuocChon;
    for (;;)
    {
        system("CLS");
        XuatMenu();
        cout << "\nNhap 1 trong cac chuc nang tren: ", cin >> soMenuDuocChon;
        while (cin.fail())  // nhập lại nếu nhập sai kiểu dữ liệu
        {
            cin.clear();
            cin.ignore(32767, '\n');
            system("CLS");
            XuatMenu();
            cout << "\nNhap 1 trong cac chuc nang tren: ", cin >> soMenuDuocChon;
        }
        if ((soMenuDuocChon >= 0 && soMenuDuocChon <= soMenu))
        {
            break;
        }
    }
    return soMenuDuocChon;
}
void XuLyMenu(int soMenuDuocChon, NHANVIEN nv[MAX], int& n)
{
    switch (soMenuDuocChon)
    {
    case 0:
    {
        cout << "\n0.===>Thoat chuong trinh!";
        break;
    }
    case 1:
    {
        cout << "\n1. Tao danh sach nhan vien\n";
        NhapDanhSach_NV(nv, n);
        break;
    }
    case 2:
    {
        cout << "\n2. Xem danh sach nhan vien\n";
        XuatDanhSach_NV(nv, n);
        break;
    }
    case 3:
    {
        cout << "\n3. Xuat danh sach cac nhan vien co nam cho truoc\n";
        Xuat_TheoNam(nv, n);
        break;
    }
    case 4:
    {
        cout << "\n4. Xuat danh sach cac nhan vien co luong thap nhat\n";
        Xuat_LuongThap(nv, n);
        break;
    }
    case 5:
    {
        cout << "\n5. Xoa cac nhan vien co que quan cho truoc khoi danh sach nhan vien\n";
        Xoa_NV_TheoQueQuan(nv, n);
        XuatDanhSach_NV(nv, n);
        break;
    }
    }
    _getch();
}
