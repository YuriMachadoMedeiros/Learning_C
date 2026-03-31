#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B, soma, subtracao, multiplicacao, divisao;

    system("pause");
    printf("Digite um valor para A: \n");
    scanf("%d", &A);
    printf("Digite um valor para B: \n");
    scanf("%d", &B);

    soma = A + B;
    subtracao = A - B;
    multiplicacao = A * B;
    divisao = A / B;

    system("pause");

    printf("Resultados: \n");
    printf("Soma = %d\n", soma);
    printf("Subtracao = %d\n", subtracao);
    printf("Multiplicacao = %d\n", multiplicacao);
    printf("Divisao = %d\n", divisao);

    return 0;
}
