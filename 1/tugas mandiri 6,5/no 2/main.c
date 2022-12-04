#include <stdio.h>
#include <stdlib.h>

int main()
{
    //deret 100 95 90 85 80 75 70 65 60 55
    int i=100;
    while(i>=55)
    {
        printf(" %d", i);
        i-=5;
    }
    printf("\n");
    return 0;
}

