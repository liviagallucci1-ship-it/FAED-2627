#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <locale.h>

/*metodo para a classificacao dos alunos
 void classificacao(float nota) {
    if (nota <= 9) {
        printf("Nota insuficiente\n");
    }
    else if (nota <= 14) {
        printf("Nota suficiente\n");
    }
    else if (nota <= 18) {
        printf("Nota bom\n");
    }
    else if (nota == 20) {
        printf("Nota muito bom\n");
    }
}*/

 
/*metodo da calculadora soma
float soma(float num1, float num2) {
    float somax=num1+num2;
    return somax;
    printf("A soma é: %.2f\n", somax); --- segunda opção 
}

 metodo area do triangulo 
float area(float base, float altura) {
    float resultado = (base * altura) / 2 ; 
    return resultado;

}*/

// int main() {

    /*setlocale(LC_ALL, "pt_PT.UTF-8");*/
    //Simule uma calculadora com as operações básicas : adição, subtração, multiplicação e divisão(if - else if).

    /*
    float numero1, numero2, soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro número: ");
    scanf_s("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf_s("%f", &numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;

    printf("\nSoma: %.2f\nSubtração: %.2f\nMultiplicação: %.2f\n", soma, subtracao, multiplicacao);

    if (numero2 != 0) {
        divisao = numero1 / numero2;
        printf("Divisão: %.2f\n", divisao);
    }
    else {
        printf("Não é possivel dividir por zero.\n");
    }
    */

    //Leia um número entre 1 e 12 e, com switch…case, mostre o mês por extenso(1 → "Janeiro", 2 → "Fevereiro", …).
    /*
        int mes;

        printf("Digite um número de 1 a 12: ");
        scanf_s("%d", &mes);

        switch (mes)
        {
        case 1:
            printf("Janeiro");
            break;
        case 2:
            printf("Fevereiro");
            break;
        case 3:
            printf("Março");
            break;
        case 4:
            printf("Abril");
            break;
        case 5:
            printf("Maio");
            break;
        case 6:
            printf("Junho");
            break;
        case 7:
            printf("Julho");
            break;
        case 8:
            printf("Agosto");
            break;
        case 9:
            printf("Setembro");
            break;
        case 10:
            printf("Outubro");
            break;
        case 11:
            printf("Novembro");
            break;
        case 12:
            printf("Dezembro");
            break;

        default:
            printf("Número inválido");
            break;
        }

        return 0;

    }
    */

    //Leia um número e indique se é par ou ímpar

       /* int numero;

        printf("Digite um número inteiro: ");
        scanf_s("%d", &numero);

        if (numero % 2 == 0)
        {
            printf("O número é par. ");
        }
        else
        {
            printf("O número é impar. ");
        }
        return 0;
    }


    //Encontre o maior e o menor número entre três valores.

    float numero1, numero2, numero3;

    printf("Escolha um valor: ");
    scanf_s("%f", &numero1);

    printf("Escolha um valor: ");
    scanf_s("%f", &numero2);

    printf("Escolha um valor: ");
    scanf_s("%f", &numero3);

    if (numero1 > numero2 && numero1 > numero3)
    {
        printf("O maior valor é %f", numero1);
    }
    else if (numero2 > numero1 && numero2 > numero3)
    {
        printf("O maior valor é %f", numero2);
    }
    else
    {
        printf("O maior valor é %f", numero3);
    }
    if (numero1 < numero2 && numero1 < numero3)
    {
        printf("O menor valor é %f", numero1);
    }
    else if (numero2 < numero1 && numero2 < numero3)
    {
        printf("O menor valor é %f", numero2);
    }
    else
    {
        printf("O menor valor é %f", numero3);
    }
    */

    /*
    char nome1[50], nome2[50];
    int idade1, idade2;

    printf("Digite seu nome:\n");
    gets_s(nome1, sizeof(nome1));

    printf("Digite sua idade:\n");
    scanf_s("%d", &idade1);

    // Limpar o Enter que ficou no buffer
    getchar();

    printf("Digite seu nome:\n");
    gets_s(nome2, sizeof(nome2));

    printf("Digite sua idade:\n");
    scanf_s("%d", &idade2);

    if (idade1 > idade2)
    {
        printf("O/A %s e mais velho.\n", nome1);
    }
    else if (idade2 > idade1)
    {
        printf("O/A %s e mais velho.\n", nome2);
    }
    else
    {
        printf("Os dois têm a mesma idade.\n");
    }

    return 0;
    }
    */

    //Leia o número do dia da semana e mostre a sua designação(switch)



/*Exercicio exemplo tabuada

int num1; 

printf("Escreve o numero 1: ");
scanf_s("%d", &num1);

for (int i = 0; i < 11; i++) {
    int resultado = num1 * i;
    printf("%d x %d = %d \n", num1, i, resultado);
}*/

/*Classificacao de vários alunos

char nome[50];
float nota; 
int alunos;

printf("Quantos alunos há: ");
scanf_s("%d", &alunos);

for (int i = 0; i < alunos; i++) {

    printf("Insira a nota do aluno Nº%d: ", i+1);
    scanf_s("%f", &nota);

    classificacao(nota);
}*/

/*teste para metodo - mini calculadora / soma
float num1, num2; 

printf("Insira o primeiro numero: ");
scanf_s("%f", &num1);

printf("Insira o segundo numero: "); 
scanf_s("%f", &num2);
 
printf("%.2f", soma(num1, num2));
*/


