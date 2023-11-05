#include <stdio.h>
int pjgstr(char kal [100]){
    int panjang = 0;
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
    printf("Hasil panjangnya : %d ", pjgstr(input));
}