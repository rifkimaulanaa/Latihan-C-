#include <iostream>
using namespace std;

main()

{
    int angka, i, hasil = 0;

    cout << "masukkan angka: ";
    cin >> angka;

    i = 1;  

    while (i <= angka)
    {
        if (i % 2 == 0)
        {

            cout << i << endl;
            hasil += i;
        }
        i++;
    }
    cout << "Hasil Penjumlahan: " << hasil;
}