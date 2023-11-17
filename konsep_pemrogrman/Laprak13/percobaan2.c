#include <stdio.h>
void triangular(int n);
int main()
{
    int input;
    printf("masukkan nilai n = ");
    scanf("%d", &input);
    triangular(input);
    
}
void triangular(int n)
{
    int total=0;
    for (int i = n; i > 0; i--)
    {
        if (i == 1)
        {
            printf("%d = ", i);
        }
        else
        {
            printf("%d + ", i);
        }
        total += i;
    }
    printf("%d", total);
}