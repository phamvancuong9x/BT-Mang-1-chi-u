//4. Cho dãy số nguyên. Viết chương trình kiểm tra mảng có toàn dương hay không?
#include<iostream>
#define MAX 100
using namespace std;
void nhap_sl(int&n);
void nhap_mang(int a[], int n);
bool mang_toan_duong(int a[], int n);
int main()
{
	int n;
	int a[MAX];
	nhap_sl(n);
	nhap_mang(a, n);
	if (mang_toan_duong(a, n) == true) {
		cout << "mang nay la mang toan duong\n";
	}
	else {
		cout << "mang  nay khong phai mang toan duong \n";
		
	}
	system("pause");
	return 0;
}
void nhap_sl(int&n) {
	do {
		cout << "Nhap so luong phan tu cua mang : ";
		cin >> n;
	} while (n < 1 || n>100);
}
void nhap_mang(int a[], int n) {
	cout << "\t\t=============Nhap mang=========\n";
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "] : ";
		cin >> a[i];
	}
}
	bool mang_toan_duong(int a[], int n) {
		for (int i = 0; i < n; i++) {
			if (a[i] <= 0) {
				return false;
			}
		}return true;
	}