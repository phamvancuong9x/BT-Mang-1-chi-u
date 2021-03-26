//2. Cho dãy số nguyên. Viết chương trình tìm giá trị lẻ cuối cùng trong mảng.
#include<iostream>
#define MAX 100
using namespace std;
void nhap_so_luong(int &n);
void nhap_mang(int a[], int n);
void tim_kiem(int a[], int n);
int main() {
	int n;
	int a[MAX];
	nhap_so_luong(n);
	nhap_mang(a, n);
	tim_kiem(a, n);
	system("pause");
	return 0;
}
void nhap_so_luong(int &n) {
	do {
		cout << "nhap so luong phan tu cua mang :";
		cin >> n;
	} while (n < 1 || n>100);
}
void nhap_mang(int a[], int n) {
	cout << "\t\t===========Nhap Mang=============\n";
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "] : ";
		cin >> a[i];
	}
}
void tim_kiem(int a[], int n) {
	cout << "\t\t=========Gia tri le cuoi mang===========\n";
	for (int i = --n; i >=0; i--) {
		if (a[i] % 2 != 0) {
			cout << "a[" << i << "] : " << a[i] << endl;
			return;
		}
	}
}