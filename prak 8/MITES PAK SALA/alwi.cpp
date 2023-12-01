#include <iostream>
using namespace std;

int main() {
  // Tentukan total uang
  int total = 4367500;

  // Pecahan uang
  int nominal[] = {100000, 50000, 20000, 10000, 5000, 2000, 1000, 500};
  int jumlah[] = {0, 0, 0, 0, 0, 0, 0, 0};

  // Hitung jumlah lembar uang untuk setiap pecahan
  for (int i = 0; i < 8; i++) {
    jumlah[i] = total / nominal[i];
    total -= jumlah[i] * nominal[i];
  }

  // Tampilkan hasil
  for (int i = 0; i < 8; i++) {
    cout << "Jumlah lembar uang " << nominal[i] << " : " << jumlah[i] << endl;
  }

  return 0;
}