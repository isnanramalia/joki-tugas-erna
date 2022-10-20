#include <stdio.h>
#include <stdlib.h>#include”stdio.h” //Ganti tanda petik(“) dengan tanda (< dan >)
#include”conio.h”
#include”string.h”

int main()
{
int tmb=0;
long int harga, cash, total, kurang, kembalian, tambahan;
long int jum1, jum2, jum3, jum4, jum5, jum6;
long int faster, grade, snowman, standard, bpt, techjob;
int pilihan, Next;
int bayar ,pil;
char enter [50];
char nama [50];
puts(“Ini Program Daftar Harga Barang By: Ah. Handoyo”);
printf(“Kalau Mau buka Please Enter…!!!”);
scanf(“%c”,&enter);
clrscr();

printf(“================================\n”);
printf(“PROGRAM DAFTAR HARGA\n”);
printf(“DAFTAR HARGA Ball point\n”);
printf(“================================\n\n”);
printf(“daftar harga barang:\n\n”);
printf(“Ball Point Faster\t\t:Rp.2000/Pcs\n”);
printf(“Ball Point Hi-Grade\t\t:Rp.2500/Pcs\n”);
printf(“Ball Point Snowman\t\t:Rp.1000/Pcs\n”);
printf(“Ball Point Standard\t\t:Rp.2000/Pcs\n”);
printf(“Ball Point BPT-P\t\t:Rp.1500/Pcs\n”);
printf(“Ball Point Techjob\t\t:Rp.1500/Pcs\n\n”);
printf(“\nNama Customer: “);
gets(nama);

clrscr();goto l;
l:
printf(“========================================================\n”);
printf(“DAFTAR BARANG YANG DIBELI\n”);
printf(“========================================================\n”);
printf(“Nama Barang\t\tHarga/Pcs Jumlah\ttotal\n”);
printf(“========================================================\n”);
printf(“Ball Point Faster\t Rp.2000 \t”);
scanf(“%ld”,&jum1);
faster=jum1*2000;
gotoxy (49,6);
printf(“Rp%1d”,faster);
printf(“\n\nBall Point Hi-Grade\t Rp.2500 \t”);
scanf(“%ld”,&jum2);
grade=jum2*2500;
gotoxy (49,8);
printf(“Rp%ld”,grade);
printf(“\n\nBall Point Snowman\t Rp.1000 \t”);
scanf(“%ld”,&jum3);
snowman=jum3*1000;
gotoxy (49,10);
printf(“Rp%ld”,snowman);
printf(“\n\nBall Point Standard\t Rp.2000 \t”);
scanf(“%ld”,&jum4);
standard=jum4*2000;
gotoxy (49,12);
printf(“Rp%ld”,standard);
printf(“\n\nBall Point BPT-P\t Rp.1500 \t”);
scanf(“%ld”,&jum5);
bpt=jum5*1500;
gotoxy (49,14);
printf(“Rp%ld”,bpt);
printf(“\n\nBall Point Techjob\t Rp.1500 \t”);
scanf(“%ld”,&jum6);
techjob=jum6*1500;
gotoxy (49,16);
printf(“Rp%ld”,techjob);
printf(“\n\n========================================================\n”);
harga=faster+grade+snowman+standard+bpt+techjob;
printf(“Total Harga”);
gotoxy (49,19);
printf(“Rp%ld”,harga);
printf(“\n========================================================\n”);

printf(“\n\n Tekan 1 untuk Lanjut..!!!: “);
scanf(“%d”,&Next);
clrscr();
printf(“\n==========================\n”);
printf(“Pilihan pembayaran”);
printf(“\n==========================\n\n”);
printf(“1. Tunai”);
printf(“\n2. Kredit”);
printf(“\n3. Card\n\n\n”);
printf(“\n==========================\n”);
printf(“Pembayaran menggunakan= “);
scanf(“%d”,&bayar);
clrscr();
printf(“==========================\n”);
printf(“Skema Pembayaran produk\n”);
printf(“==========================\n\n”);
switch(bayar)
{
case 1:
printf(“Pembayaran tunai\n”);
printf(“==========================\n”);
printf(“bayar\t\t\tRp%ld”,harga);
printf(“\ntambahan\t\tRp%d”,tmb);
tambahan=tmb;
total=harga;
printf(“\nTotal Bayar\t\tRp%ld”,total);
printf(“\n==========================\n”);
printf(“Uang Bayar\t\tRp”);
scanf(“%ld”,&cash);
{if (cash>=total)
{printf(“kurang=\t\t\tRp0”);goto p;}
else
kurang=total-cash;
printf(“kurang=\t\t\tRp%ld”,kurang);}
{p: if (cashtotal)
{printf(“\nkurang=\t\t\tRp0”);
kembalian=cash-total;
printf(“\nKembalian=\t\tRp.%ld”,kembalian);}
else if (cash==total)
{printf(“Kurang=\t\t\tRp0”);
printf(“\nKembalian=\t\tRp0”);}
else
{kurang=total-cash;
printf(“kurang=\t\t\tRp%ld”,kurang);
printf(“\nkembalian=\t\tRp0”);}
break;
case 5:
printf(“\nbiaya=\t\tRp%ld”,harga);
tambahan=(harga/100)*10;
printf(“\ntambahan=\tRp%ld”,tambahan);
total=harga+tambahan;
printf(“\nTotal biaya=\tRp%ld”,total);
printf(“\n==========================\n”);
printf(“Di bayar dengan=\tRp”);
scanf(“%ld”,&cash);
if(cash>total)
{printf(“\nkurang=\t\t\tRp0”);
kembalian=cash-total;
printf(“\nKembalian=\t\tRp%ld”,kembalian);}
else if (cash==total)
{printf(“Kurang=\t\t\tRp0”);
printf(“\nKembalian=\t\tRp0”);}
else
{kurang=total-cash;
printf(“kurang=\t\t\tRp%ld”,kurang);
printf(“\nkembalian=\t\tRp0”);}
break;
case 6:
printf(“\nbiaya=\t\tRp%ld”,harga);
tambahan=(harga/100)*10;
printf(“\ntambahan=\tRp%ld”,tambahan);
total=harga+tambahan;
printf(“\nTotal biaya=\tRp%ld”,total);
printf(“\n==========================\n”);
printf(“Di bayar dengan=\tRp”);
scanf(“%ld”,&cash);
if(cash>total)
{printf(“\nkurang=\t\t\tRp0”);
kembalian=cash-total;
printf(“\nKembalian=\t\tRp.%ld”,kembalian);}
else if (cash==total)
{printf(“Kurang=\t\t\tRp0”);
printf(“\nKembalian=\t\tRp0”);}
else
{kurang=total-cash;
printf(“kurang=\t\t\tRp%ld”,kurang);
printf(“\nkembalian=\t\tRp0”);}
break;
printf(“Pilihan yang anda masukkan salah”);
} goto x;
case 3:
printf(“pembayaran dengan card\n”);
printf(“==============================\n”);
printf(“4. BCA (diskon 10%)\n”);
printf(“5. Mandiri (diskon 8%)\n”);
printf(“6. BRI (diskon 5%)\n”);
printf(“==============================\n”);
printf(“masukkan pilihan anda= “);
scanf(“%d”,&pil);
switch(pil)
{
case 4:
printf(“\nbiaya=\t\tRp%ld”,harga);
tambahan=(harga/100)*10;
printf(“\ndiskon=\t\tRp%ld”,tambahan);
total=harga-tambahan;
printf(“\nTotal biaya=\tRp%ld”,total);
printf(“\n==========================\n”);
printf(“Di bayar dengan=\tRp”);
scanf(“%ld”,&cash);
if(cash>total)
{printf(“\nkurang=\t\t\tRp0”);
kembalian=cash-total;
printf(“\nKembalian=\t\tRp.%ld”,kembalian);}
else if (cash==total)
{printf(“Kurang=\t\t\tRp0”);
printf(“\nKembalian=\t\tRp0”);}
else
{kurang=total-cash;
printf(“kurang=\t\t\tRp%ld”,kurang);
printf(“\nkembalian=\t\tRp0”);}
break;
case 5:
printf(“\nbiaya=\t\tRp%ld”,harga);
tambahan=(harga/100)*8;
printf(“\ndiskon=\t\tRp%ld”,tambahan);
total=harga-tambahan;
printf(“\nTotal biaya=\tRp%ld”,total);
printf(“\n==========================\n”);
printf(“Di bayar dengan=\tRp”);
scanf(“%ld”,&cash);
if(cash>total)
{printf(“\nkurang=\t\t\tRp0”);
kembalian=cash-total;
printf(“\nKembalian=\t\tRp%ld”,kembalian);}
else if (cash==total)
{printf(“Kurang=\t\t\tRp0”);
printf(“\nKembalian=\t\tRp0”);}
else
{kurang=total-cash;
printf(“kurang=\t\t\tRp%ld”,kurang);
printf(“\nkembalian=\t\tRp0”);}
break;
case 6:
printf(“\nbiaya=\t\tRp%ld”,harga);
tambahan=(harga/100)*5;
printf(“\ndiskon=\t\tRp%ld”,tambahan);
total=harga-tambahan;
printf(“\nTotal biaya=\tRp%ld”,total);
printf(“\n==========================\n”);
printf(“Di bayar dengan=\tRp”);
scanf(“%ld”,&cash);
if(cash>total)
{printf(“\nkurang=\t\t\tRp0”);
kembalian=cash-total;
printf(“\nKembalian=\t\tRp%ld”,kembalian);}
else if (cash==total)
{printf(“Kurang=\t\t\tRp0”);
printf(“\nKembalian=\t\tRp0”);}
else
{kurang=total-cash;
printf(“kurang=\t\t\tRp%ld”,kurang);
printf(“\nkembalian=\t\tRp0”);}
break;
} goto x;
}x:
printf(“\n\nTekan 1 untuk Lanjut..!!!: “);
scanf(“%d”,&Next);
clrscr();
printf(“============================================================\n”);
printf(“\t\t\tNOTA PEMBELIAN\n”);
printf(“============================================================\n”);
printf(“Nama Customer\t\t\t\t\t:%s”,strupr(nama));
printf(“\n============================================================\n”);
printf(“Nama Barang\t\t\tJumlah\t\tHarga\n”);
printf(“============================================================\n”);
printf(“\n\nBall Point Faster\t\t%ldpcs\t\tRp%ld”,jum1,faster);
printf(“\nBall Point Hi-Grade\t\t%ldpcs\t\tRp%ld”,jum2,grade);
printf(“\nBall Point Snowman\t\t%ldpcs\t\tRp%ld”,jum3,snowman);
printf(“\nBall Point Standard\t\t%ldpcs\t\tRp%ld”,jum4,standard);
printf(“\nBall Point BPT-P\t\t%ldpcs\t\tRp%ld”,jum5,bpt);
printf(“\nBall Point Techjob\t\t%ldpcs\t\tRp%ld”,jum6,techjob);
printf(“\n============================================================\n”);
printf(“============================================================\n”);
printf(“Jumlah\t\t\t\t\t\t:Rp%ld”,harga);
printf(“\nPPN & Potongan\t\t\t\t\t:Rp%ld”,tambahan);
printf(“\nTotal biaya\t\t\t\t\t:Rp%ld”,total);
printf(“\nDi bayar dengan\t\t\t\t\t:Rp%ld”,cash);
printf(“\n============================================================\n”);
if(total>cash)
printf(“kekurangan Pembayaran anda senilai\t\t\t\t\t\t:Rp%ld”,kurang);
if(total printf(“Terima kasih”);
printf(“\n============================================================\n”);
printf(“Tekan 1 untuk Lanjut..!!!: “);
scanf(“%d”,&Next);
clrscr();
printf(“PROGRAM BY: Hand Excel”);
}
    return 0;
}
