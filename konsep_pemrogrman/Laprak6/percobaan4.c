#include <stdio.h>
int main(){
    int angka;
    printf("Masukkan angka = ");
    scanf("%d", &angka);
    if (angka < 40)
    {
        printf("Nilai huruf adalah E");
    } else if (angka > 40 && angka < 55)
    {
        printf("Nilai huruf adalah D");
    }else if (angka > 55 && angka < 60)
    {
        printf("Nilai huruf adalah C");
    }else if (angka > 60 && angka < 80)
    {
        printf("Nilai huruf adalah B");
    }else if (angka > 80 && angka < 100)
    {
        printf("Nilai huruf adalah A");
    }else {   
        printf("Nilai anda tidak valid");
    }   
}