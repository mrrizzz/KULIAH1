#include<stdio.h>
int main(){
    int input, angka=0, urutan=1;
    printf("masukkan batas = ");
    scanf("%d", &input);
     while (urutan<=input){
        printf("%d ", angka);
        angka += urutan;
        urutan++;
    }
}