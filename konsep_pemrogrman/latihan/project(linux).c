#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Barang
{
    char nama[20];
    int kode;
    int harga;
};

struct Keranjang
{
    struct Barang barang;
    int jumlah;
};
int totalHargaSeluruh = 0;
void clearScreen()
{
#ifdef _WIN32
    system("cls"); // For Windows
#else
    printf("\033[2J\033[H"); // For Linux/Unix
#endif
}
void inisialisasi(struct Barang *nasiGoreng, struct Barang *ayamGeprek, struct Barang *mieGoreng, struct Barang *kwetiauGoreng, struct Barang *kwetiauKuah, struct Barang *esTeh, struct Barang *esJeruk, struct Barang *sodaGembira, struct Barang *esSirup, struct Barang *sopBuah)
{
    // Nasi Goreng
    strcpy(nasiGoreng->nama, "Nasi Goreng");
    nasiGoreng->kode = 11;
    nasiGoreng->harga = 12000;

    // Ayam Geprek
    strcpy(ayamGeprek->nama, "Ayam Geprek");
    ayamGeprek->kode = 12;
    ayamGeprek->harga = 10000;

    // Mie Goreng
    strcpy(mieGoreng->nama, "Mie Goreng");
    mieGoreng->kode = 13;
    mieGoreng->harga = 8000;

    // Kwetiau Goreng
    strcpy(kwetiauGoreng->nama, "Kwetiau Goreng");
    kwetiauGoreng->kode = 14;
    kwetiauGoreng->harga = 18000;

    // Kwetiau Kuah
    strcpy(kwetiauKuah->nama, "Kwetiau Kuah");
    kwetiauKuah->kode = 15;
    kwetiauKuah->harga = 16000;

    // Es Teh
    strcpy(esTeh->nama, "Es Teh");
    esTeh->kode = 21;
    esTeh->harga = 3000;

    // Es Jeruk
    strcpy(esJeruk->nama, "Es Jeruk");
    esJeruk->kode = 22;
    esJeruk->harga = 5000;

    // Soda Gembira
    strcpy(sodaGembira->nama, "Soda Gembira");
    sodaGembira->kode = 23;
    sodaGembira->harga = 8000;

    // Es Sirup
    strcpy(esSirup->nama, "Es Sirup");
    esSirup->kode = 24;
    esSirup->harga = 6000;

    // Sop Buah
    strcpy(sopBuah->nama, "Sop Buah");
    sopBuah->kode = 25;
    sopBuah->harga = 8000;
}

void tampilkanMenu()
{
    printf("|=========================================|\n");
    printf("|            Pilih Menu Makanan           |\n");
    printf("|=========================================|\n");
    printf("|Makanan              Kode          Harga |\n");
    printf("|=========================================|\n");
    printf("| 1. Nasi goreng       11        Rp.12000|\n");
    printf("| 2. Ayam Geprek       12        Rp.10000|\n");
    printf("| 3. Mie Goreng        13         Rp.8000|\n");
    printf("| 4. Kwetiau Goreng    14        Rp.18000|\n");
    printf("| 5. Kwetiau kuah      15        Rp.16000|\n");
    printf("|=========================================|\n\n");

    printf("|=========================================|\n");
    printf("|            Pilih Menu Minuman           |\n");
    printf("|=========================================|\n");
    printf("|Minuman              Kode          Harga |\n");
    printf("|=========================================|\n");
    printf("| 1. Es Teh            21         Rp.3000|\n");
    printf("| 2. Es Jeruk          22         Rp.5000|\n");
    printf("| 3. Soda Gembira      23         Rp.8000|\n");
    printf("| 4. Es Sirup          24         Rp.6000|\n");
    printf("| 5. Sop Buah          25         Rp.8000|\n");
    printf("|=========================================|\n");
}

void tambahKeKeranjang(struct Keranjang *keranjang, struct Barang *barang, int jumlah)
{
    keranjang->barang = *barang;
    keranjang->jumlah = jumlah;
}

