#include <stdio.h>
void deret(int x);
int main()
{
    int input, hasil;
    printf("masukkan bilangan = ");
    scanf("%d", &input);
    deret(input);
}
void deret(int x)
{
    int bil = 1, jml = 1;
    do
    {
        for (int i = 1; i <= 3; i++)
        {
            if (jml > x)
                break;
            printf("%d ", bil);
            bil += i;
            jml++;
        }
    } while (jml <= x);
}