#include<stdio.h>
int main (){
    int x, hasil;
    printf("Masukkan nilai x = ");
    scanf("%d", &x);
    hasil = 3 * x * x - 5 * x + 6;
    printf("Maka hasil dari 3x^2 - 5x + 6 = %d",hasil );
}