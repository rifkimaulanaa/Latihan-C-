#include <iostream>

using namespace std;

main() {

int nilai,diskon ;


cout << "Masukkan total belanja anda: ";

cin >> nilai;

if ( nilai >= 100000 ) {
diskon =  nilai * 5/100;
    cout << "anda mendapatkan potongan sebesar " <<diskon << endl;
    cout << "Uang yang harus di bayarkan :" << nilai-diskon; 
}

else if (nilai < 100000) {

    cout << "anda tidak mendapatkan potongan " << endl;
}


return 0;
}
