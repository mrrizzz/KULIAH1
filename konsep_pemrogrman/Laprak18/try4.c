#include <stdio.h>
int main()
{
    int maks, banyak;
    printf("masukkan banyak n = ");
    scanf("%d", &banyak);
    int nilai[banyak];
    for (int i = 0; i < banyak; i++)
    {
        printf("masukkan nilai ke %d = ", i + 1);
        scanf("%d", &nilai[i]);
    }
    printf("nilai nilai dari array tersebut = ");
    for (int i = 0; i < banyak; i++)
    {
        printf("%d%s", nilai[i], i == banyak - 1 ? "" : ", ");
    }
    printf("\n");
    for (int i = 0; i < banyak; i++)
    {
        maks = nilai[0];
        if (nilai[i] > nilai[i - 1])
        {
            maks = nilai[i];
        }
    }
    printf("nilai maksimumnya adalah = %d", maks);
    printf("\n");
}