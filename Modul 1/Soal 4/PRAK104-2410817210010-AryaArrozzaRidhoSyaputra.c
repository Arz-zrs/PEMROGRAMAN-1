#include <stdio.h>

int main()
{
    int pA, pB, sA = 400000, sB = 350000;
    float discA = 0.13, discB = 0.21;

    printf("Harga sepatu A adalah %d\n", sA);
    printf("Harga sepatu B adalah %d\n", sB);

    pA = sA - (sA * discA);
    pB = sB - (sB * discB);

    printf("Sepatu A mendapat diskon %0.f%% sehingga harganya menjadi %d\n", discA*100, pA);
    printf("Sepatu B mendapat diskon %0.f%% sehingga harganya menjadi %d", discB*100, pB);

    return 0;
}