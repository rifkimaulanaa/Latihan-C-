#include <iostream>
using namespace std;

main(){

int i,b,c=0;
char a;
char ulang ='y';

while (ulang=='y')
{
    cout<<"Masukkan bilangan :";
        cin>>b;

        for (i=1; i<=b; i++){


            cout<<c;
            c +=i;
            cout<<endl;
        }
cout <<"masukkan data lgi [y/t] ?";
getchar();
ulang = getchar();
}
    

    


}