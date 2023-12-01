#include <iostream>
using namespace std;


main(){
int i,n,t=0;


cout<<"Masukkan bilangan :";
cin>>i;

while(i!=0){
    n=i%10;
    i=i/10;
    t=t+n;  


}

cout<<"'\n'Hasil penjumlahan :" <<t;
}