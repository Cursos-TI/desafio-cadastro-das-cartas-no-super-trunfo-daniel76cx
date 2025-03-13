#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
//Teste Danie Felizardo

int main() {
    char estado1, estado2, codico1[8], codico2[8], cidade1[50], cidade2[50]; //char para apresentação de caracteres.
    float area1, area2, pib1, pib2;// float para apresentar número reais.
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2; // int para números inteiros.


    printf("==============================================================\n");
    printf("=============           Seja Bem Vindo            ============\n");
    printf("========   Por favor coloque as informações da Carta 01 ======\n");
    printf("==============================================================\n");


    printf("Escolha uma letra de A a H para representar o primeiro estado. \n");
    printf("Estado: ");
    scanf(" %c", &estado1); // %c para ler um caractere. O espaço antes do %c é para limpar o buffer do teclado. & é pra armazenas a variavel.

    printf("Escolha entre 01 a 04 para definir o número da carta. \n");
    printf("Número: ");
    scanf(" %2s", codico1); // %2s para ler uma string de 2 caracteres. Não possui & pois o vetor '[]' já é um ponteiro.

    printf("Insira o nome da primeira cidade. \n");
    printf("Nome da cidade: ");
    getchar(); // Limpa o buffer do teclado, para não pegar o \n que ficou no buffer e complementar o fgets abaixo.
    fgets(cidade1, sizeof(cidade1), stdin); // fgets para ler strings com espaços. O sizeof é para limitar o tamanho da string. stdin é para ler do teclado :3

    printf("Insira a quantidade de habitantes da cidade \n");
    printf("População: ");
    scanf(" %d", &populacao1); // %d para ler um número inteiro.

    printf("Insira a área territorial da cidade \n");
    printf("Área km²: ");
    scanf(" %f", &area1); // %f para ler um número real.

    printf("Insira o valor do produto interno bruto da cidade \n");
    printf("PIB: ");
    scanf(" %f", &pib1); // %f para ler um número real.

    printf("Insira a quantidade de pontos turísticos da cidade \n");
    printf("Pontos turisticos: ");
    scanf(" %d", &pontos_turisticos1); // %d para ler um número inteiro.

    //Agora iremos repetir o mesmo processo pra proxima carta colocando agora as variasveis [1] para [2]

    printf("==============================================================\n");
    printf("=============           Seja Bem Vindo            ============\n");
    printf("========   Por favor coloque as informações da Carta 02 =====\n");
    printf("==============================================================\n");

    printf("Escolha uma letra de A a H para representar o segundo estado. \n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Escolha entre 01 a 04 para definir o número da carta. \n");
    printf("Número: ");
    scanf(" %2s", codico2);

    printf("Insira o nome da segunda cidade. \n");
    printf("Nome da cidade: ");
    getchar(); 
    fgets(cidade2, sizeof(cidade2), stdin); 

    printf("Insira a quantidade de habitantes da cidade \n");
    printf("População: ");
    scanf(" %d", &populacao2);

    printf("Insira a área territorial da cidade \n");
    printf("Área km²: ");
    scanf(" %f", &area2);

    printf("Insira o valor do produto interno bruto da cidade \n");
    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Insira a quantidade de pontos turísticos da cidade \n");
    printf("Pontos turisticos: ");
    scanf(" %d", &pontos_turisticos2);

    printf("==============================================================\n");
    printf("============= Informações sobre a Carta 01 ===================\n");
    printf("==============================================================\n");

    printf("Estado: '%c' \n", estado1); //Utilizado %c para mostrar o caracter armazenado
    printf("Codigo: %c%2s \n", estado1, codico1);// Utilizado o %c%2s para que ele pudesse mostrar um caracter e uma string
    printf("Nome da cidade: %s", cidade1); // Utilizado o %s para imprimir uma string armazenada na variável 'cidade1'.
    printf("Populacao: %d \n", populacao1); // Utilizado o %d para imprimir um número inteiro armazenado na variável 'populacao1'.
    printf("Area: %.2f km² \n", area1); // Utilizado o %.2f para imprimir um número real (float) com 2 casas decimais armazenado na variável 'area1'.
    printf("PIB: %.2f bilhões de reais\n", pib1); // Utilizado o %.2f para imprimir um número real (float) com 2 casas decimais armazenado na variável 'pib1'.
    printf("Pontos turisticos: %d \n", pontos_turisticos1); // Utilizado o %d para imprimir um número inteiro armazenado na variável 'pontos_turisticos1'.

    printf("==============================================================\n");
    printf("============= Informações sobre a Carta 02 ===================\n");
    printf("==============================================================\n");

    printf("Estado: '%c' \n", estado2); 
    printf("Codigo: %c%2s \n", estado2, codico2); 
    printf("Nome da cidade: %s", cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Pontos turisticos: %d \n", pontos_turisticos2);

    return 0;

    }


