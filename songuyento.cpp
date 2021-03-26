//1. Viết chương trình xuất ra các phần tử là số nguyên tố trong mảng
#include<iostream>
#define MAX 100
using namespace std;
void nhap_mang(int a[], int n);
bool so_nguyen_to(int n);
int main()
{
	int n;
	int a[MAX];
	do {
		cout << "Nhap so phan tu cua mang n : ";
		cin >> n;
	} while (n <= 0 || n > 100);
	nhap_mang(a,n);
	cout << "\t\t=========gia tri nguyen to cua mang======\n ";
	for (int i = 0; i < n; i++) {
		if (so_nguyen_to(a[i]) == true) { cout <<"a["<<i<<"] :"<< a[i]<<endl; }
	}
	system("pause");
	return 0;
}
void nhap_mang(int a[], int n) {
	cout << "\t\t============Nhap Mang==============\n";
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu a[" << i<<"] : ";
		cin >> a[i];
	}
}
bool so_nguyen_to(int m) {
	for (int i = 0; i < m; i++) {
		if (m <= 1) { return false; }
		for (int i = 2; i <= sqrt(m); i++) {
			if (m % i == 0) { return false; }
		}return true;
	}
}