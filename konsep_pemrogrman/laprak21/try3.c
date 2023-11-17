#include <stdio.h>

void balikstr(char kal [100]){
    int panjang = 0;
    while (kal[panjang] != '\0') 
    { 
       panjang++;
    }
    for (int i = panjang - 1; i >= 0; i--)
    {
        printf("%c", kal[i]);
    }
    printf("\n");
}
int main(){
    char input[100];
    printf("Masukkan kalimat : ");
    fgets(input, sizeof(input), stdin);
    printf("Hasil balikannya : ");
    balikstr(input);
}