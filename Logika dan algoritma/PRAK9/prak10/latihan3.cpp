#include <iostream>

using namespace std;


main(){

int i,n;
float nilai, jum=0, max =0,min=999999;

cout<<"masukkan jumlah nilai :";
cin>>n;

for (i=1 ;i<=n; i++)
{
    cout <<"Nilai ke :" <<i;
    cin>>nilai;

    jum = jum+nilai/n;

            if(max<nilai){
                max = nilai;
            }else{
                max = max;
            }

            if(min>nilai){
                min = nilai;
            }else{
                min = min;
            }

}

cout <<"Nilai minimal :"<<min<<endl;
cout <<"Nilai Maximal :"<<max<<endl;
cout <<"Nilai Rata-rata :"<<jum<<endl;
}