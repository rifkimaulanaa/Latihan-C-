#include <iostream>
 
using namespace std;
 
main()
{
string nama;
 char golongan;
 int jam_kerja, upah_per_jam, total_upah;
 
 
 cout << "Nama Karyawan: ";
 getline(cin,nama);
 
 cout << "Golongan: ";
 cin >> golongan;
 
 cout << "Jumlah jam kerja: ";
 cin >> jam_kerja;
 
 
 switch (golongan) {
  case 'A':
    upah_per_jam = 5000;
    break;
  case 'B':
    upah_per_jam = 7000;
    break;
  case 'C':
    upah_per_jam = 8000;
    break;
  case 'D':
    upah_per_jam = 10000;
    break;
  }
 
  total_upah = jam_kerja * upah_per_jam;
 
  
  if ( (jam_kerja - 48) > 0 ) {
    total_upah = total_upah + ((jam_kerja - 48)*4000);
  }
 
  
   cout << endl;
   cout << nama << " menerima upah Rp." << total_upah << " per minggu";
   cout << endl;
 
 
 return 0;
}