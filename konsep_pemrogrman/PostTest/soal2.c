#include <stdio.h>
int main(){
    int item, kaos, kb, ct, total;
    printf("Harga barang adalah sebagai berikut :\n kaos \t\t\t= 100.000\n kemeja batik \t\t= 150.000\n celana training \t= 175.000\n");
    printf("Masukkan item yang ingin anda beli \n");
    printf("kaos = ");
    scanf("%d",&kaos );
    printf("kemeja batik = ");
    scanf("%d",&kb );
    printf("celana training = ");
    scanf("%d",&ct );
    total = kb * 150000 + kaos * 100000 + ct * 175000;
    item = kb + ct + kaos;
    if (item == 2)
    {
        total *= 0.85;
        printf("anda mendapat diskon sebesar 15%%\n");
    }else if (item == 3 || item == 4)
    {
       total *= 0.8;
        printf("anda mendapat diskon sebesar 20%%\n");
    }else if (item >= 5)
    {
        total *= 0.65;
        printf("anda mendapat diskon sebesar 35%%\n");
    }else {
        printf("anda tidak mendapat diskon\n");
    }
    printf ("total yang harus anda bayar adalah %d", total);
}