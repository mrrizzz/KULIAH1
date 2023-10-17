#include<stdio.h>
float kuadrat(float x);

int main(){
    float input, hasil;
    printf("Masukkan bilangan = ");
    scanf("%f", &input);
    hasil = kuadrat(input);
    printf("hasil = %.2f",hasil );
}
float kuadrat(float x){
    return x * x;
}