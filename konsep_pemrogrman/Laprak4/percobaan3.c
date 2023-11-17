#include<stdio.h>
int main(){
    int tiket, sisa, bayar, total;
    printf("Masukkan jumlah tiket yang ingin anda beli = ");
    scanf("%d",&tiket );
    sisa = tiket % 3;
    bayar = tiket/3 * 100000;
    total = sisa * 50000 + bayar;
    printf("Uang yang harus anda bayar adalah %d", total);
}