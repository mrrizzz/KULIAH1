#include <stdio.h>

int main()
{
    int nilai[4][3];
    int total[4] = {0};
    float rataan[4];
    for (int i = 0; i < 4; i++)
    {
        printf("%d. ", i + 1);
        switch (i)
        {
        case 0:
            printf("Masukkan nilai Ahmad");
            break;
        case 1:
            printf("Masukkan nilai Adang");
            break;
        case 2:
            printf("Masukkan nilai Dani");
            break;
        case 3:
            printf("Masukkan nilai Edi");
            break;
        }
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            int bhs, mtk, dgt;
            switch (j)
            {
            case 0:
                printf("nilai bahasa = ");
                scanf("%d", &bhs);
                nilai[i][j] = bhs;
                break;

            case 1:
                printf("nilai matematika = ");
                scanf("%d", &mtk);
                nilai[i][j] = mtk;
                break;

            case 2:
                printf("nilai digital = ");
                scanf("%d", &dgt);
                nilai[i][j] = dgt;
                break;
            }
            total[i] += nilai[i][j];
        }
        printf("\n");
    }
    printf("rata rata : \n");
    for (int i = 0; i < 4; i++)
    {
        rataan[i] = total[i] / 3.0;
        printf("%d. %.3f \n", i + 1, rataan[i]);
    }
}