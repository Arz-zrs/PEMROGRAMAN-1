#include <stdio.h>

int main()
{
    //test case 1
    float radius1, tinggi1, keliling1, luas1, volume1;

    scanf("%f", &radius1);
    scanf("%f", &tinggi1);

    volume1 = 22.0/7.0 * radius1 * radius1 * tinggi1;
    luas1 = (2 * 22.0/7.0 * radius1 * (radius1 + tinggi1));
    keliling1 = 2 * 22.0/7.0 * radius1;

    printf("\nVolume = %.2f\n", volume1);
    printf("Luas = %.2f\n", luas1);
    printf("Keliling = %.2f\n", keliling1);

    //test case 2
    float radius, tinggi, keliling, luas, volume;

    scanf("%f %f", &radius, &tinggi);

    volume = 22.0/7.0 * radius * radius * tinggi;
    luas = (2 * 22.0/7.0 * radius * (radius + tinggi));
    keliling = 2 * 22.0/7.0 * radius;

    printf("\nVolume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);

    return 0;
}