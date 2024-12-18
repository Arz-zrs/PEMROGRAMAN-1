#include <stdio.h>
#include <math.h>
int main()
{
    int area, perimeter, hypotenuse, height = 12, floor = 5;

    printf("Diketahui:\n");
    printf("Alas = %d cm\n", floor);
    printf("Tinggi = %d cm\n", height);
    printf("\n");

    hypotenuse = sqrt((height * height) + (floor * floor));
    perimeter = height + floor + hypotenuse;
    area = 0.5 * floor * height;

    printf("Jawaban :\n");
    printf("Sisi A = %d cm\n", height);
    printf("Sisi B = %d cm\n", hypotenuse);
    printf("Sisi C = %d cm\n", floor);
    printf("Keliling = %d cm\n", perimeter);
    printf("Luas = %d cm", area);

    return 0;
}