#include <stdio.h>

int main()
{
    char nama[50], ttl[50], alamat[100], hobi[40], paralel[20], nim[20], hp[20];

    printf("Nama                    : ");
    fgets(nama, sizeof(nama), stdin);

    printf("NIM                     : ");
    fgets(nim, sizeof(nim), stdin);

    printf("Kelas Paralel           : ");
    fgets(paralel, sizeof(paralel), stdin);

    printf("Tempat/Tanggal Lahir    : ");
    fgets(ttl, sizeof(ttl), stdin);

    printf("Alamat                  : ");
    fgets(alamat, sizeof(alamat), stdin);

    printf("Hobby                   : ");
    fgets(hobi, sizeof(hobi), stdin);

    printf("No. HP                  : ");
    fgets(hp, sizeof(hp), stdin);
 
    printf("\nNama                    : %s", nama);
    printf("NIM                     : %s", nim);
    printf("Kelas Paralel           : %s", paralel);
    printf("Tempat/Tanggal Lahir    : %s", ttl);
    printf("Alamat                  : %s", alamat);
    printf("Hobby                   : %s", hobi);
    printf("No. HP                  : %s", hp);

    return 0;
}