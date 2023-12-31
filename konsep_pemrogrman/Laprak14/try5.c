#include <stdio.h>

float konversi_suhu(float n, char asal, char tujuan)
{
    float hasil;
    if (asal == 'C')
    {
        if (tujuan == 'F')
        {
            hasil = n * 9 / 5 + 32;
        }
        else if (tujuan == 'R')
        {
            hasil = n * 4 / 5;
        }
    }
    else if (asal == 'F')
    {
        if (tujuan == 'C')
        {
            hasil = (n - 32) * 5 / 9;
        }
        else if (tujuan == 'R')
        {
            hasil = (n - 32) * 4 / 9;
        }
    }
    else if (asal == 'R')
    {
        if (tujuan == 'C')
        {
            hasil = n * 5 / 4;
        }
        else if (tujuan == 'F')
        {
            hasil = (n * 9 / 4) + 32;
        }
    }else
    {
        hasil = printf("Input tidak valid");
    }
    return hasil;
}

int main()
{
    float input, hasil;
    char asal, tujuan;
    printf("Input: ");
    scanf(" %f", &input);
    printf("Asal: ");
    scanf(" %c", &asal);
    printf("Tujuan: ");
    scanf(" %c", &tujuan);
    hasil = konversi_suhu(input, asal, tujuan);
    printf("Hasil konversi %g %c adalah %g %c\n", input, asal, hasil, tujuan);
}
