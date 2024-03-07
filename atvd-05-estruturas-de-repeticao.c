// Questão 1
int main() {
    int notas[5], i = 0, aprovados = 0;

    while (i < 5) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%d", &notas[i]);

        if (notas[i] >= 7)
            aprovados++;

        i++;
    }

    printf("Quantidade de alunos aprovados: %d\n", aprovados);

    return 0;
}

// Questão 2
int main() {
    int numero, soma_digitos = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while(numero != 0) {
        soma_digitos += numero % 10;
        numero /= 10;
    }

    printf("A soma dos digitos do numero: %d\n", soma_digitos);

    return 0;
}

// Questão 3
int main() {
    int numero, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    i = 1;
    printf("Divisores de %d: ", numero);
    while (i <= numero) {
        if (numero % i == 0)
            printf("%d ", i);
        i++;
    }

    printf("\n");

    return 0;
}

// Questão 4
int main() {
    int i = 0, altura[5];
    float media_altura = 0;

    while (i < 5) {
        printf("Digite a altura da pessoa %d (em cm): ", i + 1);
        scanf("%d", &altura[i]);
        media_altura += altura[i];
        i++;
    }

    media_altura /= 5;
    printf("A media de altura das 5 pessoas: %.2f cm\n", media_altura);

    return 0;
}

// Questão 5
int main() {
    int i = 1;

    while (i <= 100) {
        if (i % 3 == 0 && i % 5 == 0)
            printf("FizzBuzz ");
        else if (i % 3 == 0)
            printf("Fizz ");
        else if (i % 5 == 0)
            printf("Buzz ");
        else
            printf("%d ", i);

        i++;
    }

    printf("\n");

    return 0;
}

// Questão 6
int main() {
    int numero, soma_digitos_pares = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        int digito = numero % 10;
        if (digito % 2 == 0)
            soma_digitos_pares += digito;
        numero /= 10;
    }

    printf("A soma dos digitos pares do numero: %d\n", soma_digitos_pares);

    return 0;
}

// Questão 7
int main() {
    int numero, numero_invertido = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        numero_invertido = numero_invertido * 10 + numero % 10;
        numero /= 10;
    }

    printf("O numero invertido: %d\n", numero_invertido);

    return 0;
}

// Questão 8
int main() {
    int i = 1, soma = 0;

    while (i <= 100) {
        soma += i;
        i++;
    }

    printf("A soma dos numeros de 1 a 100: %d\n", soma);

    return 0;
}

// Questão 9
int main() {
    int i = 1, produto = 1;

    while (i <= 5) {
        produto *= i;
        i++;
    }

    printf("O produto dos numeros de 1 a 5: %d\n", produto);

    return 0;
}

// Questão 10
int main() {
    int i = 1;

    printf("Tabuada do 9:\n");
    while (i <= 10) {
        printf("9 x %d = %d\n", i, 9 * i);
        i++;
    }

    return 0;
}

// Questão 11 
int main() {
    int numero, maior = 0, menor = 0;

    printf("Digite uma sequencia de numeros inteiros (0 para parar):\n");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero > maior || maior == 0)
            maior = numero;
        if (numero < menor || menor == 0)
            menor = numero;
        scanf("%d", &numero);
    }

    printf("Maior valor digitado: %d\n", maior);
    printf("Menor valor digitado: %d\n", menor);

    return 0;
}

// Questão 12
int main() {
    int numero, soma = 0, quantidade_numeros = 0;
    float media;

    printf("Digite uma sequencia de numeros inteiros (-1 para parar):\n");
    scanf("%d", &numero);

    while (numero != -1) {
        soma += numero;
        quantidade_numeros++;
        scanf("%d", &numero);
    }

    media = (float)soma / quantidade_numeros;
    printf("Media dos numeros digitados: %.2f\n", media);

    return 0;
}

// Questão 13
int main() {
    int numero, soma_digitos_cubo = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        int digito = numero % 10;
        soma_digitos_cubo += pow(digito, 3);
        numero /= 10;
    }

    printf("A soma dos digitos elevados ao cubo: %d\n", soma_digitos_cubo);

    return 0;
}

// Questão 14
int main() {
    int i = 1;

    printf("Numeros impares de 1 a 100:\n");
    while (i <= 100) {
        if (i % 2 != 0)
            printf("%d ", i);
        i++;
    }

    printf("\n");

    return 0;
}

// Questão 15
int main() {
    int i = 1;

    printf("Multiplos de 3 no intervalo de 1 a 50:\n");
    while (i <= 50) {
        if (i % 3 == 0)
            printf("%d ", i);
        i++;
    }

    printf("\n");

    return 0;
}

