#include <stdio.h>

void input(int nilai[], int *banyak)
{
    printf("Masukkan banyak data = ");
    scanf("%d", banyak);
    for (int i = 0; i < *banyak; i++)
    {
        printf("Masukkan nilai ke %d :", i + 1);
        scanf("%d", &nilai[i]);
    }
}
void findmax(int nilai[], int banyak)
{
    int maks = nilai[0];
    for (int i = 0; i < banyak; i++)
    {
        if (nilai[i] > maks)
        {
            maks = nilai[i];
        }
    }
    printf("nilai maksimumnya adalah = %d", maks);
    printf("\n");
}
int main()
{
    int banyak;
    int nilai[100];
    input(nilai, &banyak);
    findmax(nilai, banyak);
}