#include <iostream>

using namespace std;

int main() {
  bool hasil;

  hasil = 'z' == 'Z';
  cout << "Apakah 'z' sama dengan '2'? " << hasil << endl;

  hasil = 'z' != 'Z';
  cout << "Apakah 'z' tidak sama dengan 'Z'? " << hasil << endl;

  hasil = "Duniailkom" == "duniailkom";
  cout << "Apakah \"Duniailkom\" sama dengan \"duniailkom\"? " << hasil << endl;

  hasil = 'A' < 'B';
  cout << "Apakah 'A' lebih kecil dari 'B'? " << hasil << endl;

  return 0;
}
