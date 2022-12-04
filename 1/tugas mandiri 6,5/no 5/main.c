#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   float simpan, total, bunga;
   simpan=1000000.0;
   total=simpan;

   for(a=1; a<=10; a++)
   {
       bunga=total*0.02;
       total=total+bunga;
   }
   printf("dengan simpanan awal sebesar 1000000");
   printf("\njumlah uang anda setelah 10 bulan adalah %f ",total);


    return 0;
}
