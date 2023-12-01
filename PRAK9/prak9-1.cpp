#include <iostream>
using namespace std;

main()
{
    char huruf;

    while (huruf != 'X')
    {
        cout << "masukan karakter lalu klik enter : ";
        cin >> huruf;
    }

    cout << "program diakhiri (ditemukan 'X')" << endl;

    return 0;
}