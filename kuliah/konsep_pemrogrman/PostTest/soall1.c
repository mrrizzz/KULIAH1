#include <stdio.h>

int fungsib(int x);

int main()
{
    int input, biner;
    printf("Masukkan bilangan desimal: ");
    scanf("%d", &input);
    biner = fungsib(input);
    printf("Biner: %d", biner);
    return 0; // Tambahkan ini untuk mengakhiri program dengan benar.
}

int fungsib(int x)
{
    int hasil = 0;
    int pangkatDua = 1; // Ini akan digunakan untuk menghitung nilai biner.

    while (x > 0)
    {
        int sisa = x % 2;
        x = x / 2;
        hasil = hasil + sisa * pangkatDua;
        pangkatDua = pangkatDua * 10; // Naikkan pangkat 10 untuk menggabungkan bit-binernya.
    }

    return hasil; // Mengembalikan hasil konversi biner.
}
