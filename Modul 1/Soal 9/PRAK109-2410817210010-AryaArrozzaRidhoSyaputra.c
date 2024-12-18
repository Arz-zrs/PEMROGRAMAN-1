#include <stdio.h>

int main()
{
    int lawan, pasukan = 985730, pahlawan = 5;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", pasukan);
    printf("Jumlah pahlawan = %d\n", pahlawan);

    lawan = pasukan / pahlawan;

    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan", lawan);

    return 0;
}