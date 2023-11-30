#include <stdio.h>
#include <string.h>
int main()
{
    char kalimat[30];
    printf("masukkan kalimat = ");
    fgets(kalimat, sizeof(kalimat), stdin);
    int muncul = 0;
    char huruf;
    printf("masukkan huruf yang dihitung = ");
    scanf(" %c", &huruf);
    int panjangkal = strlen(kalimat);
    for (int i = 0; i < panjangkal; i++)
    {
        if (kalimat[i] == huruf)
        {
            muncul++;
        }
    }
    printf("jumlah huruf adalah : %d\n", muncul);
}