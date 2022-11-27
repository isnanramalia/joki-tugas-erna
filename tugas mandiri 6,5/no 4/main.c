#include <stdio.h>
#include <stdlib.h>

int main()
{
    //program hitung kecepatan
    int detik=100;
    int kec=2;
    int jarak=0;

    while(detik>0)
    {
        if(detik>=10)
        {
            for(int i=0; i<9; i++)
            {
                jarak += kec;
                detik--;
            }
        }
        else
        {
            for(int i=0; i<detik; i++)
            {
                jarak += kec;
                detik--;
            }
        }
    }

    printf("jarak yang ditempuh: %i meter", jarak);
    return 0;
}
