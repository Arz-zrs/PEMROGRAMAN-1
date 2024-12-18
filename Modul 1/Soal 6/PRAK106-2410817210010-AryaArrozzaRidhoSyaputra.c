#include <stdio.h>

int main()
{
    int a = 4, b = 8, c = 3;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);

    int equal = (a==b) ? 1 : 0;
    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", equal);

    int morethan = (b > c) ? 1 : 0;
    printf("Apakah b lebih besar daripada c ? jawabannya adalah %d\n", morethan);

    int unequal = (a != c) ? 1 : 0;
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d", unequal);

    return 0;
}