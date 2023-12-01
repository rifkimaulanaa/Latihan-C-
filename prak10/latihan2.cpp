#include <iostream>

using namespace std;


main(){

int i,n;

cout<<"masukkan bilangan ganjil :";
cin>>n;

cout <<"hasil pengulangan :";

for (i=1 ;i<n; i +=2)
{
        if (i %3==0)
        continue;
        cout <<i;
    cout<<'\n';
}




}