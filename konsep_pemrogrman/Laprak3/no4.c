#include<stdio.h>
int main(){
    int a , b, c ;
    printf("masukkan nilai a =");
    scanf("%d", &a);
    printf("masukkan nilai b =");
    scanf("%d", &b);
    printf("masukkan nilai c =");
    scanf("%d", &c);

    printf("diskriminan = %d", b*b - 4*a*c);
}
