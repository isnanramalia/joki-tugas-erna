#include <stdio.h>
#include <stdlib.h>

int main()
{
    //program hitung biaya parkir berdasar durasi
    int masuk, keluar, lama, harga;

    printf("Jam Masuk : ");
    scanf("%d",&masuk);

    printf("\nJam Keluar : ");
    scanf("%d",&keluar);

    if (keluar >= masuk)
     lama = keluar - masuk;
    else
     lama = (12 - masuk) + keluar;

    if (lama >2)
     harga = 2000 + ((lama - 2)*500);
    else
     harga = 2000;

    printf("\n\nBiaya Parkir Adalah : Rp %d \n",harga);

  return 0;
}

