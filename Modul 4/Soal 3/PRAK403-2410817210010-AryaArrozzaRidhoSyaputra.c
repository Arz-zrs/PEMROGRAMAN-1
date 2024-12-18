#include <stdio.h>

int main ()
{
    int a, b;

    scanf("%d %d", &a, &b);

    for (int i = a, j = b; i <= b && j >= a; i++, j--) {
        printf("%d %d", i, j);

        if (i < b || j > a) {
            printf(" - ");
        }
    }

    for (int i = a, j = b; i >= b && j <= a; i--, j++) {
        printf("%d %d", i, j);

        if (i > b || j < a) {
            printf(" - ");
        }
    }

    return 0;
}