#include <stdio.h>
#include <stdlib.h>
 
void verifValorIgual(int vetor[], int tamanho) {
    int i, j;
    int valoresIguais = 0;

    for (i = 0; i < tamanho; i++) {
        for (j = i + 1; j < tamanho; j++) {
            if (vetor[i] == vetor[j]) {
                valoresIguais = 1;
                printf("Valores iguais encontrados: %d na posicso %d e %d\n", vetor[i], i, j);
            }
        }
    }

    if (!valoresIguais) {
        printf("Nao foram encontrados valores iguais.\n");
    }
}


int main(){
    int questoes;
    // Questão de 1 a 5
    printf("escolha a questao de 1 a 5: ");
    scanf("%d", &questoes);
 
    switch (questoes){
        case 1: {
            int meuVetor[10];
            int maior_elemento;
 
            printf("Insira dez numeros inteiros: ");
            for (int i = 0; i < 10; i++) {
                scanf("%d", &meuVetor[i]);
            }
 
            maior_elemento = meuVetor[0];
            for (int i = 1; i < 10; i++) {
                if (meuVetor[i] > maior_elemento) {
                maior_elemento = meuVetor[i];
                }
            }
            printf("O maior elemento do vetor e: %d\n", maior_elemento);
 
            break;
        }
        case 2: {
            int meuVetor[10];
            int menor_elemento;
 
            printf("Insira dez numeros inteiros: ");
            for (int i = 0; i < 10; i++) {
                scanf("%d", &meuVetor[i]);
            }
 
            menor_elemento = meuVetor[0];
            for (int i = 1; i < 10; i++) {
                if (meuVetor[i] < menor_elemento) {
                menor_elemento = meuVetor[i];
                }
            }
            printf("O menor elemento do vetor e: %d\n", menor_elemento);
 
            break;
        }
        case 3:{
            int meuVetor[10];
            int posicao;
            int maior_elemento;
            printf("Insira dez numeros inteiros: ");
            for (int i = 0; i < 10; i++) {
                scanf("%d", &meuVetor[i]);
            }
            maior_elemento = meuVetor[0];
            for (int i = 1; i < 10; i++) {
                if (meuVetor[i] > maior_elemento) {
                    maior_elemento = meuVetor[i];
                    posicao = i;
                }
            }
            printf("O maior elemento do vetor e: %d e ele esta na posicao: %d\n", maior_elemento, posicao);
            break;
        }        
        case 4:{
            int meuVetor[10];
            int maior_elemento;
 
            printf("Insira dez numeros inteiros: ");
            for (int i = 0; i < 10; i++) {
                scanf("%d", &meuVetor[i]);
            }
 
            maior_elemento = meuVetor[0];
            for (int i = 1; i < 10; i++) {
                if (meuVetor[i] > maior_elemento) {
                    maior_elemento = meuVetor[i];
                }
            }
            int menor_elemento;
            menor_elemento = meuVetor[0];
            for (int i = 1; i < 10; i++) {
                if (meuVetor[i] < menor_elemento) {
                    menor_elemento = meuVetor[i];
                }
            }
            printf("O maior elemento do vetor e: %d e o menor valor e: %d\n", maior_elemento, menor_elemento);
 
            break;
        }
        case 5:{
            int vetor[10];
            int i;

            printf("Insira os valores do vetor: ");
            for (i = 0; i < 10; i++) {
                printf("Digite o valor para a posicao %d: ", i);
                scanf("%d", &vetor[i]);
            }

            verifValorIgual(vetor, 10);

            break;
        }
        default:
            printf("opcao invalida!!!");
            break;
        }
    return 0;
}