/* metodo com area do triangulo
float base, altura; 

printf("Insira a base do triangulo: ");
scanf_s("%f", &base); 

printf("Insira a altura do triangulo: ");
scanf_s("%f", &altura); 

printf("%.2f", area(base, altura)); 

}*/



// exercicio para treinar - teste

// 1. Leia N valores. Depois peça o valor ao utilizador do tipo de dados inteiro dentro do for e some os valores inseridos.No final mostre a soma de todos os números. (for)
  /*  int main() {

        setlocale(LC_ALL, "pt_PT.UTF-8");

        int n, soma; 

        printf("Quantos valores pretende inserir: "); ----------------------- corrigir 
        scanf_s("%d", &n);

        for (int i = 0; i < n; i++) {
            int num1, num2; 

            printf("Insira o primeiro valor inteiro: ");
            scanf_s("%d", &num1); 

            printf("Insira o segundo valor inteiro: ");
            scanf_s("%d", &num2);

            soma = num1 + num2; 

            printf("O resultado da soma é: %d", &soma);

        }


        return 0; 
    }*/

//  2. Leia N valores. Mostre todos os números primos entre 0 e N(ciclos encadeados). (for)
/*int main() {

    setlocale(LC_ALL, "pt_PT.UTF-8"); 

    int n; //Limite maximo dos numeros que queremos analisar


    printf("Introduza um numero "); 
    scanf_s("%d", &n); 

    // Primeiro ciclo: percorre os numeros de 2 ate N
    for (int i = 2; i <= n; i++) { // contador inicia no 2 por ser um numero primo

        int divisores = 0; // Reinicia o contador para cada novo numero

        // Segundo ciclo: procura divisores do numero atual
        for (int j = 2; j < i; j++) { 

            if (i % j == 0) { // Verifica se a divisao e exata
                divisores++; // Encontrou um divisor
            }

        }
        
            // Depois de testar todos os divisores, verifica se e primo
            if (divisores == 0) {
                printf("%d é primo\n", i);
            }
    }

    return 0;
}*/

// 4. Leia notas até aparecer -1. Mostre quantas foram lidas, a média, a maior e a menor. (while)
/*
int main() {

    setlocale(LC_ALL, "pt_PT.UTF-8");

    int nota;
    int quantidade = 0;
    int soma = 0;
    int maior, menor;
    float media;

    // Pedir a primeira nota
    printf("Insira uma nota (-1 para sair): ");
    scanf_s("%d", &nota);

    // Repetir enquanto a nota for diferente de -1
    while (nota != -1) {

        // Na primeira nota, inicializar maior e menor
        if (quantidade == 0) {
            maior = nota;
            menor = nota;
        }

        // Atualizar a maior nota
        if (nota > maior) {
            maior = nota;
        }

        // Atualizar a menor nota
        if (nota < menor) {
            menor = nota;
        }

        // Somar as notas
        soma = soma + nota;

        // Contar as notas introduzidas
        quantidade++;

        // Pedir outra nota
        printf("Insira uma nota (-1 para sair): ");
        scanf_s("%d", &nota);
    }

    // Verificar se foram introduzidas notas
    if (quantidade > 0) {

        // Calcular a média
        media = (float)soma / quantidade;

        printf("\nQuantidade de notas: %d", quantidade);
        printf("\nMedia: %.2f", media);
        printf("\nMaior nota: %d", maior);
        printf("\nMenor nota: %d\n", menor);

    }
    else {
        printf("Nenhuma nota foi introduzida.\n");
    }

    return 0;
}
*/

// 5. Método que recebe 3 preços e devolve o mais baixo

// Funcao que recebe 3 precos e devolve o mais baixo
/*
float baixo(float v1, float v2, float v3) {

    float menor = v1;

    if (v2 < menor) {
        menor = v2;
    }

    if (v3 < menor) {
        menor = v3;
    }

    return menor;
}

int main() {

    setlocale(LC_ALL, "pt_PT.UTF-8");

    float v1, v2, v3, resultado;

    printf("Insira o 1º preço: ");
    scanf_s("%f", &v1);

    printf("Insira o 2º preço: ");
    scanf_s("%f", &v2);

    printf("Insira o 3º preço: ");
    scanf_s("%f", &v3);

    resultado = baixo(v1, v2, v3);

    printf("O preço mais baixo é: %.2f euros", resultado);

    return 0;
}*/

// 6. Método que recebe 3 idades e devolve a mais velha.
/*int velha(int idd1, int idd2, int idd3) {
    int maisvelha = idd1;

    if (idd2 > maisvelha) {
        maisvelha = idd2; 
    }
    if (idd3 > maisvelha){
        maisvelha = idd3; 

    }
    return maisvelha; 

}

int main() {

    setlocale(LC_ALL, "pt_PT.UTF-8");

    int idd1, idd2, idd3, resultado; 

    printf("Insira a 1º idade: ");
    scanf_s("%d", &idd1 );

    printf("Insira a 2º idade: ");
    scanf_s("%d", &idd2); 

    printf("Insira a 3º idade: ");
    scanf_s("%d", &idd3);

    resultado = velha(idd1, idd2, idd3);

    printf("O mais velho é i:  %d", resultado);

    return 0; 
}*/


// Somar até aparecer zero. Pede num inteiros repetidamente. Quando o utilizador introduzir 0 termina a leitura e mostra
//soma dos numeros anteriores. O zero não entra na soma. 
/*int main() {
    int n = 1, soma = 0;
    while (n != 0) {
        printf("Introduza um numero: ");
        scanf_s("%d", &n);
        if (n != 0) {
            soma = soma + n;
        }
    }
    printf("A soma é: %d", soma);
    return 0;
}*/