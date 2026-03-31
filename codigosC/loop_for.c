#include <stdio.h>

int main() {
    // This program prints the multiplication table of a given number using a for loop.

    // Declare variables for the loop counter and the number for which the multiplication table will be generated.

    int i, n;

    // Prompt the user to enter a number and read the input.
    printf("Type a number to see its multiplication table: ");
    scanf("%d", &n);

    // Use a for loop to iterate from 0 to 10 and print the multiplication table of the given number.
    for (i = 0; i <= 10; i++) {

        printf("%d * %d = %d\n", n, i, n * i);
    }

    printf("Multiplication table of %d completed.\n", n);
    return 0;
}