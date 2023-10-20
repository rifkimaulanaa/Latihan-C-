#include <stdio.h>
#include <math.h>

main() {

int valid_operator = 1;

char o;
float number1, number2, result;

printf("masukkan 2 buah bilangan dan sebuah operator\n");
printf("dengan format : number1 operator number2\n\n ");

scanf("%f %c %f", &number1, &o, &number2);

switch (o) {
    case '*':
      result = number1 * number2;
    break;
    case '/':
    result = number1 / number2;
    break;
    case '+':
    result = number1 + number2;
    break;
    case '-':
    result = number1 - number2;
    break;
    default:
    valid_operator = 0;
    break;
}

if (valid_operator) {
    printf("\n%g %c %g is %g\n", number1, o, number2, result);
} else {
    printf("Invalid operator !\n");
}
}
