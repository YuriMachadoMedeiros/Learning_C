#include <stdio.h>

//Aprendendo a aplicar valores no printf()

int main() {
    printf("Oi, me chamo Yuri e estou cursando Engenharia de Software na UnB.\nEstou aprendendo a linguagem C para fazer Sistemas Embarcados");

    printf("Aplicando valor inteiro no printf: %d.\n", 10);
    printf("Aplicando valor real no printf: %f.\n", 3.1415);
    printf("Aplicando valor real com duas casas no printf: %.2f.\n", 3.1415);
    printf("Aplicando caracter no printf: %c.\n", 'a');
    printf("Aplicando palavra no printf: %s.\n", "Palavra");

    return 0;
}