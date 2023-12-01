#include <iostream>

using namespace std;

main() {

int menu ,hasil;
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
cin >> menu;



switch (menu ) {
    case 1:
    cout << "Hasil dari " << angka1 << " + " << angka2 << " = " << angka1 + angka2;
    break;

    case 2:
    cout << "Hasil dari " << angka1 << " - " << angka2 << " = " << angka1 - angka2;
    break;


    case 3:
     cout << "Hasil dari " << angka1 << " X " << angka2 << " = " << angka1 * angka2;
    break;

    case 4:
    cout << "Hasil dari " << angka1 << " / " << angka2 << " = " << angka1 / angka2;
    break;

case 5:
    cout << "Hasil dari " << angka1 << " % " << angka2 << " = " << (int)angka1 % (int)angka2;
    break;
    default:
    cout << "menu yang kamu pilih hanya ada dalam otakmu"<<endl;

}
return 0;
}
