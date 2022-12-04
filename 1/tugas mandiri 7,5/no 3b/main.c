#include <stdio.h>
#include <stdlib.h>

int main()
{
    //deret 100 95 90 85 80 75 70 65 60 55
    int i=100;
    int total;

    for (i = 100; i>= 55; i-=5)
    {
        printf(" %i", i);
        total=total+i;
    }
    printf("\n");
    printf("Jumlah: %i",total);
    return 0;
}

