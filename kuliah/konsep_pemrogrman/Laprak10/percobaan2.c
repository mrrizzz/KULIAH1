#include<stdio.h>
int main(){
    int input, i=1, jawaban, total=0;
    char pilihan;
    do
    {
        printf("masukkan bilangan ke %d = ", i);
        scanf(" %d", &input);
        printf("apakah ingin mengulang? (y/t) = ");
        scanf(" %c", &pilihan);

        i++;
    
        total += input;
    } while (pilihan == 'y' || pilihan == 'Y');
    printf("total = %d", total);
}