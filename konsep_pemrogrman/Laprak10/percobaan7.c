#include<stdio.h>
int main(){
    int harga_awal, tabungan, sisa, bunga, durasi=0;
    printf("masukkan harga awal daftar haji = ");
    scanf("%d", &harga_awal);
    printf("masukkan cicilan tiap bulan = ");
    scanf("%d", &tabungan);
    printf("masukkan rata-rata kenaikan tiap tahun (%%) = ");
    scanf("%d", &bunga);  
    sisa = harga_awal;
    while (sisa > 0)
    {
        sisa -= tabungan;
        durasi++;
        if (durasi % 12 == 0)
        {
            sisa += harga_awal*bunga*0.01;
        }
        
    }
    printf("waktu yang dibutuhkan untuk membayar adalah %d bulan", durasi);
}