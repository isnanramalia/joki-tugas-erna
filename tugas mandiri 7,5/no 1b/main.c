#include <stdio.h>
#include <stdlib.h>

int main()
{
    //deret & jumlah 10 20 30 40 50 60 70 80 90 100
    int i, total;
    printf("ini deret selisih 10 angka\n\n");

    for (i=1; i<=100; i+=10)
    {
        printf(" %i", i);
        total = total+i;
    }

    printf("\n");
    printf("\nJumlah: %i",total);
    return 0;
}
