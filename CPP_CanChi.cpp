#include <iostream>
using namespace std;

int main() {
	string can[10] = { "Canh", "Tan", "Nham", "Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ky" };
	string chi[12] = { "Than", "Dau", "Tuat", "Hoi", "Ty", "Suu", "Dan", "Mao", "Thin", "Ti", "Ngo", "Mui" };
	int nam;
	cout << "Nhap nam: "; cin >> nam;
	string cn = can[nam % 10];
	string ci = chi[nam % 12];
	cout << cn << " " << ci;
	cout << endl;
	int x, y;
	cout << "Nhap nam bat dau: "; cin >> x;
	cout << "Nhap nam ket thuc: "; cin >> y;
	for (int i = x; i <= y; i++) {
		string nc = can[i % 10];
		string ic = chi[i % 12];
		cout << i << " " << nc << " " << ic << "\n";
	} return 0;
}