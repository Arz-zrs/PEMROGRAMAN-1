#include <stdio.h>

int main()
{
    int num;
    char sym;

    scanf("%d %c", &num, &sym);

    for (int i = 1; i <= 50; i++) {
        if (i % num == 0){
            printf("%c ", sym);
        }
        else {
            printf("%d ", i);
        }
    } 

    return 0;
}