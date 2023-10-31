#include <stdio.h>

int main(){                                                                     
    char input[100];
    printf("Masukkan kalimat 1: ");
    fgets(input, sizeof(input), stdin);

    char input2[100];
    printf("Masukkan kalimat 2: ");
    gets(input2);

    char input3[100];
    printf("Masukkan kalimat 3: ");
    scanf("%s", input3);
}