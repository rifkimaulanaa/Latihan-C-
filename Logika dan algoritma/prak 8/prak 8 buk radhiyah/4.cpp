#include <iostream>


int main (){

int nilai;

for (nilai = 7; nilai <=25; nilai +=2)
{
if (nilai == 15)
    continue;
    printf("%4d ", nilai);
}
printf("\n"); 
}