#include <stdio.h>
int main()
{
    int n;
    char jwb;
    while (1)
    {
        /* code */
        printf("Masukkan n = ");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
        printf("anda ingin keluar ");
        scanf(" %c", &jwb);
        if (jwb == 'y' ) break;
        if(jwb == 't') continue;
    }
}