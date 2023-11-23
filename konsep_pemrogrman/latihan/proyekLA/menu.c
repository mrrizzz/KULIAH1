#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "variable.h"
#include "display.h"
void displayMenu(struct menu *jenis, int size, int total, struct nota *nota, int batasAwal, int batasAkhir);
// MENU FUNCTION
void pesanMakanan()
{
    struct menu makanan[] = {
        {10, "Spagheti", 10000},
        {11, "Capjay\t", 10000},
        {12, "Nasi Goreng", 12000},
        {13, "Tempe Penyet", 8000},
        {14, "Pecel Lele", 11000},
        {15, "Kwetiau Goreng", 15000},
        {16, "Gurami Bakar", 32000},
        {17, "Ayam Goreng", 22000},
        {18, "Bebek Goreng", 32000},
        {19, "Mujaer Bakar", 50000}};
    int batasAwal = 10, batasAkhir = 20;
    int sizeMakanan = sizeof(makanan) / sizeof(makanan[0]);
    displayMenu(makanan, sizeMakanan, totalMakanan, notaMakanan, batasAwal, batasAkhir);
}
void pesanMinuman()
{
    struct menu minuman[] = {
        {20, "Es Teh \t", 10000},
        {21, "Teh Hangat", 10000},
        {22, "Es Jeruk", 12000},
        {23, "Jeruk Panas", 8000},
        {24, "Thai Tea", 11000},
        {25, "Es Degan", 15000},
        {26, "Soda\t", 32000},
        {27, "Smoothie", 22000},
        {28, "Milk Shake", 32000},
        {29, "Air Putih", 50000}};
    int batasAwal = 20;
    int batasAkhir = 30;
    int sizeMinuman = sizeof(minuman) / sizeof(minuman[0]);
    displayMenu(minuman, sizeMinuman, totalMinuman, notaMinuman, batasAwal, batasAkhir);
}
void tampilkanKeranjang()
{
    printGarisDouble();
    printf("\t\t\tALPHALINK RESTAURANT\n");
    printGaris();
    printf("\t\t\t   KERANJANG ANDA \n");
    printGarisDouble();
    displayNota();
    keluar();
}

void checkout()
{
    printGarisDouble();
    printf("\t\t\tALPHALINK RESTAURANT\n");
    printGaris();
    printf("\t\t\t   STRUK ANDA \n");
    printGarisDouble();
    displayNota();
    printGarisDouble();
    int hargaAkhir, pajak, discount = 0;
    printf("\t\t\t\t\tTotal Harga \tRp.  %d.00\n", overallPrice);
    pajak = overallPrice / 10;
    printf("\t\t\t\t\tPajak 10%% \tRp.  %d.00\n", pajak);
    if (overallPrice > 500000)
    {
        discount = overallPrice / 5;
        printf("\t\t\t\t\tDiskon 20%% \tRp.  %d.00\n", discount);
    }
    hargaAkhir = overallPrice + pajak - discount;
    printf("\t\t\t\t\tTotal Bayar \tRp.  %d.00\n\n", hargaAkhir);

    int ketik;
    printf("Ketik 1 untuk bayar atau 0 untuk keluar : ");
    scanf("%d", &ketik);
    if (ketik == 1)
    {

        printf("\nMasukkan uang anda : Rp.  ");
        int bayar, kembalian;
        scanf("%d", &bayar);
        fflush(stdin);
        if (bayar > hargaAkhir)
        {
            kembalian = bayar - hargaAkhir;
            printf("Kembalian anda Rp.  %d\n", kembalian);
        }
        else if (bayar < hargaAkhir)
        {
            bool kurang = true;
            int tambal;
            while (kurang)
            {
                printf("Uang anda kurang = %d\n", hargaAkhir - bayar);
                printf("Lengkapi kekurangan anda : ");
                scanf("%d", &tambal);
                bayar += tambal;
                if (bayar >= hargaAkhir)
                {
                    kurang = false;
                    break;
                }
            }
        }
        else
        {
            printf("Uang anda pas\n");
        }
        printf("\n\t\t\tTERIMAKASIH ATAS KUNJUNGAN ANDA\n");
    }
    else
    {
        keluar();
    }
}
