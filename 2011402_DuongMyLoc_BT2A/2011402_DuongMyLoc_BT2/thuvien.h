#define TAB '\t'
#define SIZE 100

typedef int DaySo[SIZE];

void NhapMangTD(DaySo a, int& n);
void XuatMang(DaySo a, int n);
int TinhTong(DaySo a, int n);
int TimMin(DaySo a, int n);
int ViTriCuoiCung_Min(DaySo a, int n);
int TimXTrongDoan(DaySo a, int x, int l, int r);
void SapXep(DaySo a, int n);

void NhapMangTD(DaySo a, int& n) {
	do {
		cout << "\nNhap vao so phan tu cua mang: ";
		cin >> n;
	} while (0 > n);
	srand((unsigned)time(0));

	for (int i = 0; i < n; i++) {
		a[i] = rand() % (5 - -5 + 1) + -5; // Giới hạn sinh số ngẫu nhiên trong phạm vi: CT rand() % (max - min + 1) + min
	}
}
void XuatMang(DaySo a, int n) {
	cout << "Day so cua ban la: \n";
	for (int i = 0; i < n; i++) {
		cout << a[i] << TAB;
	}
	cout << '\n';
}
int TinhTong(DaySo a, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}
int TimMin(DaySo a, int n) {
	int min = a[0];
	for (int i = 1; i < n; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	}
	return min;
}
int ViTriCuoiCung_Min(DaySo a, int n) {
	int min = TimMin(a, n); // Dùng hàm tìm Min để tìm ra số nhỏ nhất trong dãy số, sau đó gán giá trị.
	int vtmin = 0;
	for (int i = 0; i < n; i++) {
		if (min == a[i]) { // Nếu min có trong a[i]
			vtmin = i + 1; // thực thi biến đếm vtmin = i + 1 
		}
	}
	return vtmin;
}
int TimXTrongDoan(DaySo a, int x, int l, int r) {
	int kq = 0;
	for (int i = l; i <= r; i++)
	{
		if (a[i] == x)
		{
			kq = 1;
			break;
		}
	}
	return kq;
}
void SapXep(DaySo a, int n) {
	int dk, tg;
	cout << "Sap xep theo thu tu am duong tang dan va so 0 nam cuoi: \n";
	// Sắp xếp Các số khác 0 ở đầu dãy và tăng dần - Các số 0 nằm ở cuối dãy.
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			dk = (a[i] < 0 && a[j] < 0 && a[i] > a[j])
				|| (a[i] == 0 && a[j] < 0)
				|| (a[i] > 0 && a[j] < 0)
				|| (a[i] == 0 && a[j] > 0)
				|| (a[i] > 0 && a[j] > 0 && a[i] > a[j]);
			if (dk) { //Hoán vị nếu xét điều kiện đúng thực thì hoán vì bằng biến tg
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
	// Loại bỏ các số bị trùng:
	for (int i = 0; i < n; i++) {
		if (TimXTrongDoan(a, a[i], 0, i - 1) == 0) {
			cout << a[i] << TAB;
		}
	}
}