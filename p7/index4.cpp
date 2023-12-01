#include <iostream>
using namespace std;

int main() {
    int flag;
    char letter;
    int exit_flag;

    // Meminta input dari pengguna untuk variabel flag
    cout << "Masukkan nilai flag (1 or 0): ";
    cin >> flag;

    // Meminta input dari pengguna untuk variabel letter
    cout << "Masukkan nilai letter: ";
    cin >> letter;

    switch (letter) {
        case 'X':
            exit_flag = 0;
            break;
        case 'Z':
        case 'A':
            exit_flag = 1;
            break;
        default:
            cout << "Unknown letter " << letter << endl;
            exit_flag = 1;
    }

    cout << "exit_flag: " << exit_flag << endl;

    return 0;
}
