#include <stdio.h>

int main() {
    int n, i=1945;

    do {
        printf("What's year the Second War World Finish?\n");
        scanf("%d", &n);

        if (n == i){printf("Congratulations, You Win!!");        }
        else{printf("Sorry, You Lose!!\n");}

    }while (n != i);
}