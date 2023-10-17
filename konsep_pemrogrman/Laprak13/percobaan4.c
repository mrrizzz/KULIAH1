#include <stdio.h>
int fungsic(int n);
int fungsis(int n);
int main()
{
    int input, resultc, resultf;
    printf("masukkan n = ");
    scanf("%d", &input);
    resultc = fungsic(input);
    printf("Hasil dari Cn = 2Cn-1 + 1 dari n = %d adalah %d\n", input, resultc);
    resultf = fungsis(input);
    printf("Hasil dari Sn = Sn-1 + n - 1 dari n = %d adalah %d\n", input, resultf);
}
int fungsic(int n)
{
    int hasil = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            hasil += 1;
        }
        else
        {
            hasil = 2 * hasil + 1;
        }
    }
    return hasil;
}
int fungsis(int n)
{
    int hasil = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            hasil = 0;
        }
        else
        {
            hasil = hasil + i - 1;
        }
    }
    return hasil;
}
