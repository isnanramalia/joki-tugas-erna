#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Tugas 2.5 nomor 3
    float a,b;
    float sisiMiring;

    a = 4;
    b = 5;
    sisiMiring =sqrt((a*a)+(b*b));

    printf("sisi alas\t: %2.f\n",a);
    printf("sisi tinggi\t: %2.f\n",b);
    printf("Sisi miring segitiga atau c adalah %2.f\n", sisiMiring);

    return 0;
}
