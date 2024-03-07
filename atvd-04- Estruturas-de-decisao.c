#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    float metros;
    int centimetros;
    int milimetros;
    double quilometros;

    printf("Digite um valor em metros: ");
    if (scanf("%f", &metros) != 1) {
        printf("Valor invalido");
        return 1;
    }

    centimetros = metros * 100;
    milimetros = metros * 1000;
    quilometros = metros / 1000.0;

    printf("%.2f metros eh igual a:\n", metros);
    printf("%d centimetros\n", centimetros);
    printf("%d milimetros\n", milimetros);
    printf("%.6lf quilometros\n", quilometros);

    return 0;
}
