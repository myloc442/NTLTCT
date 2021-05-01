#define	SIZE 10	
#define TAB '\t'

typedef double MaTranVuong[SIZE][SIZE];

void NhapMaTranBangTay(MaTranVuong a, int n);
double fRand(double fMin, double fMax);
void NhapMaTran_TD(MaTranVuong a, int n);
void XuatMaTran(MaTranVuong a, int n);
int DoiXung(MaTranVuong a, int n);
void TamGiacTren(MaTranVuong a, int n);
void TamGiacDuoi(MaTranVuong a, int n);
int Cheo(MaTranVuong a, int n);
int DonVi(MaTranVuong a, int n);

void NhapMaTranBangTay(MaTranVuong a, int n) {
	cout << "Nhap ma tran vuong:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}

}
double fRand(double fMin, double fMax) {
	double f = (double)rand() / RAND_MAX;
	return fMin + f * (fMax - fMin);
}
void NhapMaTran_TD(MaTranVuong a, int n) {
	srand((unsigned)time(NULL));
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			a[i][j] = fRand(-10.0, 10.0);
}
void XuatMaTran(MaTranVuong a, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(10) << setprecision(3) << a[i][j];
		}
		cout << "\n";
	}
}
int DoiXung(MaTranVuong a, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] != a[j][i]) {
				return 0;
			}
		}
	}
	return 1;
}
void TamGiacTren(MaTranVuong a, int n) {
	cout << "\nDay la ma tran tam giac tren: \n";
	for (int i = 0; i < n; i++) {
		cout << "\n";
		for (int j = 0; j < n; j++) {
			if (i < j) {
				cout << a[i][j] << '\t';
			}

		}
	}
}
void TamGiacDuoi(MaTranVuong a, int n) {
	cout << "\nDay la ma tran tam giac duoi: \n";
	for (int i = 0; i < n; i++) {
		cout << "\n";
		for (int j = 0; j < n; j++) {
			if (i > j) {
				cout << a[i][j] << '\t';
			}

		}
	}
}
int Cheo(MaTranVuong a, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i != j && a[i][j] != 0) {
				return 0;
			}
		}
	}
	return 1;
}
int DonVi(MaTranVuong a, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i][j] != 0 || a[j][i] != 0) {
				return 0;
			}
		}
	}
	return 1;
}