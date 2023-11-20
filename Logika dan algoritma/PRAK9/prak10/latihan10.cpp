#include <stdio.h>
#include <stdlib.h>


        main()
    {
        lagi:
        int i,n,sum=0;
        char pilih;

        printf("masukkan bilangan :");
            scanf("%d", &n);

            for(i=1; i<=n; i++){
            printf("\n%d", sum);
            sum+=i;       


    }

    printf("\n\n apakah anda ingin keluar  (y/t) ?");
    pilih = getchar();
    scanf("%c", &pilih);
    if(pilih=='t')
    goto lagi;

    else if (pilih =='Y' || pilih=='T'){
        printf("\n\t=>> ERROR ");
        exit(0);


    }
    else if(pilih=='Y')
    exit(0);
    printf("\n");


    }