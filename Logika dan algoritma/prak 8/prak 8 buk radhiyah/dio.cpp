#include <stdio.h>
main() 
{
    char kar;
    int jumkar, jumspasi = 0;
    
    puts("Masukan Sebuah Kalimat dan akhiri dgn ENTER. \n");
    puts("saya akan menghitung jumlah karakter ");
    puts("pada kalimat tersebut. \n");
    
    while((kar = getchar()) != '\n')
    {
        jumkar++;
        if (kar == ' ') jumspasi++;
    }
    printf("\nJumlah karakter  =%d", jumkar);
    printf("\nJumhlah SPASI    =%d\n\n", jumspasi);
}