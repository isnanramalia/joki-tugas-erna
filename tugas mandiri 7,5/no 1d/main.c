#include <stdio.h>
#include <stdlib.h>

int main()
{
    //program deret dan jumlah 1 2 4 8 16 32 64 128 256 512 1024
    int i, total;

    for (i=1; i<=1024; i*=2)
    {
        printf("%5d", i);
        total= total+i;
    }
    printf("\n");
    printf("\nJumlah: %d",total);
    return 0;
}
