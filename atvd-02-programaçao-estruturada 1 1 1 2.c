#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Questão 1 
int main(){
    int x = 10;
    printf("%d\n",x);
    float y = 5.0;
    printf("%d%f\n",x,y);
    printf("%d %f\n",x,y);
    system ("pause");
    return 0;
}

// Questão 2
int main(){
    int x,z;
    float y;
    scanf("%d",&x);
    scanf("%f",&y);
    scanf("%d%f",&x,&y);
    scanf("%d%d",&x,&z);
    scanf("%d %d",&x,&z);
    system ("pause");
    return 0;
}

// Questão 3
int main(){
    char nome[20];
    printf("Insira seu nome: ");
    scanf("%s", nome);
    printf("Seja bem-vindo(a) %s\n", nome);
    return 0;
}

}
//terminar em casa

// Questão 4 e 5 não precisa fazer

// Questão 6
int main(){
    int valor_1;
    scanf("%d", &valor_1);
    int valor_2;
    scanf("%d", &valor_2);
    int Soma = valor_1 + valor_2;
    printf("O resultado e %d\n",Soma);
    return 0;
}

// Questão 7
int main(){
    float num1;
    scanf("%f", &num1);
    float quadrado = num1 * num1;
    printf("O quadrado desse valor e: %f\n",quadrado);
    return 0;
}

// Questão 8
int main() {
    int ano_nasc; 
    int ano_atual; 
    int idade;

    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &ano_nasc);
    ano_atual = 2024;
    idade = ano_atual - ano_nasc;
    printf("Sua idade e: %d anos\n", idade);
    return 0;
}

// Questão 9
int main(){
    char nome[15];
    printf("Escreva seu nome: ");
    scanf("%s",nome);
    char sobrenome[15];
    printf("Escreva seu sobrenome: ");
    scanf("%s",sobrenome);
    char nome_completo[35];
    strcpy(nome_completo, nome); //para iniciar a string primeiro com o nome
    strcat(nome_completo, " "); // para ter um espaço entre o nome e o sobrenome
    strcat(nome_completo, sobrenome); // para adicionar a parte final da string
    printf("%s\n",nome_completo);
    return 0;
}

// Questão 12
int main(){
    char nome[15];
    printf("Escreva seu nome: ");
    scanf("%s",nome);
    char sobrenome[15];
    printf("Escreva seu sobrenome: ");
    scanf("%s",sobrenome);
    char nome_completo[35];
    strcpy(nome_completo, sobrenome);//para iniciar a string primeiro com o sobrenome
    strcat(nome_completo, " ");// para ter um espaço entre o sobrenome e o nome
    strcat(nome_completo, nome);// para adicionar a parte final da string
    printf("%s\n",nome_completo);
    return 0;
}

// Questão 13
int main(){
    char palavra[30] = " ";
    scanf("%s", palavra);
    printf("tamanho da sua palavra: %lu\n", strlen(palavra));
    return 0;
}

// Questão 14
int main(){
    int numb1;
    printf("insira um numero Inteiro:  ");
    scanf("%d", &numb1);
    if (numb1%2 == 0) {
        printf("É par!!");
    }
    else {
        printf("É impar!!");
    }
    return 0;
}

// Questão 15
int main(){
    int numb1;
    printf("insira um numero Inteiro:  ");
    scanf("%d", &numb1);
    if (numb1 > numb1 + numb1) {
        printf("É negativo!!");
    }
    else {
        printf("É positivo!!");
    }
    return 0;
}

// Questão 16
int main(){
    int num1;
    int num2;
    printf("insira dois numeros separadamente: ");
    scanf("%i", &num1);
    scanf("%i", &num2);
    if (num1 > num2){
       printf("%i", num1);
    }
        else{
             printf("%i", num2);
        }
    return 0;
}

