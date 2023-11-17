#include<stdio.h>
#define KURS 15323
int main()
{
    int uang, rupiah;
    printf("Masukkan uang anda dalam dolar = ");
    scanf("%d", &uang);
    rupiah = uang * KURS;
    printf("uang anda dalam dolar adalah %d", rupiah);
}