#include<stdio.h>
int main(){
    int input, digit, hasil=0;
    printf("masukkan bilangan = ");
    scanf("%d", &input);
    while (digit != 0)
    {
        digit = input%10;
        input/=10;
        hasil+=digit;
    }
    printf("jumlah digit adalah = %d", hasil);
}