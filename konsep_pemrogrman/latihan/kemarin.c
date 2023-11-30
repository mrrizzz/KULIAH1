#include <stdio.h>
typedef struct date
{
    int day, month, year;
} tanggal;
int cekKalender(int dd, int mm, int yy)
{
    if (dd < 1 || dd > 31 || mm < 1 || mm > 12)
    {
        return 0;
    }
    int feb = yy % 100 == 0 ? ((yy % 400 == 0) ? 29 : 28) : yy % 4 == 0 ? 29
                                                                        : 28;
    if (mm == 2)
    {
        return dd <= feb ? 1 : 0;
    }
    else if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)
    {
        return dd <= 31 ? 1 : 0;
    }
    else if (mm == 4 || mm == 6 || mm == 9 || mm == 11)
    {
        return dd <= 30 ? 1 : 0;
    }
}
void kemarin(tanggal *yesterday, tanggal *today)
{
    yesterday->day = today->day - 1;
    yesterday->month = today->month;
    yesterday->year = today->year;
    if (today->day == 1 && today->month == 1)
    {
        yesterday->day = 31;
        yesterday->month = 12;
        yesterday->year = today->year - 1;
    }
    else if ((today->month == 12 || today->month == 5 || today->month == 7 || today->month == 8 || today->month == 10) && today->day == 1)
    {
        yesterday->day = 30;
        yesterday->month = today->month - 1;
    }
    else if ((today->month == 11 || today->month == 2 || today->month == 4 || today->month == 6 || today->month == 9) && today->day == 1)
    {
        yesterday->day = 31;
        yesterday->month = today->month - 1;
    }
    else if (today->month == 3 && today->day == 1)
    {
        int feb = today->year % 100 == 0 ? ((today->year % 400 == 0) ? 29 : 28) : today->year % 4 == 0 ? 29
                                                                                                       : 28;
        yesterday->day = feb;
        yesterday->month = 2;
    }
}

int main()
{
    tanggal today, yesterday;
    printf("masukkan tanggal hari ini : ");
    scanf("%d-%d-%d", &today.day, &today.month, &today.year);
    int valid = cekKalender(today.day, today.month, today.year) == 1 ? 1 : 0;
    if (valid == 1)
    {
        kemarin(&yesterday, &today);
        printf("Tanggal kemarin adalah %02d-%02d-%d\n", yesterday.day, yesterday.month, yesterday.year);
    }
    else
    {
        printf("Tanggal invalid\n");
    }
}