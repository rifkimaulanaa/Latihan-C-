
#include <stdio.h>
#define PI 3.14159f

float radian (float);

main()
{
    float drjt;

    printf("Masukkan derajat : ");
    scanf("%f", &drjt);

    printf("\nHasil = %f \n\n", radian(drjt));
}

float radian (float drjt)
{
    float rad=0;

    rad = drjt / 180.0f * PI;

    return(rad);
}