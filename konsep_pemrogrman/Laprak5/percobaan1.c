#include<stdio.h>
int main (){
    int x;
    printf("Masukkan nilai x = ");
    scanf("%d", &x);
    if (x > 0){
        printf("x adalah bilangan positif\n");
    } else if (x == 0){ 
       printf("x adalah nol");
    }
    else{
        printf("x adalah bilangan negatif\n");
    }
}