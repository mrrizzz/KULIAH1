#include <stdio.h>
int main(){
    int angka;
    printf("masukkan angka = ");
    scanf("%d",&angka );
    switch (angka)
    {   case 1:
       printf("Hari Minggu!");
        break;
        case 2:
       printf("Hari Senin!");
        break;
        case 3:
       printf("Hari Selasa!");
        break;
        case 4:
       printf("Hari Rabu!");
        break;
        case 5:
       printf("Hari Kamis!");
        break;
        case 6:
       printf("Hari Jumat!");
        break;
        case 7:
       printf("Hari Sabtu!");
        break;
        default:
      printf("Hari tidak valid");
    }  
}