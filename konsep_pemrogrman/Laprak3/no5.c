#include<stdio.h>
int main(){
    float a , b, c ;
    printf("masukkan nilai a = ");
    scanf("%f", &a);
    printf("masukkan nilai b = ");
    scanf("%f", &b);
    printf("masukkan nilai c = ");
    scanf("%f", &c);
    printf("diskriminan = %.2f", b*b - 4*a*c);
}