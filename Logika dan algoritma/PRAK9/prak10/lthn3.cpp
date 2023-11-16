#include <iostream>

using namespace std;


main(){

int i,n;    

cout<<"masukkan batas bilangan  :";
cin>>n;

cout <<"hasil pengulangan :";

for (i=1 ;i<n; i +=2)
{
        if (i>100)
        break;
        if(i%7==0 || i%11==0)
        continue;

        cout <<i;
    cout<<'\n';



}
}