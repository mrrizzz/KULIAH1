#include <stdio.h>
int main (){
    int bil1 , bil2, pil;
    printf("Masukkan nilai bilangan 1 = ");
    scanf("%d", &bil1);
    printf("Masukkan nilai bilangan 2 = ");
    scanf("%d", &bil2);
    printf("Menu Matematika :\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n");
    printf("Masukkan Pilihan anda ");
    scanf("%d", &pil);
    if (pil == 1)
    {
        printf("Hasil operasi tersebut adalah %d" , bil1 + bil2);
    }else if (pil == 2)
    {
       printf("Hasil operasi tersebut adalah %d" , bil1 - bil2);
    }else if (pil == 3)
    {
       printf("Hasil operasi tersebut adalah %d" , bil1 * bil2);
    }else if (pil == 4)
    {
        printf("Hasil operasi tersebut adalah %.3f" , (float) bil1 / bil2);
    }else {printf("pilihan tidak tersedia");}
}