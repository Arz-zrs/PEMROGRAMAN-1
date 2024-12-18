#include <stdio.h> 
#include <string.h> 

void decipher(char kata[], char kode[]){
    if (strlen(kata) != strlen(kode)) {
        printf("Panjang kalimat berbeda, pesan palsu");
        return;
    }
    int word = strlen(kata);
    int bintang = 0;
    int pagar = 0;
    for (int i = 0; i < word; i++) {
        if (kata[i] == kode[i]  && kata[i] != ' ') {
            printf("*");
            bintang++;
        }
        else if (kata[i] != kode[i] && kata[i] != ' ' || kode[i] != ' '){
            printf("#");
            pagar++;
        }
        else {
            printf(" ");
        }
    }
    printf("\n* = %d", bintang);
    printf("\n# = %d", pagar);
    if (bintang >= pagar) {
        printf("\nPesan Asli");
    }
    else {
        printf("\nPesan Palsu");
    }
}
int main() { 
    char kata[100], kode[100];
    
    scanf("%[^\n]", kata);
    getchar();
    scanf("%[^\n]", kode);
    getchar();

    decipher(kata, kode);
    return 0;
}