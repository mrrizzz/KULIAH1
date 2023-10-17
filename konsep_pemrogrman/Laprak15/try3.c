#include <stdio.h>
void naikdua(int *x, int *y);
int main()
{
    int bil1, bil2;
    printf("masukkan bilangan 1 = ");
    scanf("%d", &bil1);
    printf("masukkan bilangan 2 = ");
    scanf("%d", &bil2);
    naikdua(&bil1, &bil2);
    printf("bilangan setelah dinaikkan 2 adalah %d dan %d ", bil1, bil2);
}
void naikdua(int *x, int *y)
{
    *x += 2;
    *y += 2;
}