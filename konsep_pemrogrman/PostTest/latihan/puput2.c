#include <stdio.h>
int akarKuadrat(int, int);
int main()
{
    int n, B;
    printf("Masukkan nilai n = ");
    scanf("%d", &n);
    printf("Masukkan nilai B = ");
    scanf("%d", &B);
    printf("Nilai A ke n = %d", akarKuadrat(n, B));
}
int akarKuadrat(int x, int y)
{
    if (x == 0)
    {
        return (y / 2 + (y / (y / 2))) / 2;
    }
    else
    {
        return akarKuadrat(x - 1, y);
    }
}