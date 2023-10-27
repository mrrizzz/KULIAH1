#include <stdio.h>
int panjang = 0;
int hitung(char kal [100]){
    while (kal[panjang] != '\0') 
    { 
       panjang++;
    }
    return panjang - 1;
}
int main(){                                                                     
    char input[100];
    printf("Masukkan kalimat : ");
    fgets(input, sizeof(input), stdin);
    input[panjang - 1] = '\0';
    printf("Hasil panjangnya : %d ", hitung(input));
}