#include <stdio.h>

void jumlah()
{
    float a, b;
    printf("Masukkan nilai pertama: ");
    scanf("%f", &a);
    printf("Masukkan nilai kedua: ");
    scanf("%f", &b);
    float sum = a + b;
    printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", a, b, sum);
}

void kurang()
{
    float a, b;
    printf("Masukkan nilai pertama: ");
    scanf("%f", &a);
    printf("Masukkan nilai kedua: ");
    scanf("%f", &b);
    float difference = a - b;
    printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", a, b, difference);
}

void kali()
{
    float a, b;
    printf("Masukkan nilai pertama: ");
    scanf("%f", &a);
    printf("Masukkan nilai kedua: ");
    scanf("%f", &b);
    float product = a * b;
    printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n\n", a, b, product);
}

void bagi()
{
    float a, b;
    printf("Masukkan nilai pertama: ");
    scanf("%f", &a);
    printf("Masukkan nilai kedua: ");
    scanf("%f", &b);
    float quotient = a / b;
    printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n\n", a, b, quotient);
}

void end()
{
    printf("Terimakasih, telah menggunakan kalkulator Arya Arrozza Ridho Syaputra");
}

void err()
{
    printf("Input anda salah, silahkan coba lagi\n\n");
}

void begin()
{
    printf("Pilih Program\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Exit\n");
    printf("Masukkan Pilihan: ");
}

int main()
{
    int prog;

    while (1){
        begin();
        scanf("%d", &prog);
        switch(prog){
        case 1:
            jumlah();
            break;

        case 2:
            kurang();
            break;

        case 3:
            kali();
            break;

        case 4:
            bagi();
            break;

        case 5:
            end();
            return 0;
            break;

        default:
            err();
            break;
        }
    }
    
    return 0;
}