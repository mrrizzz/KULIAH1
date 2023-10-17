#include <stdio.h>
int main(){
    int x;
    printf("Masukkan nilai  = ");
    scanf("%d", &x);
    if (x < 0){
      printf("Nilai absolut x adalah %d",-x);
    } else {
      printf("Nilai absolut x adalah %d",x); 
    }
}