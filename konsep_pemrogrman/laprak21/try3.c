#include <stdio.h>
int panjang = 0;
void balikstr(char kal [100]){

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
    input[panjang - 1] = '\0';
    printf("Hasil balikannya : ");
    balikstr(input);
}