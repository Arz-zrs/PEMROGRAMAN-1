#include <stdio.h>

int main ()
{
    int num, mul, total = 0;

    scanf("%d %d", &num, &mul);

    for (int i = 1; i <= num; i++) {
        int sum = 0;
        printf("(");

        for (int j = 1; j <= i; j++) {
            printf("%d * %d", i, mul);
            sum += j * mul;

            if (i > j) {
                printf(") + (");
            }

            else if (j > i) {
                printf(") + (");
            }
            
        }
        printf(") = %d\n", sum);
        total += sum;
    }
    
    printf ("%d\n", total);
    return 0;
}