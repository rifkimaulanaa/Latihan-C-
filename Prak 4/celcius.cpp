#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  float celcius;
  float fahrenheit;

  // Input suhu dalam celcius
  cout << "Masukkan suhu dalam celcius: ";
  cin >> celcius;

  // Konversi suhu ke fahrenheit
  fahrenheit = (celcius * 9 / 5) + 32;

  // Output suhu dalam fahrenheit
  cout << "Suhu dalam fahrenheit: " << fahrenheit << endl;

  return 0;
}
