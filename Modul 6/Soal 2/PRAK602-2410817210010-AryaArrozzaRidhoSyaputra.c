#include <stdio.h>

int main() {
    int m;

    scanf("%d", &m);
    int arr[m];

    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < m; i++) {
        printf("%d ", arr[i] * (i + 1));
    }

    return 0;
}