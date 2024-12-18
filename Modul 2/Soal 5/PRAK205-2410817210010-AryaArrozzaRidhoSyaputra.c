#include <stdio.h>
#include <math.h>

int main()
{
    //test case 1
    int A1, B1, C1, Keliling1, Luas1;

    scanf("%d %d", &A1, &B1);

    C1 = sqrt((B1 * B1) - (A1 * A1));
    Keliling1 = A1 + B1 + C1;
    Luas1 = 0.5 * C1 * A1;

    printf("\nAlas = %d cm\n", C1);
    printf("Tinggi = %d cm\n", A1);
    printf("Keliling = %d cm\n", Keliling1);
    printf("Luas = %d cm^2\n", Luas1);

    //test case 2
    int A, B, C, Keliling, Luas;

    scanf("%d", &A);
    scanf("%d", &B);

    C = sqrt((B * B) - (A * A));
    Keliling = A + B + C;
    Luas = 0.5 * C * A;

    printf("\nAlas = %d cm\n", C);
    printf("Tinggi = %d cm\n", A);
    printf("Keliling = %d cm\n", Keliling);
    printf("Luas = %d cm^2\n", Luas);

    return 0;
}