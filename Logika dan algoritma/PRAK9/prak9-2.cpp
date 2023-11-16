#include <iostream>
using namespace std;

main()
{
    int sum, temp, hitungan = 1;
    char ulang = 'y';

    while (ulang == 'y')
    {
        cout << "Masukkan bilangan ke-" << hitungan << " : ";
        cin >> temp;

        sum += temp;
        hitungan += 1;

        cout << "Mau memasukkan data lagi? [y/t] ?";
        cin >> ulang;

    }

    cout << "Total bilangan = " << sum;
}