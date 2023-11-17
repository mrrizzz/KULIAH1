#include<stdio.h>
int main (){
    int jml, nilai, n=0, total=0, maks=0, min= 0, rataan;
    printf("masukkan nilai n = ");
    scanf("%d", &jml);
    for (int i = 1; i <= jml; i++)
    {
        printf("Masukkan nilai %d ", i);
        scanf("%d", &nilai);
        n++;
        total += nilai;
        if (n == 1)
        {
            maks=min=nilai;
        }else {
            if (nilai > maks)
            {
                maks = nilai;
            }
            if (nilai < min)
            {
                min = nilai;
            }
            
        }
        
    }
    rataan = total / n;
    printf("Nilai maksimal adalah %d \n", maks);
    printf("Nilai minimal adalah %d \n", min);
    printf("Nilai rata rata adalah %d", rataan);
}