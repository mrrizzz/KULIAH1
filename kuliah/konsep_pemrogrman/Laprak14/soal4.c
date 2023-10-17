#include <stdio.h>
int cekKalender(int, int, int);
void main()
{
    int d, m, y;
    printf("Masukkan tanggal = ");
    scanf("%d", &d);
    printf("Masukkan bulan: ");
    scanf("%d", &m);
    printf("Masukkan tahun: ");
    scanf("%d", &y);
    printf(cekKalender(d, m, y) == 1 ? "Tanggal Valid.\n" : "Tanggal tidak valid.\n");
}
int cekKalender(int hari, int bulan, int tahun)
{
    int feb;
    if (tahun % 100 == 0)
    {
        if (tahun % 400 == 0)
            feb = 29;
        else
            feb = 28;
    }
    else if (tahun % 4 == 0)
        feb = 29;
    else
        feb = 28;
    
    if (bulan == 2)
        return hari <= feb ? 1 : 0;
    else if (bulan <= 7)
    {
        if (bulan % 2 == 0)
            return hari <= 30 ? 1 : 0;
        else
            return hari <= 31 ? 1 : 0;
    }
    else if (bulan <= 12)
    {
        if (bulan % 2 == 0)
            return hari <= 31 ? 1 : 0;
        else
            return hari <= 30 ? 1 : 0;
    }
}