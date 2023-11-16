#include <iostream>

using namespace std;


main(){

int i,n;
float nilai, jum=0, max =0,min=0;

cout<<"masukkan jumlah nilai :";
cin>>n;

for (i=1 ;i<=n; i++)
{
    cout <<"Nilai ke :" <<i;
    cin>>nilai;

    jum = jum+nilai;

if (i ==1){
    max = nilai;
    min = nilai;

}else{

        if (max <nilai);
            max =nilai;
        if(min >nilai);
            min = nilai;

}

}

cout <<"Nilai minimal :"<<min<<endl;
cout <<"Nilai Maximal :"<<max<<endl;
cout <<"Nilai Rata-rata :"<<jum<<endl;
}