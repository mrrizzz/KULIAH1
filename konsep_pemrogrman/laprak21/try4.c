#include<stdio.h>
void copystr(char copy[100]){
    printf("%s", copy);
}
int main(){
    char input[100];
    printf("Masukkan input kalimat sembarang = ");
    fgets(input, sizeof(input), stdin);
    printf("Kalimat asli : ", input);
    printf("hasil copy : ");
    copystr(input);

}