#include <stdio.h>
int main()
{
    int tinggi;
    printf("masukkan bilangan = ");
    scanf("%d", &tinggi);
    for (int i = 1; i <= tinggi; i++)
    {
        for (int j = 0; j <= tinggi - i - 1; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%3d ", j);
        }
        for (int k = i - 1; k > 0; k--)
        {
            printf("%3d ", k);
        }
        printf("\n");
    }
    for (int i = tinggi - 1; i > 0; i--)
    {
        for (int j = tinggi - i - 1; j >= 0; j--)
        {
            printf("  ");
        }
        for (int l = 1; l <= i; l++)
        {
            printf("%3d ", l);
        }
        for (int j = i - 1; j > 0; j--)
        {
            printf("%3d ", j);
        }
        printf("\n");
    }
}