#include <stdio.h>
#include <stdlib.h>

// função da questão 1
int soma_recursiva (int n){
    if (n == 1){
        return 1;
    }
    else {
        return n + soma_recursiva(n-1);
    }
}

// função da questão 2
int fatorial_recursiva (int n){
    if (n == 1){
        return 1;
    }
    else {
        return n * fatorial_recursiva(n-1);
    }
}

// função da questão 3
int fibonacci (int n){
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

// função da questão 4
void list_recursiva (int n){
    if (n >= 0){
        list_recursiva(n - 1);
        printf ("%d", n);
    }
}
    
// função da questão 5
void list_recursiva_decresc (int n){
    if (n >= 0){
        printf ("%d", n);
        list_recursiva_decresc(n - 1);
    }
}
   
   

int main(){

        int questoes;
        
        printf("Escolha a questao (1 a 5): ");
        scanf("%d", &questoes);
        
        switch (questoes){
            // Questão 1
            case 1:{
                int n;
                printf("Insira um numero inteiro positivo: ");
                scanf("%d", &n);
                printf("A soma dos numeros de 1 ate %d, e: %d\n", n, soma_recursiva(n));
                
                break;
                
            }
            // Questão 2
            case 2:{
                int n;
                printf("Insira um numero inteiro: ");
                scanf("%d", &n);
                printf("O fatorial desse numero e: %d", fatorial_recursiva(n));
                
                break;
            }
            // Questão 3
            case 3:{
                int n;
                printf("Insira um numero inteiro: ");
                scanf("%d", &n);
                printf("O %d-esimo termo da sequencia Fibonacci e: %d\n", n, fibonacci(n));
                
                break;
            }
            // Questão 4
            case 4:{
             int n;
             printf("Insira um numero inteiro positivo: ");
             scanf("%d", &n);
             list_recursiva(n);
             
             break;
            }
            // Questão 5
            case 5:{
             int n;
             printf("Insira um numero inteiro positivo: ");
             scanf("%d", &n);
             list_recursiva_decresc(n);
             
             break;
            }
           
         
        default:
            printf("Escolha uma opcao valida!!! (1 a 5)");
            return 0;
        }
        return 0;
}
