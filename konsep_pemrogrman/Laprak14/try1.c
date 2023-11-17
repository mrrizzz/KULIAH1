#include<stdio.h>
int ganjil(int x);
int main(){
    int input ;
    printf("Masukkan sebuah bilangan = ");
    scanf("%d", &input);
    if (ganjil(input) == 0)
    {
        printf("%d adalah bilangan genap", input);
    }else{
        printf("%d adalah bilangan ganjil", input);
    }
}
int ganjil(int x){
    if (x % 2 == 0)
    {
        return 0;
    }else {
        return 1;
    } 
}
