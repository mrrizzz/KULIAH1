#include<stdio.h>
int main(){
    int duit;
    printf("masukkan uang anda ");
    scanf("%d", &duit);

    int uang100000, uang50000, uang20000, uang10000, uang5000, uang2000, uang1000 ;

    uang100000 = duit / 100000;
            duit %= 100000;
    uang50000 = duit / 50000;
    duit %= 50000;
    uang20000 = duit / 20000;
    duit %= 20000;
    uang10000 = duit / 10000;
    duit %= 10000;
    uang5000 = duit / 5000;
    duit %= 5000;
    uang2000 = duit / 2000;
    duit %= 2000;
    uang1000 = duit / 1000;
    duit %= 1000;
    printf("anda memiliki %d lembar uang 100000\n", uang100000);
    printf("anda memiliki %d lembar uang 50000\n", uang50000);
    printf("anda memiliki %d lembar uang 20000\n", uang20000);
    printf("anda memiliki %d lembar uang 10000\n", uang10000);
    printf("anda memiliki %d lembar uang 5000\n", uang5000);
    printf("anda memiliki %d lembar uang 2000\n", uang2000);
    printf("anda memiliki %d lembar uang 1000\n", uang1000);
}