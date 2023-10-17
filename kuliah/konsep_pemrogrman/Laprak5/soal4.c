#include <stdio.h>
int main (){
    int x;
    printf("masukkan nilai x = ");
    scanf("%d", &x);
    if (x > 0)
    {
        printf("x Kategori A");
    }
    else{
        printf("x Kategori B");
    }
}