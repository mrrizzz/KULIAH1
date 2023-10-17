#include<stdio.h>
int main(){
    char huruf;
    while (huruf != 'X')
    {
        printf("Masukkan sembarang = ");
        scanf("%c", &huruf);
        fflush(stdin);        
    }
}