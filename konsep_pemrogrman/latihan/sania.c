#include <stdio.h>

int main()
{
    int n;

    printf("Masukkan jumlah karakter yang akan dihitung: ");
    scanf("%d", &n);

    char arr[n];
    int jumlah = 0;
    char huruf[100];
    int frekuensi[100];
    for (int i = 0; i < n; i++)
    {
        int muncul = 0;
        printf("Masukkan karakter ke-%d : ", i + 1);
        scanf(" %c", &arr[i]);
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == huruf[j])
            {
                frekuensi[j]++;
                muncul = 1;
                break;
            }
        }
        if (!muncul)
        {
            huruf[jumlah] = arr[i];
            frekuensi[jumlah] = 1;
            jumlah++;
        }
    }
    for (int i = 0; i < jumlah; i++)
    {
        printf("frekuensi %c = %d", huruf[i], frekuensi[i]);
        printf("\n");
    }

    return 0;
}