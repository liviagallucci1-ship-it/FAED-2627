//Exercícios treino da unidade curricular :
//Fundamentos de Algoritmos e Estruturas de Dados

//1. Faça um programa que calcule a área do triangulo.Formula : área = (base x altura) / 2.
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_PT.UTF-8");

    float base, altura, area;
    printf("Insira o valor da base do triangulo:");
    scanf_s("%f", &base);

    printf("Insira o valor da altura do triangulo:");
    scanf_s("%f", &altura);

    area = (base * altura) / 2;

    printf("O valor da area é %f", area);

    return 0;
}
//2. Faça um programa para verificar o maior de dois números inteiros(Utilize a estrutura if
//else).
//3. Leia n valores representativos do pH e mostre, para cada valor, que tipo de solução
//representa : ácida(pH < 7), neutra(pH = 7) ou alcalina(pH > 7) (Utilize a estrutura for).
//4. Criar um método que calcule a média de 2 idades.