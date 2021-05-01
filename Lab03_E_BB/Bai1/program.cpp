//Viết chương trình giải phương trình bậc nhất một ẩn có dạng ax + b = 0.
//Hướng dẫn :
//• Định nghĩa hàm void GiaiPTBacNhat(double a, double b).
//• Xét các trường hợp : TH1: a = b = 0, TH2 : a = 0, b≠0 và TH3 : a≠0.
#include<iostream>
#include<conio.h>

using namespace std;

void GiaiPhuongTrinhBacNhat(double a, double b);

int main()
{
	double a, b;
	cout << "Ban hay nhap gia tri a = ";
	cin >> a;
	cout << "Ban hay nhap gia tri b = ";
	cin >> b;

	GiaiPhuongTrinhBacNhat(a, b);
	return 0;
}
void GiaiPhuongTrinhBacNhat(double a, double b)
{
	double x;
	if (a == 0) // TH pt có a = 0 
	{
		if (b == 0) // b = 0
		{
			cout << "Phuong trinh vo so nghiem! ";
		}
		else // b # 0
		{
			cout << "Phuong trinh vo nghiem!";
		}

	}
	else // TH pt a # 0
	{
		x = -b / a;
		cout << "Phuong trinh bac nhat co nghiem la " << x << endl;
	}
}
