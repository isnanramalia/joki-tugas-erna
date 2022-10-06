#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Tugas 2.5 nomor 2
    float r;
    float phi;
    float V;
    float d;

    d = 15;
    r = d/2;
    phi = 3.14;
    V = 3*phi/4*r*r*r;

    printf("Diameter\t: %2.f\n",d);
    printf("Jari-jari\t: %2.f\n",r);
    printf("Phi\t\t: %2.f\n",phi);
    printf("Volume bangun ruang bola tersebut adalah %2.f\n", V);

    return 0;
}
