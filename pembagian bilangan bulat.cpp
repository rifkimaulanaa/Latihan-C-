#include <iostream>

using namespace std;

int main() {
  // Mendeklarasikan variabel

  int a, b;

  // Meminta pengguna untuk memasukkan bilangan pertama

  cout << "Masukkan bilangan pertama: ";
  cin >> a;

  // Meminta pengguna untuk memasukkan bilangan kedua

  cout << "Masukkan bilangan kedua: ";
  cin >> b;

  // Memeriksa apakah bilangan kedua nol

  if (b == 0) {
    cout << "Pembagian dengan nol tidak boleh dilakukan." << endl;
  } else {
    // Menghitung hasil pembagian

    double hasil = (double)a / b;

    // Menampilkan hasil pembagian

    cout << "Hasil pembagian: " << hasil << endl;
  }

  return 0;
}
