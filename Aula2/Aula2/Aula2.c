#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "pt_PT.UTF-8");

#pragma region 
	
	//Exercicios com Variaveis
	
	//1 Declare variáveis para armazenar: nome (array de char), idade (int) e altura(float).Atribua valores e mostre - os na consola
	/*char nome[50] = "Livia";
	int idade = 30;
	float altura = 1.61;

	printf("Nome: %s\n", nome);
	printf("Idade: %d\n", idade);
	printf("Altura: %.2f\n", altura);*/

	//2 Leia nome, dia, mês e ano de nascimento e escreva na consola.
	/*char nome[50];
	int dia=0, mes=0, ano=0;

	printf("Digite o seu nome: ");
	scanf("%s", &nome);

	printf("\nDigite o dia de nascimento: ");
	scanf("%d", &dia);

	printf("\nDigite o mes de nascimento: ");
	scanf("%d", &mes);

	printf("\nDigite o ano de nascimento: ");
	scanf("%d", &ano);

	printf("\nNome: %s\n", nome);
	printf("Data de nascimento: %02d/%02d/%d\n", dia, mes, ano);*/

	//3. Fazer um programa para ler o nome e a idade de duas pessoas.
	/*char nome1[50], nome2[50];
	int idade1, idade2;

	printf("Digite o nome da primeira pessoa: ");
	scanf("%s", nome1);

	printf("Digite a idade da primeira pessoa: ");
	scanf("%d", &idade1);

	printf("Digite o nome da segunda pessoa: ");
	scanf("%s", nome2);

	printf("Digite a idade da segunda pessoa: ");
	scanf("%d", &idade2);

	printf("\nPrimeira pessoa: %s, %d anos\n", nome1, idade1);
	printf("Segunda pessoa: %s, %d anos\n", nome2, idade2);*/

	/*4 Fazer um programa para ler nome e salário de dois funcionários.
	char funcionario1[50], funcionario2[50];
	float salario1, salario2; 

	printf("Nome do funcionario: ");
	scanf("%s", funcionario1); 

	printf("Salario do funcionario 1: "); 
	scanf("%f", &salario1); 

	printf("Nome do funcionário 2: ");
	scanf("%s", funcionario2);

	printf("Salário do funcioário 2: ");
	scanf("%f", &salario2); 

	printf("\nFuncionario 1 - Nome: %s | Salario: %.2f euros\n",
		funcionario1, salario1);

	printf("Funcionario 2 - Nome: %s | Salario: %.2f euros\n",
		funcionario2, salario2);*/

	/*5. Fazer um programa para ler o código de uma peça, a sua quantidade e o preço da peça. . (Escrito em formato papel)

	char codigo[50];
	int quantidade; 
	float preco; 

	printf_s("Digite o código da peça:");
	gets_s(codigo, sizeof(codigo));
	getchar(); 

	printf_s("\nDigite a quantidade:");
	scanf_s(" % d", &quantidade); 

	printf_s("Digite o preço da peça:");
	scanf_s("%f", &preco);

	printf_s("Codigo: %s\nQuantidade: %d\nPreco: %.2f", codigo, quantidade, preco); */

#pragma endregion

#pragma region 

	// Exercicios operadores: 
	/*
	1. Crie um programa que leia 3 notas de um aluno e calcule a média aritmética.
	float nota1, nota2, nota3, media;

	printf("Digite nota 1:");
	scanf("%f", &nota1);

	printf("Digite nota 2:");
	scanf("%f", &nota2);

	printf("Digite nota 3:");
	scanf("%f", &nota3);

	media = (nota1 + nota2 + nota3) / 3;

	printf("A média é: %f", media);*/

    /* 2. Faça um programa que leia um número inteiro e o imprima na consola.
	
	int numero; 

	printf("Digite um número inteiro:");
	scanf("%d", &numero);

	printf("Número inteiro: %d", numero); */

	 /*3. Leia um número inteiro e imprima o resultado do quadrado deste número.
	int a,b;

	printf("Digite um numero inteiro:");
	scanf_s("%d", &a);

	b = a * a;

	printf("O seu numero inteiro é %d",b);*/

	/* 
	4. Faça um algoritmo que converta uma temperatura fornecida em graus Fahrenheit para Centígrados.Sugestão: utilize a fórmula C = 5 / 9 (F - 32).

	float fahrenheit, centigrados;
	
	printf("Digite a temperatura em Fahrenheit: "); 
	scanf("%f", &fahrenheit); 

	centigrados = (5.0 / 9.0) * (fahrenheit - 32); 

	printf("A temperatura convertendo para centigrados é: %.2f", centigrados); */
	
	 //5. Faça um programa que calcule a área do triangulo ? Formula : área = (basex altura) / 2
	 
	/*float base, altura, area;

	printf("Digite o valor da base do triângulo: ");
	scanf("%f", &base);

	printf("Digite o valor da altura do triângulo: ");
	scanf("%f", &altura); 

	area = base * altura / 2;

	printf("A área do triângulo é: %.2f", area); */

	/*6. Declare uma constante para PI(3.14159) e calcule a área de um círculo deraio 5.0. Mostre o resultado A= PI * r ^ 2
	
	const float PI = 3.14159;
	float raio = 5.0; 
	float area; 

	area = PI * raio * raio; 

	printf("A área do circulo é : %.2f\n ", area); */

	/* 7. Crie uma calculadora que receba dois números e realize as 4 operações básicas.

	float numero1, numero2, soma, subtracao, multiplicacao, divisao; 

	printf("Digite o primeiro número: "); 
	scanf_s("%f", &numero1);

	printf("Digite o segundo número: "); 
	scanf_s("%f", &numero2); 

	soma = numero1 + numero2;
	subtracao = numero1 - numero2; 
	multiplicacao = numero1 * numero2; 

	printf("\nSoma: %.2f\nSubtração: %.2f\nMultiplicação: %.2f\n",soma, subtracao, multiplicacao);

	if (numero2 != 0) {
		divisao = numero1 / numero2;
		printf("Divisão: %.2f\n", divisao);
}
	else {
	printf("Não é possivel dividir por zero.\n");
}
	*/

	/*8. Fazer um programa para ler nome e salário de dois funcionários.Depois, mostrar a média do salário dos funcionários.
	char funcionario1[50], funcionario2[50];
	float salario1, salario2, media;

	printf("Nome do funcionario 1: ");
	gets_s(funcionario1, 50);

	printf("Salario do funcionario 1: ");
	scanf_s("%f", &salario1);

	getchar();

	printf("Nome do funcionario 2:\n ");
	gets_s(funcionario2, 50);

	printf("Salario do funcionario 2: ");
	scanf_s("%f", &salario2);

	media = (salario1 + salario2) / 2;

	printf("\nFuncionario 1: %s\n", funcionario1);
	printf("Funcionario 2: %s\n", funcionario2);
	printf("Media dos salarios: %.2f euros\n", media);*/
#pragma endregion

#pragma endregion

	// Exercícios: Operações Condicionais


#pragma endregion
	_getch();
	return 0;
}