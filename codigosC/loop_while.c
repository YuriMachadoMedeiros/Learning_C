#include <stdio.h>

int main() {
    int n, i=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i != n+1) {
        printf("%d ", i);
        i++;
    }
return 0;
}