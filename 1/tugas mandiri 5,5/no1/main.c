#include <stdio.h>
#include <stdlib.h>

int main()
{
    //program menentukan lama bekerja pegawai
    int masuk, keluar, lama;

    printf("input jam masuk kerja: ");
    scanf("%d",&masuk);
    printf("input jam keluar kerja: ");
    scanf("%d", &keluar);

    if(keluar>=masuk)
    {
        lama=keluar-masuk;
    }
    else
    {
        lama=(12+keluar)-masuk;
    }
    printf("lama bekerja pegawai selama %d jam",lama);

    return 0;
}
