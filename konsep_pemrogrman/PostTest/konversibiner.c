#include <stdio.h>
int fungsib(int x);
int main()
{
    int input, biner;
    printf("masukkan bilangan desimal = ");
    scanf("%d", &input);
    biner = fungsib(input);
    printf("%d", biner);
}
int fungsib(int x)
{
    int hasil, sisa;
    while (x != 0)
    {
        sisa = x % 2;
        x /= 2;
        printf("%d", sisa);
    }
}