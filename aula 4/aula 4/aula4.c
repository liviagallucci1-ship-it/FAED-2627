//Exercícios treino da unidade curricular :
//Fundamentos de Algoritmos e Estruturas de Dados

//1. Faça um programa que calcule a área do triangulo.Formula : área = (base x altura) / 2.
/*#define _CRT_SECURE_NO_WARNINGS

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
*/
//2. Faça um programa para verificar o maior de dois números inteiros(Utilize a estrutura if else).
/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <locale.h>

    int main() {

        setlocale(LC_ALL, "pt_PT.UTF-8");

        int numero1, numero2;

        printf("Insira o primeiro número:");
        scanf_s("%d", &numero1);

        printf("Insira o segundo número:");
        scanf_s("%d", &numero2);

        if (numero1 >= numero2) {
            printf("O número 1 é maior %d", numero1);
        }
        else {
            printf("O número 2 é maior %d", numero2);
        }

        return 0;
    }
*/
//3. Leia n valores representativos do pH e mostre, para cada valor, que tipo de solução. Representa : ácida(pH < 7), neutra(pH = 7) ou alcalina(pH > 7) (Utilize a estrutura for).
/*int main() {
    int n, i; 
    float pH; 

    printf("Quantos valores de pH deseja inserir?");
    scanf_s("%d", &n);
   
    for (i = 0; i < n; i++)
    {
        printf("Insira o pH:");
        scanf_s("%f", &pH);
    }
    if (pH < 7)
    {
        printf("Solução ácida\n");
    }
    else if (pH == 7)
    {
        printf("Solução neutra\n");
    }
    else
    {
        printf("Solução alcalina\n");
    }
    return 0; 
}*/
//4. Criar um método que calcule a média de 2 idades.
/*int main() {
    int idade1, idade2; 

}
*/
//Exercícios Extra de treino da unidade curricular:  
//Fundamentos de Algoritmos e Estruturas de Dados
//1. Leia N valores. Depois peça o valor ao utilizador do tipo de dados inteiro dentro do for e some os valores inseridos.No final mostre a soma de todos os números. (for)
/*int main() {
    int qtd, valor, soma = 0;

    printf("Quantidade de valores a inserir: ");
    scanf_s("%d", &qtd); //qtd = 3

    //variavel i=0, 0<3; i->0, i->1, i->2...

    for (int i = 0; i < qtd; i++)
    {
        printf("Digite o valor: ");
        scanf_s("%d", &valor); //valor = 55, 5
        //   0 = 0 + 55
        //   55 = 55 + 5 
        soma = soma + valor;

        // soma = 55
        // soma = 60
    }

    printf("A soma é %d", soma);

    return 0; 

}
*/
//2. Peça o valor.Mostre todos os números primos entre 0 e o valor digitado (ciclos encadeados).(for). 
/*int main() {
    int valor; 

    printf("Digite o valor: ");
    scanf_s("%d", &valor);

// valor % 2 == 0 
    for (int i = 2; i <= valor; i++)
    {
        if (valor % i == 0)
        {
            printf("Valores primos de  %d: %d\n", valor, i);
        }
    }

    return 0;
}*/
//3. Leia os golos marcados por uma equipa num número desconhecido de jogos e, no fim, mostre a média de golos por jogo(while)
int main() {
    int golos, totalgolos = 0, jogos = 0 

    printf("Insira os golos do jogo (-1 para terminar): ");
    scanf_s("%d", &golos);

    while (golos != -1)
    {
        totalGolos = totalGolos + golos;
        jogos++;

        printf("Insira os golos do jogo (-1 para terminar): ");
        scanf_s("%d", &golos);
    }

    if (jogos > 0)
    {
        media = (float)totalGolos / jogos;
        printf("A media de golos por jogo e %.2f\n", media);
    }
    else
    {
        printf("Nao foram introduzidos jogos.\n");
    }

    return 0;
}
}

//4. Leia notas até aparecer - 1. Mostre quantas foram lidas, a média, a
//maior e a menor. (while)
//5. Método que recebe 3 preços e devolve o mais baixo.
//6. Método que recebe 3 idades e devolve a mais velha.