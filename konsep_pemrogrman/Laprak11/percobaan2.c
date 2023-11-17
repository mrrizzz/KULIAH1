#include <stdio.h>
int main (){
    int n, i;
    printf("masukkan batas n = ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)    
    {
        if (i % 2 != 0)
        {
            if (i % 3 == 0) continue;
            printf("%d ", i);
        }
    }
}