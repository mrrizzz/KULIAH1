#include <stdio.h>
int main()
{
    char jwb;
    while (1)
    {
        int jml, rataan;
        int nilai, n = 0, total = 0, maks = 0, min = 0;
        printf("masukkan nilai n = ");
        scanf("%d", &jml);
        fflush(stdin);
        for (int i = 1; i <= jml; i++)
        {

            printf("Masukkan nilai %d ", i);
            scanf("%d", &nilai);
            n++;
            total += nilai;
            if (n == 1)
            {
                maks = min = nilai;
            }
            else
            {
                if (nilai > maks)
                {
                    maks = nilai;
                }
                if (nilai < min)
                {
                    min = nilai;
                }
            }
            fflush(stdin);
        }
        rataan = total / n;
        printf("Nilai maksimal adalah %d \n", maks);
        printf("Nilai minimal adalah %d \n", min);
        printf("Nilai rata rata adalah %d\n\n", rataan);

        printf("apakah anda ingin keluar ? ");
        scanf(" %c", &jwb);
        if (jwb == 'y' ) break;
        if(jwb == 't') continue;
    }
}
