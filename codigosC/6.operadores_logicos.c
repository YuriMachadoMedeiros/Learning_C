#include <stdio.h>

int main(){

    float nota;

    printf("Insira sua nota: ");
    scanf("%f",&nota);

    if (nota>=9 && nota<=10) {
        printf("Sua nota e SS.");
    }
    else if (nota>=7 && nota<9) {
        printf("Sua nota e MS.");
    }
    else if (nota>=5 && nota<7) {
        printf("Sua nota e MM.");
    }
    else if (nota>=3 && nota<5) {
        printf("Sua nota e IM.");
    }
    else if (nota>=1 && nota<3) {
        printf("Sua nota e II.");
    }
    else if (nota>=0 && nota<1) {
        printf("Sua nota e SR");
    }

    return 0;
}