#include <iostream>

using namespace std;

main(){

int total,tebak;


cout <<"masukkan nilai tebak: " <<endl;
cin >> tebak;

cout <<"masukkan nilai total: " <<endl;
cin >> total;


if (total==tebak)
{

cout <<"nilai sama adalah :"<<total<<endl;
}else{

cout <<"nilai tidak sama :" <<tebak<<endl;

}
return 0;
}