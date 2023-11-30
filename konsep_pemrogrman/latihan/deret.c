#include <stdio.h>
int main()
{
    int n;
    printf("masukkan n = ");
    scanf("%d", &n);
    int deret[n];
    deret[0] = 0;
    for (int i = 1; i < n; i++)
    {
        deret[i] = deret[i - 1] + i + 1;
    }
    printf("deret : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", deret[i]);
    }
}