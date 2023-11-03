#include <iostream>
using namespace std;

int main()
{
    int n, faktorial = 1, n_awal;

    cout << "masukan angka : ";
    cin >> n;

    for (int i = 1; n >= i; --n)
    {
        faktorial = faktorial * n;
        cout << n;

    if (n != 1)
        cout << "*";
    }

    cout << endl;
    cout << "faktorialnya adalah " << faktorial << endl;

    return 0;
}