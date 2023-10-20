#include <stdio.h>

main(){

int bill1,bill2;
float hasil;

printf("masukkan bilang 1: ");
scanf("%d",&bill1);

printf("masukkan bilang 2: ");
scanf("%d",&bill2);


// proses inisialisasi agar bilangan yang di input kan bukan 0
if(bill2 == 0){

printf("division by zero");

}else{

hasil=bill1/bill2;
printf("hasil bagi %d dengan %d = %.3f", bill1, bill2, hasil);

}
}