#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_PT.UTF-8");
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