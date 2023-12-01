#include <iostream>

using namespace std;

main() {

int masukkan;
float angka1, angka2;

cout << "Angka pertama: ";
cin >> angka1;
cout << "Angka kedua: ";
cin >> angka2;
cout << endl;

cout << "Menu matematika" << endl;
cout << "1. Penjumlahan" << endl;
cout << "2. Pengurangan" << endl;
cout << "3. Perkalian" << endl;
cout << "4. Pembagian" << endl;
cout << "5. Modulus" << endl;
cout << endl;
cout << "Pilih Menu Matematika: ";
cin >> masukkan;



if (masukkan == 1) {
    cout << "Hasil dari " << angka1 << " + " << angka2 << " = " << angka1 + angka2;
} else if (masukkan == 2) {
    cout << "Hasil dari " << angka1 << " - " << angka2 << " = " << angka1 - angka2;
} else if (masukkan == 3) {
    cout << "Hasil dari " << angka1 << " * " << angka2 << " = " << angka1 * angka2;
} else if (masukkan == 4) {
    cout << "Hasil dari " << angka1 << " / " << angka2 << " = " << angka1 / angka2;
} else if (masukkan == 5) {
    cout << "Hasil dari " << angka1 << " % " << angka2 << " = " << (int)angka1 % (int)angka2;
} else {
    cout << "Maaf, pilihan menu tidak tersedia";
}

cout << endl;
return 0;
}
