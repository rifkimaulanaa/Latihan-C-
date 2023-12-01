#include <iostream>
using namespace std;

main(){
int bil=1, bil2=2, prima, pembagi, n, isprima;
char ulang ='y';

while (ulang =='y')
{
cout<<"masukkan bilangan :";
cin>>n;


while(bil<=n){
    isprima=1;
    for(pembagi=2 ; pembagi<bil; pembagi++){

        if(bil2%pembagi ==0){
            isprima =0;
            break;

        }

    }
        if(isprima){

            cout<<bil2;
            bil++;
        }

    bil2++;
    cout<<'\n';
}
cout <<"masukkan data lgi [y/t] ?";
getchar();
ulang = getchar();

}




}