#include <iostream>
#include <cmath>
#include <chrono>
#include <thread>
using namespace std;

void anim_titik() {
    for (int i = 0; i < 3; ++i) {
        cout << ".";
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << endl;
}

int main()
{
int pilihan,kubus,lingkaran,jrsilinder,tingsilinder;
char ulangi;
do
{

cout<<"menu menghitung Volume dan Luas Kubus, Lingkaran, Silinder"<<endl;
cout<<"Daftar pilihan : "<<endl;
cout<<"2. Menghitung Luas Lingkaran"<<endl;
cout<<"3. Menghitung Volume Silinder"<<endl;
cout<<endl;
cout<<"masukkan angka menu :"; cin>>pilihan;

switch (pilihan)
{
case 1:
    cout<<"masukkan nilai volume";
    cin>>kubus;
    cout<<"menghitung volume kubus";anim_titik();
    cout<<"hasil perhitungan adalah : "<<kubus*kubus*kubus<<endl;
    break;

case 2:
    cout<<"masukkan nilai luas";
    cin>>lingkaran;
    cout<<"menghitung luas lingkaran ";anim_titik();
    cout<<"hasil perhitungan adalah : "<<3.14*(lingkaran*lingkaran)<<endl;
    break;

case 3:
    cout<<"masukkan nilai jari";
    cin>>jrsilinder;
    cout<<"masukkan nilai tinggi";
    cin>>tingsilinder;
    cout<<"menghitung volume silinder ";anim_titik();
    cout<<"hasil perhitungan adalah : "<<3.14*(jrsilinder*jrsilinder)*tingsilinder<<endl;
    break;

default:cout<<"Menu tidak ada !! silahkan ulangi"<<endl;
}   
cout<<endl;

cout<<"ingin mengulang? (y/n)?";
cin>>ulangi;
cout<<endl;

}
while (ulangi=='y');
{
    cout<<"Terimakasih.";anim_titik();
}
cout<<endl;

return 0;
}