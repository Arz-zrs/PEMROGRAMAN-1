#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    int rotations = 5;
    float circumference, radius, distance = 14; 

    printf("Diketahui:\n");
    printf("Pak Dengklek mengelilingi taman = %d putaran\n", rotations);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n", distance);
    printf("\n");

    circumference = distance / rotations;
    radius = circumference / (2 * M_PI);

    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", radius);

    return 0;
}