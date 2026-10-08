#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "pt_PT");

#pragma region Exercicios com Variaveis

	//1
	char nome[50] = "Livia";
	int idade = 30;
	float altura = 1.61;

	printf("Nome: %s\n", nome);
	printf("Idade: %d\n", idade);
	printf("Altura: %.2f\n", altura);



#pragma endregion
	printf("\n");
	_getch();
	return 0;
}