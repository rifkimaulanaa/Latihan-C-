#include <stdio.h>

main() {

int bill;

printf("masukkan bilangan :");
scanf("%d",&bill);

printf("bilangan yang di inputkan adalah bilangan %d\n", bill);

if(bill%2==0){

    printf("bilangan tersebut adalah bilangan genap");

}else{

    printf("bilangan tersebut adalah bilangan ganjil");
}



}