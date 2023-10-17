#include <stdio.h>

int main()
{
    int nilai_max;
    printf("Masukkan nilai maksimum : ");
    scanf("%d", &nilai_max);

    printf("Bilangan prima hingga %d : ", nilai_max);
    for (int i = 2; i <= nilai_max; i++)
    {
        int prima = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                prima = 0;
                break;
            }
        }
        if (prima)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}
