#include<stdio.h>
int main(){
    int a = 12, b = 2, c = 3, d = 4;
    printf("hasil dari a %% b adalah %d\n", a%b);
    printf("hasil dari a - c adalah %d\n", a-b);
    printf("hasil dari a + b adalah %d\n", a+b);
    printf("hasil dari a / d adalah %d\n", a/d);
    printf("hasil dari a / d * d + a %% d adalah %d\n", a / d * d + a % d);
    printf("hasil dari a %% d / d * a - c adalah %d\n", a % d / d * a - c);
}
