#include <iostream>
#include <math.h>

using namespace std;


main(){

cout << "menghitung luas lingkaran " <<endl;
cout << "---------------------------------" <<endl;


const float phi = 3.14f ;
double jari, luas, r ;

cout << "masukkan jari-jari : ";
cin >> jari;


r = pow((jari), 2);
luas = r * phi ;


cout << "luas lingkaran :" <<luas;
return 0;


}