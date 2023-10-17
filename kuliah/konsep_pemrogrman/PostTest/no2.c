#include <stdio.h>
int main(){
    int input, total=0;
    printf("masukkan batas n = ");
    scanf("%d", &input);
    for (int i = 0; i <= input; i++)
    {
       if (i % 2 == 0 )
       {
        continue;
       }else {
            total+=i;
       }
       
    }
    printf("total = %d", total);
}