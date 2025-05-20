#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    printf("Bem vindo ao Super trunfo! \n");
    printf("Para começar, cadastre a sua Primeira carta.  \n");

 // CARTA 1
    char carta[2], pontos;
    int codigo,  populacao;
    float PIB, area;


    printf("Atribua um codigo de 1 a 4 para sua cidade: \n");
    scanf("%d", &codigo);

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &carta);

    printf("Digite o n° de habitantes: \n");
    scanf("%d", &populacao);

    printf("Qual a área da sua cidade?: \n");
    scanf("%f", &area);

    printf("Qual o PIB da sua cidade?:\n");
    scanf("%f", &PIB);

    printf("Quantos pontos turísticos tem na sua cidade?: \n");
    scanf("%d", &pontos);

    printf("Seus dados da Carta 1 é: \n");
    printf("- Nome da cidade: %s\n", carta);
    printf("- População: %d\n", populacao);
    printf("-PIB: %.2f bilhões\n", PIB);
    printf("-Numero Pontos turisticos: %d\n", pontos);
    printf("- Area da cidade: %.2f km²\n", area);


    printf("Digite sua segunda carta:  \n");

 // CARTA 2
    char carta2[2], pontos2;
    int codigo2, populacao2;
    float PIB2, area2;


    printf("Atribua um codigo de 1 a 4 para sua cidade: \n");
    scanf("%d", &codigo2);

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &carta2);

    printf("Digite o n° de habitantes: \n");
    scanf("%d", &populacao2);

    printf("Qual a área da sua cidade?: \n");
    scanf("%f", &area2);

    printf("Qual o PIB da sua cidade?:\n");
    scanf("%f", &PIB2);

    printf("Quantos pontos turísticos tem na sua cidade?: \n");
    scanf("%d", &pontos2);

    printf("Seus dados da Carta 1 é: \n");
    printf("- Nome da cidade: %s\n", carta2);
    printf("- População: %d\n", populacao2);
    printf("-PIB: %.2f bilhões\n", PIB2);
    printf("-Numero Pontos turisticos: %d\n", pontos2);
    printf("- Area da cidade: %.2f km²\n", area2);
  
    return 0;
}