// Questão 16
int main() {
    int notas[5], i, aprovados = 0;

    i = 0;
    while (i < 5) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%d", &notas[i]);
        if (notas[i] >= 7)
            aprovados++;
        i++;
    }

    printf("Quantidade de alunos aprovados: %d\n", aprovados);

    return 0;
}

// Questão 17
int main() {
    int numero, pares = 0;

    printf("Digite uma sequencia de numeros inteiros (0 para parar):\n");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero % 2 == 0)
            pares++;
        else
            break;
        scanf("%d", &numero);
    }

    printf("Quantidade de numeros pares antes do primeiro impar: %d\n", pares);

    return 0;
}

// Questão 18
int main() {
    int numero, pares = 0, impares = 0;

    printf("Digite uma sequencia de numeros inteiros (0 para parar):\n");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero % 2 == 0)
            pares++;
        else
            impares++;
        scanf("%d", &numero);
    }

    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);

    return 0;
}

// Questão 19 
int main() {
    int numero, divisiveis_por_2 = 0, divisiveis_por_3 = 0, divisiveis_por_5 = 0;

    printf("Digite uma sequencia de numeros inteiros (0 para parar):\n");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero % 2 == 0)
            divisiveis_por_2++;
        if (numero % 3 == 0)
            divisiveis_por_3++;
        if (numero % 5 == 0)
            divisiveis_por_5++;
        scanf("%d", &numero);
    }

    printf("Quantidade de numeros divisiveis por 2: %d\n", divisiveis_por_2);
    printf("Quantidade de numeros divisiveis por 3: %d\n", divisiveis_por_3);
    printf("Quantidade de numeros divisiveis por 5: %d\n", divisiveis_por_5);

    return 0;
}

// Questão 20
int main() {
    int numero, soma_divisiveis_por_3 = 0, quantidade_divisiveis_por_3 = 0;
    float media_divisiveis_por_3;

    printf("Digite uma sequencia de numeros inteiros (0 para parar):\n");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero % 3 == 0) {
            soma_divisiveis_por_3 += numero;
            quantidade_divisiveis_por_3++;
        }
        scanf("%d", &numero);
    }

    media_divisiveis_por_3 = (float)soma_divisiveis_por_3 / quantidade_divisiveis_por_3;
    printf("Media dos numeros divisiveis por 3: %.2f\n", media_divisiveis_por_3);

    return 0;
}

// Questão 21
int main() {
    int numero, mais_de_tres_digitos = 0;

    printf("Digite uma sequencia de numeros inteiros (0 para parar):\n");
    scanf("%d", &numero);

    while (numero != 0) {
        if (abs(numero) > 999)
            mais_de_tres_digitos++;
        scanf("%d", &numero);
    }

    printf("Quantidade de numeros com mais de tres digitos: %d\n", mais_de_tres_digitos);

    return 0;
}

// Questão 22
int main() {
    int numero, soma_entre_50_e_100 = 0, quantidade_entre_50_e_100 = 0;
    float media_entre_50_e_100;

    printf("Digite uma sequencia de numeros inteiros (0 para parar):\n");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero >= 50 && numero <= 100) {
            soma_entre_50_e_100 += numero;
            quantidade_entre_50_e_100++;
        }
        scanf("%d", &numero);
    }

    media_entre_50_e_100 = (float)soma_entre_50_e_100 / quantidade_entre_50_e_100;
    printf("Media dos numeros entre 50 e 100: %.2f\n", media_entre_50_e_100);

    return 0;
}

// Questão 23
int main() {
    int numero, menor_positivo_impar = -1;

    printf("Digite uma sequencia de numeros inteiros (0 para parar):\n");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero > 0 && numero % 2 != 0) {
            if (menor_positivo_impar == -1 || numero < menor_positivo_impar)
                menor_positivo_impar = numero;
        }
        scanf("%d", &numero);
    }

    if (menor_positivo_impar != -1)
        printf("Menor valor positivo e impar digitado: %d\n", menor_positivo_impar);
    else
        printf("Nenhum valor positivo e impar foi digitado.\n");

    return 0;
}

// Questão 24
int main() {
    int numero, primeiro_numero = 1, ultimo_numero, pares = 0, impares = 0;

    printf("Digite uma sequencia de numeros inteiros (0 para parar):\n");
    scanf("%d", &numero);
    ultimo_numero = numero;

    while (numero != 0) {
        if (numero % 2 == 0)
            pares++;
        else
            impares++;
        scanf("%d", &numero);
        if (numero != 0)
            ultimo_numero = numero;
    }

    printf("Quantidade de numeros pares entre %d e %d: %d\n", primeiro_numero, ultimo_numero, pares);
    printf("Quantidade de numeros impares entre %d e %d: %d\n", primeiro_numero, ultimo_numero, impares);

    return 0;
}
