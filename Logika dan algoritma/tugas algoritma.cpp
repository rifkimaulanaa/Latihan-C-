#include <iostream>

using namespace std;

main (){


    int a = 10;
    int b = 5;
    bool hasil;

    cout << "isi variable a" << endl;
    cout << "isi variable b" << endl;
    cout << endl;

    hasil = a == b;

    cout << "apakah a == b " << hasil << endl;


    hasil = a != b;

    cout << "apakah a != b " << hasil << endl;

    hasil = a > b;

    cout << "apakah a > b " << hasil << endl;

    hasil = a < b;

    cout << "apakah a < b " << hasil << endl;

    hasil = a >= b;

    cout << "apakah a >= b " << hasil << endl;

    hasil = a <= b;

    cout << "apakah a <= b " << hasil << endl;

    return 0;

}