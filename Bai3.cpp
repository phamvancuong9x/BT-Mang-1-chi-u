//3. Cho dãy số nguyên. Viết chương trình tìm đoạn [a, b] sao cho đoạn này chứa mọi giá trị trong mảng.
#include<iostream>
#define MAX 100
using namespace std;
void nhap_sl(int& n);
void nhap_mang(int a[], int n);
int min_mang(int a[], int n);
int max_mang(int a[], int n);
int main()
{
	int n;
	int a[MAX];
	nhap_sl(n);
	nhap_mang(a, n);
	cout << "Doan chua moi gia tri trong mang la : [" << min_mang(a, n) << " , " << max_mang(a, n) << "]" << endl;
	system("pause");
	return 0;
}
void nhap_sl(int& n)
{
	do {
		cout << "Nhap so luong phan tu cua mang : ";
		cin >> n;
	} while (n < 1 || n>100);
}
void nhap_mang(int a[], int n) {
	cout << "\t\t===========Nhap Mang===========\n";
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "] : ";
		cin >> a[i];
	}
}
int min_mang(int a[], int n) {
	int min = INT32_MAX;
	for (int i = 0; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	return min;
}
int max_mang(int a[], int n) {
	int max = INT32_MIN;
	for (int i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	return max;
}