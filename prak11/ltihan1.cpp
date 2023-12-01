#include <iostream>
using namespace std;

main()
{
int i,b,n;
char ulang ='y';

while(ulang == 'y' ){

    cout<<"masukkan bilangan :";
cin>>n;

for(i=1; i<=n ; i++)
{
    for(b=1; b<=n; b++){


        cout<<b;
        

    }

cout<<endl;
}
cout <<"masukkan data lgi [y/t] ?";
getchar();
ulang = getchar();

}






}