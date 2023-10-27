#include <stdio.h>
#include <string.h>
int main(){
    char input[100];
    printf("Masukkan kalimat : ");
    fgets(input, sizeof(input), stdin);
    printf("Hasil balikannya : ");
    strrev(input);
}