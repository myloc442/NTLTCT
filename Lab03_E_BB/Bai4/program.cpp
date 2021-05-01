//4. Chỉ số khối cơ thể
//Viết chương trình cho phép người dùng nhập vào khối lượng và chiều cao của họ.Sau đó, đưa ra lời
//khuyên cho người dùng dựa vào chỉ số khối cơ thể - BMI(Xem lại bài tập 6 Lab 2 để biết cách tính).Biết
//rằng, chỉ số BMI được phân loại như sau :
//• Đói khát : BMI < 15
//	• Biếng ăn : BMI < 17.5
//	• Thiếu cân : BMI < 18.5
//	• Lý tưởng : 18.5 ≤ BMI < 25
//	• Thừa cân : 25 ≤ BMI < 30
//	• Béo phì : 30 ≤ BMI < 40
//	• Trẻ em bị béo phì : BMI ≥ 40
#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

double TinhChiSoBMI(double chieuCao, double khoiLuong);

int main()
{
	double chieuCao, khoiLuong;
	cout << "Hay nhap chieu cao cua ban: ";
	cin >> chieuCao;
	cout << "Hay nhap can nang cua ban ";
	cin >> khoiLuong;

	double BMI = TinhChiSoBMI(chieuCao, khoiLuong);
	return 0;
}
double TinhChiSoBMI(double chieuCao, double khoiLuong)
{
	double BMI = khoiLuong / pow(chieuCao, 2);
	if (BMI < 15)
	{
		cout << "Dua vao chi so BMI thi ban o muc doi khat.";
	}
	else if (BMI < 17.5)
	{
		cout << "Dua vao chi so BMI thi ban o muc bieng an.";
	}
	else if (18.5 <= BMI < 25)
	{
		cout << "Dua vao chi so BMI thi ban o muc ly tuong .";
	}
	else if (25 <= BMI < 30)
	{
		cout << "Dua vao chi so BMI thi ban o muc thua can .";
	}
	else if (30 <= BMI < 40)
	{
		cout << "Dua vao chi so BMI thi ban o muc beo phi .";
	}
	else if (BMI >= 40)
	{
		cout << "Dua vao chi so BMI thi ban o muc sieu beo phi .";
	}
	return BMI;
}

		