// Questão 17
int main(){
    float altura;
    float peso;
    float imc;
    printf("insira sua altura: ");
    scanf("%f", &altura);
    printf("insira seu peso: ");
    scanf("%f", &peso);
    imc = peso/(altura*altura);
    printf("O seu IMC e: %f", imc);
    return 0;
}

// Questão 18
int main(){
    char nome[30] = " ";
    printf("Digite seu nome completo: ");
    scanf("%s", nome);
    strlen(nome);
    if (strlen(nome) > 5) {
        printf("Contem mais de 5 caracteres");
    }
    else {
        printf("Nao contem mais de 5 caracteres");
    }
    return 0;
}

// Questão 19
int main() {
    char estado_civil[30] = "";
    printf("Insira seu estado civil: ");
    scanf("%s", estado_civil);
    if (strcmp(estado_civil, "solteiro") == 0) {
        printf("Você é Solteiro(a)!!!");
    }
    else if (strcmp(estado_civil, "casado") == 0) {
        printf("Você é Casado(a)!!!");
    }
    else if (strcmp(estado_civil, "separado") == 0) {
        printf("Você é Separado(a)!!!");
    }
    else if (strcmp(estado_civil, "divorciado") == 0) {
        printf("Você é Divorciado(a)!!!");
    }
    else if (strcmp(estado_civil, "viuvo") == 0) {
        printf("Você é Viúvo(a)!!!");
    }
    else {
        printf(" ");
    }
    return 0;
}

// Questão 20
int main(){
    float base;
    float altura;
    float Ar;
    printf("insira o valor da base: ");
    scanf("%f", &base);
    printf("insira o valor da altura: ");
    scanf("%f", &altura);
    Ar = base * altura;
    printf("A área do seu retângulo é: %f\n", Ar);
    return 0;
    
}

// Questão 21
int main() {
    char city[30] = " ";
    printf("Insira o nome da sua cidade: ");
    scanf("%s", city);
    if (strncmp(city, "R", 1) == 0) {
        printf("Começa com a letra R");
    }
    else {
        printf("Não começa com a letra R");
    }
    return 0;
}

// Questão 22
int main() {
    float numb1;
    float numb2;
    float rest;
    printf("Insira dois números decimais: ");
    scanf("%f", &numb1);
    scanf("%f", &numb2);
    rest = (fmod(numb1, numb2));
    printf("O resto dessa divisão é: %.4f\n", rest);
    return 0;
}

// Questão 23 (O prof falou que não precisa fazer)

// Questão 24 (Não precisa fazer)

// Questão 25 (Não precisa fazer)

// Questão 26
int main(){
    char cidade[15];
    printf("Insira o nome da sua cidade: ");
    scanf("%s", cidade);
    char estado[15];
    printf("Insira o nome do seu Estado: ");
    scanf("%s", estado);
    char cidade_estado[30];
    strcpy(cidade_estado, cidade);
    strcat(cidade_estado, ", ");
    strcat(cidade_estado, estado);
    printf("Voce mora em %s\n", cidade_estado);
    return 0;
}

// Questão 27
int main(){
    int year;
    printf("Insira seu ano de nascimento: ");
    scanf("%d", &year);
    printf("Bem_vindo ao nosso programa, nascido em %d!!\n", year);
    return 0;
}

// Questão 28
int main(){
    int numero;
    printf("Insira seu CPF: ");
    scanf("%d", &numero);
    char nome[15];
    printf("Insira seu nome: ");
    scanf("%s", nome);
    char convert_numb[15];
    sprintf(convert_numb, "%d", numero);
    char duo[30];
    strcpy(duo, nome);
    strcat(duo, " ");
    strcat(duo, convert_numb);
    printf("Ola, seja bem vindo %s\n", duo);
    return 0;
}

