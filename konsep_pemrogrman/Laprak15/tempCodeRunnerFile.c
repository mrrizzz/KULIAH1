#include <stdio.h>
void tukar(int *x, int *y);
int main()
{
    int bil1, bil2;
    printf("masukkan bilangan 1 = ");
    scanf("%d", &bil1);
    printf("masukkkan bilangan 2 = ");
    scanf("%d", &bil2);
    tukar(&bil1, &bil2);
    printf("urutan dari yang terbesar adalah = %d %d", bil1, bil2);
}
void tukar(int *x, int *y)
{
    int temp;
    if (*x < *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
}