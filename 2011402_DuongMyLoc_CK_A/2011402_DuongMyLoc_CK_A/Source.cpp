#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <string.h>
#include <iomanip>

using namespace std;

#include "Header.h"
#include "Menu.h"

void ChayChuongTrinh();

int main()
{
    ChayChuongTrinh();
    return 0;
}


void ChayChuongTrinh()
{
    int soMenuDuocChon;
    int soMenu = 5;
    int n = 8;
    NHANVIEN nv[MAX] =
    {
        { "LD30432", "Nguyen_Vo", 12, 12, 1998, "Lam_Dong", 5500000.0},
        { "LD12045", "Tran_Van_Hoa", 1, 10, 1976, "Binh_Dinh", 9100000.0},
        { "LD13210", "Ly_Van_Hoa", 10, 8, 1990, "Ninh_Thuan", 9100000.0},
        { "LD24432", "Nguyen_Vo", 3, 6, 1990, "Phu_Yen", 6200000.0},
        { "LD15332", "Le_Thi_Lieu", 6, 3, 1988, "Binh_Dinh", 5500000.0},
        { "LD22032", "Van_Thi_Hoa", 9, 9, 1976, "Lam_Dong", 5500000.0},
        { "LD12052", "Vo_Hoang_Khanh", 5, 5, 1990, "Phu_Yen", 9100000.0},
        { "LD13452", "Nguyen_Vo", 22, 9, 1982, "Khanh_Hoa", 6200000.0}
    };

    do
    {
        soMenuDuocChon = ChonMenu(soMenu);
        XuLyMenu(soMenuDuocChon, nv, n);
    } while (soMenuDuocChon > 0);
}
