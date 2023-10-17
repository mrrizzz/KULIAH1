#include <stdio.h>
int main (){
    int x;
    printf("masukkan nilai x = ");
    scanf("%d", &x);
    if (x%2 == 0)
    {
        printf("x adalah genap");
    }
    else{
        printf("x adalah ganjil");
    }
    
}