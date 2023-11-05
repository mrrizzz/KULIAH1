#include <stdio.h>
int main()
{
    char nama[100], initial[3];
    int kata = 0, indeks = 0;
    printf("masukkan nama panjang anda : ");
    fgets(nama, sizeof(nama), stdin);
    while (nama[indeks] != 0)
    {
        if (kata < 3 && (indeks == 0 || nama[indeks - 1] == ' '))
        {
            initial[kata] = nama[indeks];
            kata++;
        }
        indeks++;
    }
    printf("inisial : ");
    for (int i = 0; i < kata; i++)
    {
        if (initial[i] >= 'a' && initial[i] <= 'z')
        {
            initial[i] -= 32;
        }
        printf("%c", initial[i]);
    }
}