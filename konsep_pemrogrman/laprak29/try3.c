#include <stdio.h>
#include <string.h>
struct menu
{
    char kode;
    char nama[30];
    int harga;
};
void clearScreen()
{
#ifdef _WIN32
    system("cls"); // For Windows
#else
    printf("\033[2J\033[H"); // For Linux/Unix
#endif
}
struct nota
{
    char jenis[30];
    int harga_satuan;
    int qty;
    int jumlah_harga;
};

int main()
{
    struct menu fried[] = {
        {'D', "Dada", 5000},
        {'P', "Paha", 4000},
        {'S', "Sayap", 3000}};
    struct nota total[10];

    printf("\t\tToko GFC - Gerobak fried chicken\n\n");
    printf("DAFTAR HARGA : \n\n");
    printf("Kode\t\tJenis\t\t\tHarga Per potong\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%c\t\t%s\t\t\tRp.%d.00", fried[i].kode, fried[i].nama, fried[i].harga);
        printf("\n");
    }
    printf("\n");
    printf("Harga belum termasuk pajak 10%%\n");
    int index = 0, ovr = 0;
    int pajak;
    char jawab;
    do
    {
        int qty;
        char pilihan;
        printf("Masukkan pesanan anda : \n");
        printf("pesanan ke-%d \n", index + 1);
        printf("Jenis [P/D/S] \t: ");
        scanf(" %c", &pilihan);
        // The space before the %c specifier in scanf is used to skip any whitespace characters, including the newline character (\n).
        printf("Jumlah \t\t: ");
        scanf("%d", &qty);
        printf("ada lagi (Y/T) ?: ");
        scanf(" %c", &jawab);
        if (pilihan == 'P' || pilihan == 'p')
        {
            // In C, you cannot assign a string to a character array directly after it’s declared
            strcpy(total[index].jenis, fried[1].nama);
            total[index].harga_satuan = fried[1].harga;
        }
        else if (pilihan == 'D' || pilihan == 'd')
        {
            strcpy(total[index].jenis, fried[0].nama);
            total[index].harga_satuan = fried[0].harga;
        }
        else if (pilihan == 'S' || pilihan == 's')
        {
            strcpy(total[index].jenis, fried[2].nama);
            total[index].harga_satuan = fried[2].harga;
        }
        total[index].qty = qty;
        total[index].jumlah_harga = total[index].qty * total[index].harga_satuan;
        ovr += total[index].jumlah_harga;
        index++;
    } while (jawab == 'y' || jawab == 'Y');
    printf("\n");
    clearScreen();
    printf("Nota belanja anda : \n");
    printf("\t\t\tGEROBAK FRIED CHICKEN \n\n");
    for (int i = 0; i < 70; i++)
    {
        printf("=");
    }
    printf("\n");
    printf("No.\tJenis Potong\tHarga Per Satuan\tQty\tJumlah Harga\n");

    for (int i = 0; i < 70; i++)
    {
        printf("=");
    }
    printf("\n");
    for (int i = 0; i < index; i++)
    {
        printf("%d.\t%s\t\tRp.  %d.00\t\t%d\tRp.  %d.00\n", i + 1, total[i].jenis, total[i].harga_satuan, total[i].qty, total[i].jumlah_harga);
    }
    for (int i = 0; i < 70; i++)
    {
        printf("=");
    }
    printf("\n");
    printf("\t\t\t\t\tJumlah Bayar \tRp.  %d.00\n", ovr);
    pajak = ovr / 10;
    printf("\t\t\t\t\tPajak 10%% \tRp.  %d.00\n", pajak);
    printf("\t\t\t\t\tTotal Bayar \tRp.  %d.00\n\n", ovr + pajak);
    printf("\t\t\tTERIMAKASIH ATAS KUNJUNGANNYA\n");
}