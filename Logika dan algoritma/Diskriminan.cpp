#include <stdio.h>
#include <math.h>

main(){

float a, b, c, d = 0 ;
double x1, x2, imaginair;


printf("MENCARI AKAR-AKAR persamaan kuadrat a+bx+c=0\n");

printf("\nmasukkan nilai a :");
scanf("%f", &a);

printf("\nmasukkan nilai b :");
scanf("%f", &b);


printf("\nmasukkan nilai c :");
scanf("%f", &c);



d = b*b-4*a*c;


if (d >=0)

    if (d == 0){

x1 = -b / (2 * a);
printf("\nDua akar real kembar yaitu : \n");
printf("x1 = x2 = %g\n", x1);
}else{


x1 = (-b + sqrt(d)) / (2 * a);
x2 = (-b - sqrt(d)) / (2 * a);



printf("\nDua akar real berlainan yaitu : \n");
printf("x1 = %g\n", x1);
printf("x2 = %g\n", x2);


}else{


imaginair = (sqrt(-d) ) / (2 * a);
x1 = -b / ( 2 * a);

printf("\nDua akar imaginair berlainan yaitu : \n");
printf("x1 = %g+%gi\n", x1, imaginair );
printf("x2 = %g - %gi\n", x2, imaginair);



}


}