// Questão 29
int main(){
    char produto[15];
    char tt[60];
    printf("insira o nome do produto: ");
    scanf("%s", produto);
    double preco;
    printf("Insira o valor do produto: ");
    scanf("%lf", preco);
    char simb[15];
    printf("Insira um simbolo de moeda: ");
    scanf("%s", simb);
    char precott [15];
    sprintf(precott, "%.2lf", preco);
    strcpy(tt, produto);
    strcat(tt, " ");
    strcat(tt, simb);
    strcat(tt, precott);
    printf("%s\n", tt);
    return 0;
}

// Questão 30
int main(){
   int numb;
   printf("insira um numero inteiro: ");
   scanf("%d", &numb);
   int dob;
   dob = numb * 2;
   printf("o resultado e: %d", dob); 
    return 0;
}

// Questão 31
int main(){
    char email[30];
    printf("Insira seu e-mail: ");
    scanf("%s", email);
    printf("Obrigado(a) pelo cadastro: %s !!!\n", email); 
    return 0;
}

//Questão 32
int main(){
    int numb1;
    printf("valor1: ");
    scanf("%d", &numb1);
    int numb2;
    printf("valor2: ");
    scanf("%d", &numb2);
    int soma = numb1 + numb2;
    printf("Soma: %d\n", soma);
    int diferenca = numb1 - numb2;
    printf("Diferenca: %d\n", diferenca);
    int produto = numb1 * numb2;
    printf("Produto: %d\n", produto);
    int quociente = numb1 / numb2;
    printf("Quociente: %d\n", quociente);
    return 0;
}

// Questão 33
int main(){
    float base;
    float altura;
    float Area;
    printf("Insira o valor da base do triangulo: ");
    scanf("%f", &base);
    printf("Insira o valor da altura do triangulo: ");
    scanf("%f", &altura);
    Area = (base * altura)/ 2;
    printf("A area do seu triangulo e: %.2f\n", Area);
    return 0;
}

// Questão 34
int main(){
    float raio;
    printf("digite o raio da sua circuferencia: ");
    scanf("%f", &raio);
    float perim;
    perim = 2 * 3.14 * raio;
    printf("O perimetro da sua circunferencia e: %.2f\n", perim);
    return 0;
}

// Questão 35
int main(){
    float base;
    float altura;
    float perim;
    printf("Insira o valor da base do retangulo: ");
    scanf("%f", &base);
    printf("Insira o valor da altura do retangulo: ");
    scanf("%f", &altura);
    perim = 2 * (base * altura);
    printf("O perimetro do seu retangulo e: %.2f\n", perim);
    return 0;
}

// Questão 36
int main(){
    float num1;
    float num2;
    float num3;
    float med;
    printf("Insira tres valores decimais: ");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    med = (num1 + num2 + num3)/3;
    printf("A media aritmetica e: %f", med);
    return 0;
}

// Questão 37
int main(){
    int idade;
    int meses;
    int dias;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    meses = idade * 12;
    dias = idade * 365;
    printf ("Voce ja viveu %d meses e %d dias.\n", meses, dias);
    return 0;
}

// Questão 38
int main(){
    float real;
    float cotdol;
    float dollar;
    printf("Insira um valor em real: R$");
    scanf("%f", &real);
    printf("Insira a cotaçao do dolar: ");
    scanf("%f", &cotdol);
    dollar = real * cotdol;
    printf("Voce tem: US$%.2f", dollar);
    return 0;
}

// Questão 39
int main(){
    float numb1;
    int numb_arredon;
    printf("Insira um numero decimal: ");
    scanf("%f", &numb1);
    numb_arredon = round(numb1);
    printf("%d\n", numb_arredon);
    return 0;
}


// Questão 40
int main(){
    int num1;
    int num2;
    int num3;
    int op;
    printf("Insira tres numeros inteiros:");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    op = (num1 + num2) * num3;
    printf("%d\n", op);
    return 0;
}

// Questão 41
int main(){
    float cels;
    float fahr;
    printf("Digite uma temperatura em Celsius: ");
    scanf("%f", &cels);
    fahr = (cels * 9/5) + 32;
    printf("%.2f Fahrenheit\n", fahr);
    return 0;
}
