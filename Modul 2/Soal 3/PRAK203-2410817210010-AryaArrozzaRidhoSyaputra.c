#include <stdio.h>

int main()
{
    //test case 1
    float a1, b1, i1, j1, x1, y1, result1;

    scanf("%f %f %f %f %f %f", &a1, &b1, &i1, &j1, &x1, &y1);             

    result1 = (((a1 - b1) * i1) / j1) - (x1 + y1);

    printf("%.3f\n", result1);

    //test case 2
    float a, b, i, j, x, y, result;

    scanf("%f %f", &a, &b);
    scanf("%f %f", &i, &j);
    scanf("%f %f", &x, &y);              

    result = (((a - b) * i) / j) - (x + y);

    printf("%.3f", result);

    return 0;
}