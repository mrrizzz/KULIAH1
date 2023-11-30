#include <stdio.h>
typedef struct time
{
    int h, m, s;
} waktu;
int cekValid(int h, int m, int s)
{
    if (h >= 0 && h <= 24)
    {
        if ((m >= 0 && m <= 60))
        {
            if ((s >= 0 && s <= 60))
            {
                return 1;
            }
            else
                return 0;
        }
        else
            return 0;
    }
    else
        return 0;
}
int main()
{
    waktu awal;
    waktu akhir;
    int valid = 1;
    do
    {
        printf("Enter start time : \n");
        printf("Enter hours , minutes, seconds, respectively (hh-mm-ss): ");
        scanf("%d-%d-%d", &awal.h, &awal.m, &awal.s);
        valid = cekValid(awal.h, awal.m, awal.s);
        if (!valid)
        {
            printf("INPUTKAN ULANG!!!!\n");
        }
        else
        {
            printf("Enter stop time : \n");
            printf("Enter hours , minutes, seconds, respectively (hh-mm-ss): ");
            scanf("%d-%d-%d", &akhir.h, &akhir.m, &akhir.s);
            valid = cekValid(awal.h, awal.m, awal.s);
            waktu diff;
            int tempMinutes, tempSecond;
            diff.h = awal.h - akhir.h;
            if (awal.m < akhir.m)
            {
                tempMinutes = awal.m + 60;
                diff.h--;
                diff.m = tempMinutes - akhir.m;
            }
            else
                diff.m = awal.m - akhir.m;
            if (awal.s < akhir.s)
            {
                tempSecond = awal.s + 60;
                diff.m--;
                diff.s = tempSecond - akhir.s;
            }
            else
                diff.s = awal.s - akhir.s;
            if (!valid)
            {
                printf("INPUTKAN ULANG!!!!\n");
            }
            else
            {
                printf("TIME DIFFERENCE : %02d:%02d:%02d  -  %02d:%02d:%02d = %02d:%02d:%02d\n", awal.h, awal.m, awal.s, akhir.h, akhir.m, akhir.s, diff.h, diff.m, diff.s);
            }
        }
    } while (!valid);
}