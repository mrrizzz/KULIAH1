#include<stdio.h>
int main(){
    int n, hitung=1, bil=2;
    printf("masukkan n = ");
    scanf("%d", &n);
    while (hitung <= n)
    {
        int faktor = 0;
        for (int i = 2; i < bil; i++)
        {
            if (bil % i == 0)
            {
                faktor++;
            }
        }
            if (faktor == 0) {
                printf("%d ", bil);
                hitung++;
            }
        bil++;
    }
}