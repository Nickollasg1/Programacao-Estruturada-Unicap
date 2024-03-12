#include <stdio.h>

void troc(int *var1, int *var2);
void dobr(int *numb1, int *numb2);



int main(){
    int questoes;

    printf("Escolha a questao(1 a 5): ");
    scanf("%d", &questoes);

    switch (questoes) {
        // Questão 1
        case 1:{
            char c = 'a';
            char *pc = &c;

            // Letra A
            printf("endereco do c: %p\n", &c);
            printf("valor guardado no c: %c\n", c);

            // Letra B
            printf("Valor do pc: %p\n", pc);
            printf("Valor guardado no endereco de pc: %c\n", *pc);

            //letra C
            printf("Endereco de pc: %p\n", &pc);

            break;
        }
        

        // Questão 2
        case 2:{
            int inteiro = 10;
            float real = 9.99;
            char caracter = 'a';
        
            printf("%d\n", inteiro);
            printf("%f\n", real);
            printf("%c\n", caracter);
        
            int *p_inteiro = &inteiro;
            float *p_real = &real;
            char *p_caracter = &caracter;
        
            *p_inteiro = 20;
            *p_real = 4.99;
            *p_caracter = 'b';
        
            printf("%d\n", inteiro);
            printf("%f\n", real);
            printf("%c\n", caracter);
        
            break;
        }
        // Questão 3
        case 3:{
            int var1, var2;
            printf("digite dois numeros inteiros: ");
            scanf("%d", &var1);
            scanf("%d", &var2);

            int *ponteiro1;
            int *ponteiro2;

            ponteiro1 = &var1;
            ponteiro2 = &var2;

            printf("Numeros escolhidos: %d, %d\n", var1, var2);
            printf("Endereco de memoria do primeiro numero: %p\n", ponteiro1);
            printf("Endereco de memoria do segundo numero: %p\n", ponteiro2);

            break;
        }

        // Questão 4
        case 4:{

            int var1, var2;
            printf("digite dois numeros inteiros: ");
            scanf("%d", &var1);
            scanf("%d", &var2);

            printf("Valores antes da mudanca: A = %d, B = %d\n", var1, var2);
            
            troc(&var1, &var2);

            break;
        }

        // Questão 5
        case 5:{
        
            int numb1, numb2;
            printf("digite dois numeros inteiros: ");
            scanf("%d", &numb1);
            scanf("%d", &numb2);

            printf("Valores escolhidos: %d, %d\n", numb1, numb2);
            
            dobr(&numb1, &numb2);

            break;
        }
        
    default:
        printf("Escolha uma opcao valida (1 a 5)!!!!");
        
    }

        return 0;
    }

// Da questão 4
void troc(int *var1, int *var2){
    int guardar_temp = *var1;
    *var1 = *var2;
    *var2 = guardar_temp;

    printf("Valor apos a mudanca: A = %d, B = %d\n", *var1, *var2);
}

// Da questão 5
void dobr(int *numb1, int *numb2){
    int dobr1;
    int dobr2;

    dobr1 = 2 * *numb1;
    dobr2 = 2 * *numb2;

    printf("O dobro dos valores: %d, %d\n", dobr1, dobr2);
}