void tampilkanStrukBelanja(struct Keranjang *keranjang, int jumlahBarang)
{

    printf("|=====================================================|\n");
    printf("|                   Struk Belanja                     |\n");
    printf("|=====================================================|\n");
    printf("| No   Nama Barang       Harga     Jumlah     Total   |\n");
    printf("|=====================================================|\n");

    for (int i = 0; i < jumlahBarang; i++)
    {
        int totalHargaBarang = keranjang[i].barang.harga * keranjang[i].jumlah;
        totalHargaSeluruh += totalHargaBarang;

        printf("| %-4d %-17s Rp.%-7d %-6d  Rp.%-7d|\n", i + 1, keranjang[i].barang.nama, keranjang[i].barang.harga, keranjang[i].jumlah, totalHargaBarang);
        printf("|=====================================================|\n");
    }

    printf("|        Total Harga Seluruhnya             Rp.%-7d|\n", totalHargaSeluruh);
    printf("|=====================================================|\n");
}
void pembayaran()
{
    printf("|        Total Harga Seluruhnya             Rp.%-7d|\n", totalHargaSeluruh);
    printf("|=====================================================|\n");
}

int main()
{
    int pilihan = -1;
    struct Barang nasiGoreng, mieGoreng, ayamGeprek, kwetiauGoreng, kwetiauKuah, esTeh, esJeruk, sodaGembira, esSirup, sopBuah;
    struct Keranjang keranjang[10];
    int jumlahBarang = 0;

    inisialisasi(&nasiGoreng, &mieGoreng, &ayamGeprek, &kwetiauGoreng, &kwetiauKuah, &esTeh, &esJeruk, &sodaGembira, &esSirup, &sopBuah);

    while (pilihan != 0)
    {
        printf("\nMasukkan pilihan anda\n");
        printf("1. Tampilkan Menu\n");
        printf("2. Tambah Barang ke Keranjang\n");
        printf("3. Tampilkan Struk Belanja\n");
        printf("4. Pembayaran\n");
        printf("0. Keluar\n");
        printf("=================================\n");
        printf("Pilihan = ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        case 1:
            clearScreen();
            tampilkanMenu();
            break;
        case 2:
            clearScreen();
            if (jumlahBarang < 10)
            {
                do
                {
                    int kode, jumlah;
                    printf("Masukkan kode barang yang akan ditambahkan ke keranjang (klik 0 jika ingin keluar): ");
                    scanf("%d", &kode);
                    if (kode == 0)
                    {
                        system("cls");
                        break;
                    }
                    printf("Jumlah pesanan: ");
                    scanf("%d", &jumlah);

                    switch (kode)
                    {
                    case 11:
                        tambahKeKeranjang(&keranjang[jumlahBarang], &nasiGoreng, jumlah);
                        break;
                    case 12:
                        tambahKeKeranjang(&keranjang[jumlahBarang], &ayamGeprek, jumlah);
                        break;
                    case 13:
                        tambahKeKeranjang(&keranjang[jumlahBarang], &mieGoreng, jumlah);
                        break;
                    case 14:
                        tambahKeKeranjang(&keranjang[jumlahBarang], &kwetiauGoreng, jumlah);
                        break;
                    case 15:
                        tambahKeKeranjang(&keranjang[jumlahBarang], &kwetiauKuah, jumlah);
                        break;
                    case 21:
                        tambahKeKeranjang(&keranjang[jumlahBarang], &esTeh, jumlah);
                        break;
                    case 22:
                        tambahKeKeranjang(&keranjang[jumlahBarang], &esJeruk, jumlah);
                        break;
                    case 23:
                        tambahKeKeranjang(&keranjang[jumlahBarang], &sodaGembira, jumlah);
                        break;
                    case 24:
                        tambahKeKeranjang(&keranjang[jumlahBarang], &esSirup, jumlah);
                        break;
                    case 25:
                        tambahKeKeranjang(&keranjang[jumlahBarang], &sopBuah, jumlah);
                        break;
                    default:
                        printf("Kode barang tidak valid.\n");
                        break;
                    }
                    jumlahBarang++;
                } while (1);
            }
            else
            {
                printf("Keranjang sudah penuh. Tidak dapat menambahkan barang lagi.\n");
            }
            break;
        case 3:
            clearScreen();
            tampilkanStrukBelanja(keranjang, jumlahBarang);
            break;
        case 0:
            printf("Terimakasih Telah Berkunjung\n");
            break;
        default:
            printf("Pilihan tidak valid.\n");
            break;
        }
    }

    return 0;
}
