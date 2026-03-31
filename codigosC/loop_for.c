#include <stdio.h>

int main() {
    int i, n;

    printf("Type a number to see its multiplication table: ");
    scanf("%d", &n);

    for (i = 0; i <= 10; i++) {

        printf("%d * %d = %d\n", n, i, n * i);
    }

    printf("Multiplication table of %d completed.\n", n);
    return 0;
}