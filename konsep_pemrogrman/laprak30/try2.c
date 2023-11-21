#include <stdio.h>
#include <string.h>
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
    int diskon;
    int jumlah_harga;
};
struct menu
{
    char ukuran;
    char nama[30];
    int harga;
};
void printNota(int jumlah, struct nota total[jumlah], int pajak, int ovr)
{
    printf("Nota belanja anda : \n");
    printf("\t\t\tTOKO LARIS \n\n");
    for (int i = 0; i < 80; i++)
    {
        printf("=");
    }
    printf("\n");
    printf("No.\tSatuan Ukuran\tHarga Satuan\tQty\tDiskon\t\tJumlah Harga\n");
    for (int i = 0; i < 80; i++)
    {
        printf("=");
    }
    printf("\n");
    for (int i = 0; i < jumlah; i++)
    {
        printf("%d.\t%s\t\tRp. %d.00\t%d\tRp. %d\tRp. %d.00\n", i + 1, total[i].jenis, total[i].harga_satuan, total[i].qty, total[i].diskon, total[i].jumlah_harga);
    }
    for (int i = 0; i < 80; i++)
    {
        printf("=");
    }
    printf("\n");
    printf("\t\t\t\t\tJumlah Bayar \tRp.  %d.00\n", ovr);
    printf("\t\t\t\t\tPajak 10%% \tRp.  %d.00\n", pajak);
    printf("\t\t\t\t\tTotal Bayar \tRp.  %d.00\n\n", ovr + pajak);
    printf("\t\t\tTERIMAKASIH ATAS KUNJUNGANNYA\n");
}
void input(int *jumlah, int *ovr, int *pajak, struct nota total[*jumlah], struct menu baju[3])
{
    char pilihan;
    printf("Masukkan pesanan anda : ");
    scanf("%d", jumlah);
    int qty[*jumlah];
    for (int index = 0; index < *jumlah; index++)
    {
        printf("\npesanan ke-%d \n", index + 1);
        printf("Jenis [S/M/L] \t: ");
        scanf(" %c", &pilihan);
        // The space before the %c specifier in scanf is used to skip any whitespace characters, including the newline character (\n).
        printf("Jumlah \t\t: ");
        scanf("%d", &qty[index]);
        if (pilihan == 'S' || pilihan == 's')
        {
            // In C, you cannot assign a string to a character array directly after it’s declared
            strcpy(total[index].jenis, baju[0].nama);
            total[index].harga_satuan = baju[0].harga;
        }
        else if (pilihan == 'M' || pilihan == 'm')
        {
            strcpy(total[index].jenis, baju[1].nama);
            total[index].harga_satuan = baju[1].harga;
        }
        else if (pilihan == 'L' || pilihan == 'l')
        {
            strcpy(total[index].jenis, baju[2].nama);
            total[index].harga_satuan = baju[2].harga;
        }
        total[index].qty = qty[index];
        total[index].jumlah_harga = total[index].qty * total[index].harga_satuan;
        if (qty[index] > 10)
        {
            total[index].diskon = total[index].jumlah_harga * 0.2;
            total[index].jumlah_harga -= total[index].diskon;
        }
        ovr += total[index].jumlah_harga;
        *pajak = *ovr / 10;
    }
}
int main()
{
    struct menu baju[] = {
        {'S', "Small", 36000},
        {'M', "Medium", 43000},
        {'L', "Large", 62000}};
    struct nota total[10];
    printf("\t\tTOKO LARIS\n\n");
    printf("\t\tDAFTAR HARGA : \n");
    printf("ukuran\tJenis\t\tHarga Per potong\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%c\t%s\t\tRp.%d.00", baju[i].ukuran, baju[i].nama, baju[i].harga);
        printf("\n");
    }
    printf("\n");
    printf("Dapatkan diskon 20%% untuk pembelian lebih dari 10 potong...\nJangan lupa, pajaknya ya.... <10%% x harga diskon>\n");

    int jumlah, ovr = 0;
    int pajak;
    input(&jumlah, &ovr, &pajak, total, baju);
    printf("\n");
    clearScreen();
    printNota(jumlah, total, pajak, ovr);
}
