#include<stdio.h>
int main(){
    float Farenheit, Celcius ;
    printf("masukkan suhu dalam Celcius = ");
    scanf("%f", &Celcius);
    Farenheit = Celcius * 1.8 + 32;
    printf("Suhu dalam Farenheit adalah = %3.f", Farenheit);
}