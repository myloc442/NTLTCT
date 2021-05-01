//Viết chương trình cho phép người dùng nhập vào hai số thực x, y khác 0 và ký tự k(thuộc 1 trong 4 ký tự :
//+, -, *, / ).Tùy thuộc vào ký tự k, hãy xuất ra tổng, hiệu, tích, thương của x và y.
//Hướng dẫn :
//• Định nghĩa hàm double TinhBieuThuc(double x, double y, char k).
//• Dùng lệnh switch để kiểm tra ký tự k.
//• Nếu k = ‘ + ’ thì return x + y.Tương tự cho các trường hợp còn lại.
//• Nếu k ∉{ +, -,*, / } thì return 0.
#include<iostream>
#include<conio.h>

using namespace std;

double TinhBieuThuc(double x, double y, char pheptoan);

int main()
{
	double x, y;
	char k;

	cout << "Ban hay nhap gia tri cua x: ";
	cin >> x;
	cout << "Ban hay nhap gia tri cua y: ";
	cin >> y;
	cout << "Ban hay nhap ky tu cua k: ";
	cin >> k;

	double kq = TinhBieuThuc(x, y, k);
	cout << endl << "Ket qua cua phep toan: " << " x " << k << " y " << " = " << kq;
	return 0;
}

double TinhBieuThuc(double x, double y, char phepToan)
{
	switch (phepToan)
	{
	case '+':
		return x + y;
		break;
	case '-':
		return x - y;
		break;
	case '*':
		return x * y;
		break;
	case '/':
		return x / y;
		break;
	default:
		cout << "Ban da nhap sai cu phap! ";
		return 0;
		break;
	}
}