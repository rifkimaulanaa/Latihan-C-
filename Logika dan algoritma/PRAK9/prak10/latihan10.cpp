#include <iostream>
#include <stdlib.h>
using namespace std;


    main(){
        cout <<"rifki"; 
        cout<<endl;
    lagi:

int i, j,n;
char pilih;
cout <<"Masukkan jumlah data";
    cin>>n;
for (i=1; i<=n; i++){

    for(j=1; j<=n; j++){
        cout<<j;
    }
    cout<<endl;
}
cout <<"apakah anda ingin keluar (y/t) ?";
pilih =getchar();
    cout<<pilih;

        if (pilih =='t')
        goto lagi;

        else if (pilih =='Y' || pilih=='T') {

            cout <<"program selesai";
            exit(0);
        }


    if(pilih =='y')
    exit(0);
    }
