// #include <stdio.h>
// int main()
// {
//     int jumlah, hari, minggu, tahun;
//     printf("masukkan jumlah hari = ");
//     scanf("%d", &jumlah);
//     tahun = jumlah / 365;
//     jumlah %= 365;
//     minggu = jumlah / 7;
//     jumlah %= 7;
//     hari = jumlah;
//     printf("maka %d hari, %d minggu, %d tahun", hari, minggu, tahun

// #include <stdio.h>
// int main()
// {
//     int jam, menit, input;
//     printf("masukkan nilai dalam menit");
//     scanf("%d", &input);
//     jam = input / 60;
//     input %= 60;
//     menit = input;
//     printf("%d jam %d menit", jam, menit);

// #include <stdio.h>
// int cekKalender(int dd, int mm, int yy)
// {
//     int feb;
//     if (yy % 100 == 0)
//     {
//         feb = (yy % 400 == 0) ? 29 : 28;
//     }
//     else if (yy % 4 == 0)
//     {
//         feb = 29;
//     }
//     else
//     {
//         feb = 28;
//     }
//     if (mm == 2)
//     {
//         return dd <= feb ? 1 : 0;
//     }
//     else if (mm <= 7)
//     {
//         if (mm % 2 != 0)
//         {
//             return dd <= 31 ? 1 : 0;
//         }
//         else
//             return dd <= 30 ? 1 : 0;
//     }
//     else
//     {
//         if (mm % 2 != 0)
//         {
//             return dd <= 30 ? 1 : 0;
//         }
//         else
//             return dd <= 31 ? 1 : 0;
//     }
// }
// int main()
// {
//     int input, tgl, bln, thn;
//     printf("masukkan tanggal = ");
//     scanf("%d", &tgl);
//     printf("masukkan bulan = ");
//     scanf("%d", &bln);
//     printf("masukkan tahun = ");
//     scanf("%d", &thn);
//     printf("tanggal %s", cekKalender(tgl, bln, thn) == 1 ? "valid" : "invalid");
// }

// #include <stdio.h>
// int main()
// {
//     int tinggi;
//     printf("masukkan tinggi = ");
//     scanf("%d", &tinggi);
//     for (int i = 1; i <= tinggi; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>
int main()
{
    int id, unit, harga, total = 1, add;
    printf("masukkan id : ");
    scanf("%d", &id);
    printf("masukkan unit : ");
    scanf("%d", &unit);

    if (unit < 200)
    {
        harga = 1200;
        total = unit * harga;
    }
    else if (unit >= 200 && unit < 400)
    {
        harga = 1500;
        total = unit * harga;
    }
    else if (unit >= 400 && unit < 600)
    {
        harga = 1800;
        total = unit * harga;
    }
    else
    {
        harga = 2000;
        total = unit * harga;
    }
    add = (total > 400000) ? total * 0.15 : 0;
    printf("\nNo ID Customer : %d\nUnit pemakaian : %d\nHarga @Rp.%d,- per unit : Rp. %d,-\n", id, unit, harga, total);
    printf("Biaya tambahan : Rp. %d, -\n", add);
}