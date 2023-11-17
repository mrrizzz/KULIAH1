#include <stdio.h>
struct date
{
    int day, month, year;
} today, tomorrow;
int cekKalender(int dd, int mm, int yy)
{
    if (mm < 1 || mm > 12 || dd < 1 || dd > 31)
        return 0;
    int feb;
    feb = (yy % 100 == 0) ? ((yy % 400 == 0) ? 29 : 28) : (yy % 4 == 0) ? 29
                                                                        : 28;
    if (mm <= 7)
    {
        if (mm == 2)
        {
            return dd <= feb ? 1 : 0;
        }
        else
            return (mm % 2 == 0) ? (dd <= 30 ? 1 : 0) : (dd <= 31 ? 1 : 0);
    }
    else if (mm > 7)
    {
        return (mm % 2 == 0) ? (dd <= 31 ? 1 : 0) : (dd <= 30 ? 1 : 0);
    }
}
void cekBesok(int dd, int mm, int yy)
{
    tomorrow.day = dd + 1;
    tomorrow.month = mm;
    tomorrow.year = yy;
    if (mm == 12 && dd == 31)
    {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = yy + 1;
    }
    else if ((mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10) && dd == 31)
    {
        tomorrow.day = 1;
        tomorrow.month = mm + 1;
    }
    else if ((mm == 4 || mm == 6 || mm == 9 || mm == 11) && dd == 30)
    {
        tomorrow.day = 1;
        tomorrow.month = mm + 1;
    }
    else if (mm == 2)
    {
        int feb = (yy % 100 == 0) ? ((yy % 400 == 0) ? 29 : 28) : (yy % 4 == 0) ? 29
                                                                                : 28;
        if (dd == feb)
        {
            tomorrow.day = 1;
            tomorrow.month = mm + 1;
        }
    }
    printf("Besok adalah %02d-%02d-%d", tomorrow.day, tomorrow.month, tomorrow.year);
}
int main()
{
    int valid;
    printf("Masukkan tanggal (dd-mm-yyyy) = ");
    scanf("%d-%d-%d", &today.day, &today.month, &today.year);
    valid = cekKalender(today.day, today.month, today.year);
    if (valid == 1)
    {
        cekBesok(today.day, today.month, today.year);
    }
    else
        printf("Tanggal tidak valid");
    printf("\n");
}