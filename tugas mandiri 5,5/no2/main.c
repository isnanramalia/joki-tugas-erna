#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    //program hitung harga setelah diskon
    char jenis;
    int kode, diskon;
    long int harga, sDiskon;

    printf("input kode: ");
    scanf("%d",&kode);
    printf("input harga: ");
    scanf("%d",&harga);
    printf("input jenis: ");
    scanf("%d",&jenis);

    switch(jenis)
    {
    case 'A':
        diskon=10;
        sDiskon=harga*0.90;
        break;
    case 'B':
        diskon=15;
        sDiskon=harga*0.85;
        break;
    case 'C':
        diskon=20;
        sDiskon=harga*0.80;
        break;
    default:
        printf(" inputan salah");
    }

    printf("\n\n Jenis barang %c mendapat diskon = %d %%, Harga setelah didiskon : Rp %d \n", jenis, diskon, sDiskon);


    return 0;
}
