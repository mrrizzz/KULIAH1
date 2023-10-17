#include <stdio.h>
int main()
{
    int bil, i;
    char jwb;
    while (1)
    {
        printf("masukkan bilangan batas = ");
        scanf("%d", &bil);
        for (i = 1; i <= bil; i++)
        {
            if (i > 100)
                break;
            if (i % 7 == 0 || i % 11 == 0)
                continue;
            if (i % 30 == 0)
            {
            printf("\n");
            }
            printf("%d ", i);

        }
        fflush(stdin);
        printf("\napakah anda ingin keluar ? ");
        scanf("%c", &jwb);
        if (jwb == 'y' ) break;
        if(jwb == 't') continue;
    }
}