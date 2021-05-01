// Định nghĩa hằng:
#define MAX 100
#define CACH ' '

// Khai báo nguyên mẫu:
char Chuyen_KT_Thuong(char x);
char Chuyen_KT_Thuong(char x);
char Chuyen_KT_Hoa(char x);
void ChenCuoi(char b[MAX], char kt);
void NanTen(char a[MAX]);

// Functions:

// Nếu là ký tự THƯỜNG thì giữ nguyên, nếu là HOA thì chuyển sang THƯỜNG
char Chuyen_KT_Thuong(char x)
{
	if ('A' <= x && x <= 'Z')
		x = x + 32;
	return x;
}


//Nếu là ký tự HOA thì giữ nguyên, nếu là thường thì chuyển sang HOA
char Chuyen_KT_Hoa(char x)
{
	if ('a' <= x && x <= 'z')
		x = x - 32;
	return x;
}

// Chèn 1 ký tự vào cuối một xâu ký tự
void ChenCuoi(char b[MAX], char kt)
{
	int i;
	for (i = 0; b[i] != NULL; i++);
	b[i++] = kt;
	b[i] = NULL;
}

void NanTen(char a[MAX])
{
	int i;
	char b[MAX]; // Xâu trung gian
	b[0] = NULL;
	i = 0;
	//Khu dau cach
	while (a[i] == CACH)
		i++; //a[i] == NULL hay la dau 1 tu
	while (a[i] != NULL) //xu ly tu
	{
		ChenCuoi(b, Chuyen_KT_Hoa(a[i])); // xu ly dau tu: a[i]
		i++; //xet ky tu ke tiep : than tu, CACH hay ket thuc xau
		while (a[i] != CACH && a[i] != NULL) //ky tu trong than tu
		{
			ChenCuoi(b, Chuyen_KT_Thuong(a[i])); // xu ly than tu
			i++;
		} //a[i] == CACH hay a[i] == NULL
		//Da xu ly xong 1 tu
		//Chua ket thuc xau thi tiep tuc xu ly tu tiep theo
		//Tiep tuc vuot dau cach
		while (a[i] == CACH)
			i++; //a[i] == NULL hay la dau 1 tu
		if (a[i] != NULL) //tu vua xu ly chua phai la tu cuoi
			ChenCuoi(b, CACH); // chen cac vao sau b
	}
	strcpy_s(a, MAX, b); 
}