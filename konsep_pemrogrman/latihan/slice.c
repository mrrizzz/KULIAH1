#include <stdio.h>
int main()
{
    int jumlahElemen;
    printf("masukkan jumlah elemen (maks 10) : ");
    scanf("%d", &jumlahElemen);
    int arr[jumlahElemen];
    if (jumlahElemen <= 10)
    {
        /* code */

        for (int i = 0; i < jumlahElemen; i++)
        {
            printf("data[%d] = ", i);
            scanf("%d", &arr[i]);
            getchar();
        }
        int sisipan, posisi;

        printf("bilangan yang mau disisipkan = ");
        scanf("%d", &sisipan);
        printf("Pada posisi = ");
        scanf("%d", &posisi);
        printf("isi array sekarang : \n");
        int arr2[jumlahElemen + 1];
        for (int i = jumlahElemen + 1; i > posisi; i--)
        {

            arr2[i] = arr[i - 1];
        }
        arr2[posisi] = sisipan;
        for (int i = 0; i < posisi; i++)
        {
            arr2[i] = arr[i];
        }

        for (int i = 0; i < jumlahElemen + 1; i++)
        {

            printf("data[%d] : %d\n", i, arr2[i]);
        }
    }
    else
        printf("Invalid program\n");
}