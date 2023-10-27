#include<stdio.h>
#include<string.h>
int main(){
    char input[100], copy[100];
    printf("Masukkan input kalimat sembarang = ");
    fgets(input, sizeof(input), stdin);
    printf("Kalimat copy : %s", strcpy(copy, input));
}