#include <iostream>
using namespace std;

int main() {
    // Input jumlah uang yang perlu dipecah
    int jumlah_uang = 4367500;

    // Hitung jumlah lembar uang dari denominasi yang berbeda
    int lembar_uang_100000, lembar_uang_50000, lembar_uang_20000, lembar_uang_10000, lembar_uang_5000, lembar_uang_2000, lembar_uang_1000, lembar_uang_500;

    lembar_uang_100000 = jumlah_uang / 100000;
    jumlah_uang = jumlah_uang % 100000;

    lembar_uang_50000 = jumlah_uang / 50000;
    jumlah_uang = jumlah_uang % 50000;

    lembar_uang_20000 = jumlah_uang / 20000;
    jumlah_uang = jumlah_uang % 20000;

    lembar_uang_10000 = jumlah_uang / 10000;
    jumlah_uang = jumlah_uang % 10000;

    lembar_uang_5000 = jumlah_uang / 5000;
    jumlah_uang = jumlah_uang % 5000;

    lembar_uang_2000 = jumlah_uang / 2000;
    jumlah_uang = jumlah_uang % 2000;

    lembar_uang_1000 = jumlah_uang / 1000;
    jumlah_uang = jumlah_uang % 1000;

    lembar_uang_500 = jumlah_uang / 500;

    // Output jumlah lembar uang
    cout << "Jumlah lembar uang 100,000 Rupiah: " << lembar_uang_100000 << endl;
    cout << "Jumlah lembar uang 50,000 Rupiah: " << lembar_uang_50000 << endl;
    cout << "Jumlah lembar uang 20,000 Rupiah: " << lembar_uang_20000 << endl;
    cout << "Jumlah lembar uang 10,000 Rupiah: " << lembar_uang_10000 << endl;
    cout << "Jumlah lembar uang 5,000 Rupiah: " << lembar_uang_5000 << endl;
    cout << "Jumlah lembar uang 2,000 Rupiah: " << lembar_uang_2000 << endl;
    cout << "Jumlah lembar uang 1,000 Rupiah: " << lembar_uang_1000 << endl;
    cout << "Jumlah lembar uang 500 Rupiah: " << lembar_uang_500 << endl;

    return 0;
}