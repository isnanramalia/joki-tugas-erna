#include <stdio.h>
#include <stdlib.h>

int main()
{
    //program hitung jarak tempuh
    int t, v, s;
    s=0;
    v=2;

    for(t=1; t<=100; t=t+1)
    {
        s= s+v;
    }

    printf("waktu yang ditempuh setelah berjalan selama 100 detik adalah %i m\n", s);
    return 0;
}
