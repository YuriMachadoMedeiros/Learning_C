#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade = 0;

    printf("O valor inicial da variavel idade e %d.\n", idade);

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if (idade == 0) {
        printf("A idade nao foi informada.");
    }
    else
    {
        printf("A idade informada foi %d anos.\n", idade);
    }


    return 0;

}
