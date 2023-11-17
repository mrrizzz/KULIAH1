#include <stdio.h>
int faktorial(int x);
int permutasi(int n, int r);
int kombinasi(int n, int r);
int main()
{
    int n, r;
    printf("masukkan n = ");
    scanf("%d", &n);
    printf("masukkan r = ");
    scanf("%d", &r);
    printf("permutasi = %d\n", permutasi(n, r));
    printf("kombinasi = %d", kombinasi(n, r));
}
int faktorial(int x)
{
    int fakt = 1;
    for (int i = x; i > 0; i--)
    {
        fakt *= i;
    }
    return fakt;
}
int permutasi(int n, int r)
{
    return faktorial(n) / faktorial(n - r);
}
int kombinasi(int n, int r)
{
    return permutasi(n, r) / faktorial(r);
}