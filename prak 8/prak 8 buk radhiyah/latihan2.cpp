#include <iostream>
using namespace std;


main (){
char kar;
int jumkar , jumspasi =0;

puts ("Masukkan sebuah kalimat dan akhiri dengan ENTER.\n");
puts ("saya akan menghitung jumlah karakter ");
puts ("Pada kalimat tersebut\n");

while ((kar = getchar()) !='\n')
{

jumkar++;
if (kar ==' ') jumspasi++;

}
printf ("\nJumlah karakter = %d",jumkar);
printf ("\nJumlah spasi = %d \n\n",jumspasi);




}