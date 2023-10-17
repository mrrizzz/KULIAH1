#include <stdio.h>
#define PI 3.14159f
float radian(int x);
int main()
{
    float hasil, rad;
    int psisi, drjt;
    printf("masukkan sudut BAC = ");
    scanf("%d", &drjt);
    printf("masukkan panjang sisi AB = ");
    scanf("%d", &psisi);
    rad = radian(drjt);
    hasil = rad * psisi;
    printf("panjang BC = %.2f", hasil);
}
float radian(int x)
{
    return x * PI / 180.0f;
}