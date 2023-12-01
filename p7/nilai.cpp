#include <iostream>

using namespace std;


main(){

int nilai,total,result;

cout <<"masukkan nilai"<<endl;
cin >>nilai;

// cout <<"masukkan total"<<endl;
// cin >>total;

// result = nilai + total; 

result = nilai;


  switch (nilai) {
    case 1:
    result = nilai >=90;
      cout << "Nilai Anda A";
      break;
    case 2:
      cout << "Nilai Anda B" << endl;
      break;
    case 3:
      cout << "Nilai Anda C" << endl;
      break;
    case 4:
      cout << "Nilai Anda D" << endl;
      break;
    case 5:
      cout << "Nilai Anda E" << endl;
      break;
    case 6:
      cout << "Nilai Anda A-" << endl;
      break;
    case 7:
      cout << "Nilai Anda B-" << endl;
      break;
    case 8:
      cout << "Nilai Anda C-" << endl;
      break;
    case 9:
      cout << "Nilai Anda D-" << endl;
      break;
    case 10:
      cout << "Nilai Anda E-" << endl;
      break;
    default:
      cout << "Nilai Anda tidak valid" << endl;
      break;
  }

  return 0;
}
