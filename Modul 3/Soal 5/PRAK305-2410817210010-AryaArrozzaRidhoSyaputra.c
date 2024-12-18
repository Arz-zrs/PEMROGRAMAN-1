#include <stdio.h>

int main()
{
    int s, m, h, d;

    scanf("%d", &s);

    if (s < 86400) {
        m = s / 60;
        h = m / 60;
        s %= 60;
        m %= 60;
        printf("%02d:%02d:%02d", h, m, s);
    }
    else {
        d = s / 86400;
        m = s / 60;
        h = m / 60;
        h %= 24;
        s %= 60;
        m %= 60;
        printf("%d hari %02d:%02d:%02d", d, h, m, s);
    }

    return 0;
}