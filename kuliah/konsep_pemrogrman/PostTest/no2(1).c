#include <stdio.h>
int cek_sempurna(int x);
int main(){
    int input, hasil ;
    printf("masukkan bil = ");
    scanf("%d", &input);

    printf(cek_sempurna(input) == 1 ? "Bilangan sempurna" : "Bilangan tidak sempurna" );
}
int cek_sempurna(int x){
    int total=0;
    for(int i = 1; i <= x/2; i++ ){
        if(x % i == 0){
            total += i;
        }
    }
    if(total == x){
        return 1;
    }else{
        return 0;
    }
}