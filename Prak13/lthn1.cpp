 #include <stdio.h>

int ganjil(int);

main()
{
    int n, hasil;


    printf("Masukkan angka : ");
    scanf("%d", &n);

    ganjil(n);

    if (ganjil(n)==1)
        printf("\n%d adalah bilangan GANJIL \n\n", n);

    else
        printf("\n%d adalah bilangan GENAP \n\n", n);
}

int ganjil(int n)
{

    if (n%2==1 || n%2==-1)
        return(1);

    else
        return(0);
}