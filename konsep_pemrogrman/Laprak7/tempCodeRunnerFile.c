#include <stdio.h>
int main()
{
    int pilihan;
    float sisi, volumeK;
    float radL, luasL;
    float radT, t , volT;
    printf("Masukkan pilihan anda\n");
    printf("1. Menghitung volume kubus\n2. Menghitung luas lingkaran\n3. Menghitung Volume tabung\n");
    scanf("%d", &pilihan);
    switch(pilihan){
        case 1:
            printf("Masukkan panjang sisi = ");
            scanf("%f", &sisi);
            volumeK = sisi * sisi * sisi;
            printf("Volume kubus = %g", volumeK);
            break;
        case 2:
            printf("Masukkan panjang jari jari = ");
            scanf("%f", &radL);
            luasL = radL * radL * 3.14;
            printf("Luas lingkaran = %g", luasL);
            break;
        case 3:
            printf("Masukkan panjang jari jari dan tinggi silinder = \n(format : jarijari, tinggi)\n");
            scanf("%f, %f", &radT, &t);
            volT = radT * radT * 3.14 * t;
            printf("Volume tabung = %g", volT);
            break;
        default:
            printf("anda ngawur");
    }
}