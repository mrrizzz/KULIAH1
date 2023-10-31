#include <stdio.h>
#include <math.h>
#define PI 3.14159f

float radian(int x)
{
    return x * PI / 180.0f;
}

int main()
{
    int x[] = {0, 30, 60, 90, 120, 150, 180, 210, 240, 270, 300, 330, 360};
    float rad[13];

    for (int i = 0; i < 13; i++)
    {
        rad[i] = radian(x[i]);
    }

    float data[13][3];

    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            switch (j)
            {
            case 0:
                data[i][j] = sin(rad[i]);
                break;

            case 1:
                data[i][j] = cos(rad[i]);
                break;

            case 2:
                data[i][j] = tan(rad[i]);
                if (x[i] == 90 || x[i] == 270)
                {
                    data[i][j] = 0;
                }
                break;
            }
        }
    }

    for (int i = 0; i < 13; i++)
    {
        printf("Sudut  %d   \tSin(x) = %.3f, \tcos(x) = %.3f,   \ttan(x) = %.3f \n", x[i], data[i][0], data[i][1], data[i][2]);
    }
}
