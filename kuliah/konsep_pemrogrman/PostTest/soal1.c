#include <stdio.h>
int main(){
    int inputrow, row=1;
    printf("masukkkan baris = ");
    scanf("%d", &inputrow);
    for (int i = 1; i <= inputrow*5; i++)
    {
        if (row % 2 == 0)
        {
            for (int j = i + 4; j >= i; j--)
            {
                if (j < 10)
                {
                    printf("0%d ", j);
                }else {
                    printf("%d ", j);
                }
                if (j == i)
                {
                    printf("\n");
                    row++;
                    i = j+4;
                }
            }
        } else {
            if (i < 10)
            {
                printf("0%d ", i);
            }else {
                printf("%d ", i);
            }
            if (i % 5 == 0)
            {
                printf("\n");
                row++;
            }
        }
    }
}