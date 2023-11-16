#include <iostream>
using namespace std;

main(){
char kar;

cout <<"ketik sembarang kalimat";
puts ("dan di akhiri dengan enter\n\n");

for( ; ; )
{

kar = getchar();
if (kar == '\n')
    break;

}
printf ("selesai\n");




}