#include <stdio.h>

#define texto "Entrada e saida de dados"

int main() {

    printf("%s\n", texto);

    int idade = 0;
    float altura = 0;
    char nome[50] = "";

    printf("Escreva seu altura: \n");
    scanf("%f", &altura);

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Escreva seu nome: \n");
    scanf("%s", nome);

    printf("%s ", nome);
    printf("tem %.2f de altura", altura);
    printf(" e %d anos de idade\n", idade);

    return 0;
}