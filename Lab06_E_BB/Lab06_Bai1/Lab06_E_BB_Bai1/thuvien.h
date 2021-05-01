#define SIZE 10
#define TAB '\t'

typedef float MaTranVuong[SIZE][SIZE];

void nhapMaTran(MaTranVuong a, int n);
void xuatMaTran(MaTranVuong a, int n);
void TongS(MaTranVuong a, int n);
void TongT(MaTranVuong a, int n);


void nhapMaTran(MaTranVuong a, int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			cout << "\na[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
}

void xuatMaTran(MaTranVuong a, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << TAB;
		}
		cout << "\n";
	}
}

void TongS(MaTranVuong a, int n) {
	float kq = 0, sum = 0;
	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {
			if (a[i][j] > 0) {
				kq = a[i][j];
				break;
			}
		}
		for (int j = 0; j < n; j++) {

			if (a[i][j] > 0 && a[i][j] < kq)

				kq = a[i][j];
		}
		sum = sum + kq;
		kq = 0;
	}
	cout << "\nTinh tong S voi S la tong so duong nho nhat cua hang la: " << sum << "\n";
}

void TongT(MaTranVuong a, int n) {
	float kq = 0, sum = 0;
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n; i++) {
			if (a[i][j] < 0) {
				kq = a[i][j];
				break;
			}
		}
		for (int i = 0; i < n; i++) {
			if (a[i][j] < 0 && a[i][j] > kq) {
				kq = a[i][j];
			}
		}
		sum = sum + kq;
		kq = 0;
	}
	cout << "\nTinh tong T voi T la tong so am lon nhat cua cot la: " << sum << "\n";
}