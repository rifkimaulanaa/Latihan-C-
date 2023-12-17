#include <stdio.h>

long int faktorial(long int);

main()
{
    long int max;

    printf("Masukkan angka faktorial : ");
    scanf("%d", &max);

    printf("Hasil = %d \n", faktorial (max));
}

long int faktorial(long int max)
{
    long int n=1, hasil=1;

    for (n=1; n<=max; n++)
    {
        hasil = hasil * n;
    }

    return(hasil);
}