#include <stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    for (int i = 1; i <= num; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    
    for (int i = num; i >= 2; i -= 2) {
        if (i % 2 != 0) {
            i--;
            printf("%d ", i);
        }
        else {
            printf("%d ", i);
        }
    } 

    return 0;
}