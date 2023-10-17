#include <stdio.h>
int main (){
    float bil1, bil2;
    printf("masukkan bilangan 1 = ");
    scanf("%f", &bil1);
    printf("masukkan bilangan 2 = ");
    scanf("%f", &bil2);
    if (bil2 == 0){
        printf("pembagi 0 tidak bisa");
    } else {
        float hasil = bil1 / bil2;
        printf("Hasil pembagian bilangan 1 dan bilangan 2 adalah %.3f", hasil);
    }
}