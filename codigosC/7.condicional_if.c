#include <stdio.h>

//Aprendendo sobre o operador IF
int main() {

    //Definindo variável
    float m;

    //Atribuindo valor para m
    printf("Digite sua nota: ");
    scanf("%f", &m);

    //Definir condicional
    if (m>=7.0) {
        printf("Aprovado");
    }
    else{
        printf("Reprovado");
    }
}