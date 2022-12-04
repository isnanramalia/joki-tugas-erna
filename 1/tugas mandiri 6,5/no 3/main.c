#include <stdio.h>
#include <stdlib.h>

unsigned int deret(int n)
{
    if(n==1)
        return 1;
    else
        return (deret(n-1)*2);
}
int main()
{
    //program deret 1 2 4 8 16 32 64 128 256 512 1024
    int i;

    for (i=1; i<=11; i++)
        printf("%5d", deret(i));
    return 0;
}
