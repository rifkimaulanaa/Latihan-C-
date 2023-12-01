#include <iostream>
using namespace std;

int main()
{
    int sum, temp, hitungan = 1, max = 0, min = 999999;
    char ulang = 'y';

    while (ulang == 'y')
    {
        cout << "Masukkan bilangan ke-" << hitungan << " : ";
        cin >> temp;

        sum += temp;
        hitungan += 1;

        if (temp > max)
        {
            max = temp;
        }

        if (temp < min)
        {
            min = temp;
        }

        cout << "Mau memasukkan data lagi? [y/t] ?";
        cin >> ulang;
    }

    cout << "Total bilangan = " << sum << endl;
    cout << "Rata - rata = " << sum / hitungan << endl;
    cout << "Maksimum = " << max << endl;
    cout << "Minimum = " << min << endl;
}