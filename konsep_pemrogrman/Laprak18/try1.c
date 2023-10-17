#include <stdio.h>
int main()
{
    int banyak;
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
}