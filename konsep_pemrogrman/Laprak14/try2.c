#include<stdio.h>
int faktorial(int x);
int main(){
    int input, hasil ;
    printf("Masukkan sebuah bilangan = ");
    scanf("%d", &input);
    printf("%d faktorial = %d", input, faktorial(input));
}
int faktorial(int x){
    int total=1;
    for (int i = x; i > 0; i--)
    {
        total*=i;
    }
    return total;
}
