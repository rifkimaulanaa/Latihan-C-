#include <iostream>

using namespace std;

int main() {

float a, b, c;
cout << "Masukkan koefisien x^2: ";
cin >> a;
cout << "Masukkan koefisien x: ";
cin >> b;
cout << "Masukkan konstanta: ";
cin >> c;

  int d = b * b - 4 * a * c;


cout << "Diskriminan: " << d << endl;


if (d > 0) {
    cout << "Akar real dan berbeda" << endl;
} else if (d == 0) {
    cout << "Akar real dan sama" << endl;
} else {
    cout << "Tidak akar real" << endl;
}

return 0;
}