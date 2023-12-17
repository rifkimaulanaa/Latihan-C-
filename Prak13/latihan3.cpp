#include <stdio.h>

int prima(int);

main()
{
    int n;

    printf("Masukkan bilangan : ");
    scanf("%d", &n);

    prima(n);
    if (prima(n) == 1)
        printf("\nbilangan prima\n\n");
    else
        printf("\nbukan bilangan prima\n\n");
}

int prima(int n)
{
    int prm2, prm3, prm5, prm7;

    prm2 = n % 2;
    prm3 = n % 3;
    prm5 = n % 5;
    prm7 = n % 7;

    if (n == 2 || n == 3 || n == 5 || n == 7)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 0;
    }
    else if (prm2 != 0 && prm3 != 0 && prm5 != 0 && prm7 != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}