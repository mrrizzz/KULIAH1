#include<stdio.h>
int main(){
    int harga_awal, tabungan, sisa, bunga, durasi=0, bonus;
    printf("masukkan harga awal daftar haji = ");
    scanf("%d", &harga_awal);
    printf("masukkan cicilan tiap bulan = ");
    scanf("%d", &tabungan);
    printf("masukkan rata-rata kenaikan tiap tahun (%%) = ");
    scanf("%d", &bunga);  
    printf("masukkan bonus gaji per 6 bulan = ");
    scanf("%d", &bonus);      
    sisa = harga_awal;
    while (sisa >= 0)
    {
        sisa -= tabungan ;
        durasi++ ;
        if (durasi % 12 == 0)
        {
            sisa += harga_awal*bunga*0.01;
        }
        if (durasi % 6 == 0)
        {
            sisa -= bonus;
        }

    }
    printf("waktu yang dibutuhkan untuk membayar adalah %d bulan", durasi);
}