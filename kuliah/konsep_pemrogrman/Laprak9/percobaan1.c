#include <stdio.h>
int main (){
    int n, i;
    printf("masukkan n = ");
    scanf("%d", &n);
        for (i = 0; i < n*2; i++)    
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
}