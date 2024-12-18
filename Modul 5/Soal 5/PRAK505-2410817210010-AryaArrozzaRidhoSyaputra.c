#include <stdio.h>

void Biodata(char Namaku[], char Asal[], int tahunLahir){
    int tahun_sekarang = 2020;
    printf("\nPerkenalkan nama saya: %s\n", Namaku);
    printf("Umur Saya: %d\n", tahun_sekarang - tahunLahir);
    printf("Saya Adalah Angkatan: %d\n", tahun_sekarang);
    printf("Asal saya dari: %s\n", Asal);
}

int main() {
    int tahunLahir;
    char A[20], B[15];

    scanf(" %d",&tahunLahir);
    scanf(" %[^\n]%*c",&A);
    scanf(" %[^\n]%*c",&B);
    Biodata(A, B, tahunLahir);

    return 0;
}