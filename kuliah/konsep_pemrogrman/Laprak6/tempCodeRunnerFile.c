#include <stdio.h>
int main(){
    int angka;
    printf("masukkan angka = ");
    scanf("%d",&angka );
    if (angka == 1)
    {
       printf("Hari Minggu!");
    }else if (angka == 2)
    {
       printf("Hari Senin!");
    }else if (angka == 3)
    {
       printf("Hari Selasa!");
    }else if (angka == 4)
    {
       printf("Hari Rabu!");
    }else if (angka == 5)
    {
       printf("Hari Kamis!");
    }else if (angka == 6)
    {
       printf("Hari Jumat!");
    }else if (angka == 7)
    {
       printf("Hari Sabtu!");
    }else
    {  printf("Hari tidak valid");
    }  
}