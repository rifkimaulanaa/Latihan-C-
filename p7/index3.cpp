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

    if (flag == 1 || letter != 'X') {
        exit_flag = 0;
    } else {
        exit_flag = 1;
    }

    cout << "exit_flag: " << exit_flag << endl;

    return 0;
}
