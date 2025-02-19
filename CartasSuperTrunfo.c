#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
//Teste Danie Felizardo

int main() {
    char nome[15];  // Para armazenar o nome da cidade
    char letra; // Para armazenar a letra com numero escolhido
    int numero; // Para armazenar o numero de 01 a 04
    int população;  // Para armazenar a população
    float area;     // Para armazenar a área
    float pib;      // Para armazenar o PIB
    int ponto;      // Para armazenar o ponto turistico

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Seja bem-vindo ao Cadastro de cidades: \n");
   
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome); 

    printf("Digite a letra correspondente a cidade de A até H: \n");
    scanf(" %c", &letra);

    printf("Digite um numero correspondente a cidade de 01 até 04: \n");
    scanf("%d", &numero);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area);  

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);  

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &ponto);  

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Irei exibir os dados da carta com as informações que me deu. \n");
    printf("Nome da cidade: %s\n", nome);
    printf("Letra correspondente: %c\n", letra);
    printf("Número da cidade: %d\n", numero);
    printf("População: %d\n", população);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", ponto);




    return 0;
}
