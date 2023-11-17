#include<stdio.h>
int main(){
    int bil1, bil2;
    printf("masukkan bilangan 1 = ");
    scanf("%d", &bil1);
    printf("masukkan bilangan 2 = ");
    scanf("%d", &bil2);
    if (bil1 % bil2 == 0)
    {
        printf("Bilangan pertama adalah kelipatan persekutuan bilangan kedua");
    }
    else{
        printf("Bilangan pertama bukan kelipatan persekutuan bilangan kedua");
    }    
}
