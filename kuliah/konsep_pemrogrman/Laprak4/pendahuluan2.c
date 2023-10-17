#include<stdio.h>
int main(){
    int gajipokok, anak, pajak, thr, polis, transport, ta, tis, mk, hk; 
    polis = 20000;
    printf("Masukkan gaji pokok = ");
    scanf("%d", &gajipokok);
    printf("Masukkan jumlah anak = ");
    scanf("%d", &anak);
    printf("Masukkan lama masa kerja (dalan tahun)= ");
    scanf("%d", &mk);
    printf("Masukkan lama hari kerja  dalam satu bulan = ");
    scanf("%d", &hk);
    ta = gajipokok * 0.05 * anak;
    tis = gajipokok * 0.1;
    thr = 500000 * mk;
    transport = 3000 * hk;
    pajak = (gajipokok + ta + tis) * 0.15 ; 
    gajipokok += (ta + tis + thr + transport - polis - pajak);
    printf("Gaji bersih anda adalah %d", gajipokok);
}