#include<stdio.h>
int prima(int x);
int main(){
    int input ;
    printf("Masukkan sebuah bilangan = ");
    scanf("%d", &input);
    if (prima(input) == 0)
    {
        printf("%d adalah bilangan bukan prima", input);
    }else{
        printf("%d adalah bilangan prima", input);
    }
}
int prima(int x){
    int faktor;
    for (int i = 2; i < x/2; i++)
    {
        if (x % i == 0)
        {
            faktor++;
        }
    }
    if (faktor == 0)
    {
        return 1;
    }
}
