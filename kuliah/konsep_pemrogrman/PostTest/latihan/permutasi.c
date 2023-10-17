#include <stdio.h>
int main()
{
    int batas, hasil = 0, banyak;
    printf("masukkan banyak bilangan = ");
    scanf("%d", &batas);
    for (int i = 0; i <= batas; i++)
    {
        hasil += hasil;
        printf("%d ", hasil);
    }
}