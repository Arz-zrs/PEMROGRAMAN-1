#include <stdio.h>

int main()
{
    int perimeter, cost, price = 85000, a = 4, b = 5, c = 7;
    perimeter = a + b + c;

    printf("Diketahui:\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n",a , b, c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", perimeter);
    printf("Harga tanah Per Meter adalah %d\n", price);

    cost = perimeter * price;

    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", cost);

    return 0;
}