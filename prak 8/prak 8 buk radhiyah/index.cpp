#include <iostream>

using namespace std;

main(){

char pilihan;


int sudahbenar = 0;

cout <<"Pilihlah Y atau T :";

do
{
pilihan = getchar();
sudahbenar = (pilihan == 'Y') || (pilihan == 'y') || 
(pilihan == 'T') || (pilihan == 't');

} while(!sudahbenar);

switch (pilihan)
{

            case 'Y':
        case 'y':
    cout <<"pilihan anda adalah Y";
    cout<<endl;
    break;

    case 'T':
    case 't':
    cout <<"Pilihan anda adalah T";
    cout <<endl;



}



}