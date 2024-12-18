#include <stdio.h>

int main()
{
    float a = 4, b = 8, c = 3, result;

    printf("Variabel a bernilai %.0f\n", a);
    printf("Variabel b bernilai %.0f\n", b);
    printf("Variabel c bernilai %.0f\n", c);

    result = (a * b) / c;

    printf("Hasil dari a dikali b dibagi c adalah %f", result);

    return 0;
}