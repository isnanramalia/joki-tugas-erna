#include <stdio.h>
#include <stdlib.h>

int main()
{
    //program dan jumlah deret 1 3 5 7 9 11 13 15 17 19
    int i, total;
    total=0;
    printf(" ini deret angka ganjil\n\n");
    for (i=1; i<=19; i+=2)
    {
        printf(" %i", i);
        total = total+i;
    }
    printf("\n");
    printf("\nJumlah: %i", total);
    return 0;
}
