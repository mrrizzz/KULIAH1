#include <stdio.h>
int main()
{
    int input;
    printf("masukkan bilangan batas = ");
    scanf("%d", &input);
    for (int i = 1; i <= input; i++)
    {
        
        for (int j = input; j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    // int input, jmlgj = 0, jmlgn = 0, jmlp = 0, jmln = 0;
    // printf("masukkan 5 bilangan integer = \n");
    // for (int i = 1; i <= 5; i++)
    // {
    //     scanf(" %d", &input);
    //     if (input > 0)
    //     {
    //         jmlp++;
    //     }
    //     else if (input < 0)
    //     {
    //         jmln++;
    //     }
    //     if (input % 2 == 0 && input != 0)
    //     {
    //         jmlgn++;
    //     }
    //     else if (input % 2 != 0 && input != 0)
    //     {
    //         jmlgj++;
    //     }
    // }
    // printf("jumlah bil ganjil = %d\n", jmlgj);
    // printf("jumlah bil genap = %d\n", jmlgn);
    // printf("jumlah bil positif = %d\n", jmlp);
    // printf("jumlah bil negatif = %d\n", jmln);

    // float input;
    // printf("masukkan bilangan = ");
    // scanf("%f", &input);
    // if (input >= 0 && input <= 25)
    // {
    //     printf("%d dalam interval [0,25]");
    // }
    // else if (input > 25 && input <= 50)
    // {
    //     printf("%d dalam interval [25,50]");
    // }
    // else if (input > 50 && input <= 75)
    // {
    //     printf("%d dalam interval [50,75]");
    // }
    // else if (input > 75 && input <= 100)
    // {
    //     printf("%d dalam interval [75,100]");
    // }
    // else
    // {
    //     printf("%d diluar interval");
    // }

    // int input, angka = 1;
    // printf("masukkan n = ");
    // scanf("%d", &input);
    // for (int i = 1; i <= input; i++)
    // {
    //     angka = i * i;
    //     printf("%d ", angka);
    // }
}