#include<stdio.h>
int main(){
    char kalimat;
    int jumlah_spasi = 0, jumlah_kapital=0, jumlah_huruf_kecil=0, jumlah_angka=0;
    printf("Masukkan kalimat ");
    while (kalimat  != '\n')
    {
        scanf("%c",&kalimat);
        if (kalimat == ' ')
        {
            jumlah_spasi++;
        } 
        if (kalimat >= 65 && kalimat <= 90)
        {
            jumlah_kapital++;
        }
        if (kalimat >= 97 && kalimat <= 122)
        {
            jumlah_huruf_kecil++;
        }
        if (kalimat <= 57 && kalimat >= 48)
        {
            jumlah_angka++;
        }
    }
    printf("jumlah spasi ada %d\n", jumlah_spasi);
    printf("jumlah kapital ada %d\n", jumlah_kapital);
    printf("jumlah huruf kecil ada %d\n", jumlah_huruf_kecil);
    printf("jumlah angka ada %d", jumlah_angka);   
}