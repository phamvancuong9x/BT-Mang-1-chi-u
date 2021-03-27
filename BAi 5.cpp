//5. Cho dãy số nguyên. Viết chương trình kiểm tra mảng có tăng dần hay không?
#include<iostream>
#define MAX 100
using namespace std;
void nhap_sl(int& n);
void nhap_mang(int a[], int n);
bool mang_tang_dan(int a[], int n);
int main() {
	int n;
	int a[MAX];
	nhap_sl(n);
	nhap_mang(a, n);
	bool kt = mang_tang_dan(a, n);
	if (n>1&&kt == true) { cout << "mang nay la mang tang dan "; }
	else { cout << "Mang nay ko phai la mng tang dan "; }
	system("pause");
	return 0;
}
void nhap_sl(int& n) {

	do {
		cout << "Nhap so luong phan tu cua mang : ";
		cin >> n;
	} while (n < 1 || n>100);
}
void nhap_mang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu a[" << i << "] : ";
		cin >> a[i];
	}
}
bool mang_tang_dan(int a[], int n) {
	int min = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] <= min) {
			return false;
		}
		else { min = a[i]; }
	}return true;
}