#include <stdio.h>

int MaxBilangan(int a, int b, int c, int d) {
    if (a >= b && a >= c && a >= d) {
        return a;    
    }
    else if (b >= a && b >= c & b >= d) {
        return b;
    }
    else if (c >= b && c >= a && c >= d) {
        return c;
    }
    else if (d >= b && d >= c && d >= a) {
        return d;
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d); 

    int hasil = MaxBilangan(a, b, c, d); 
    printf("%d", hasil);

    return 0;
}