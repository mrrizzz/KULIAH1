#include<stdio.h>
int main(){
    char kalimat;
    printf("Masukkan kalimat : ");
    while (1)
    {
        scanf("%c", &kalimat);
        if (kalimat == '\n') break;
        printf("%c", kalimat);
    }
}

