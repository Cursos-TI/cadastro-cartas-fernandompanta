#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 
    //Definição das varáveis da carta 01
    char estado_1[3], nome_cidade_1[50];
    int cod_carta_1 = 01; // Gerar um código de carta simples a partir da sigla do estado
    int num_habitantes_1, area_km2_1, num_pontos_turisticos_1;
    float pib_1;

    //Definição das varáveis da carta 02
    char estado_2[3], nome_cidade_2[50];
    int cod_carta_2 = 02; // Gerar um código de carta simples a partir da sigla do estado
    int num_habitantes_2, area_km2_2, num_pontos_turisticos_2;
    float pib_2;


  // Área para entrada de dados

     
 //----------------------------- Área de código de cadastro da carta 1 -----------------------------//   
    printf("Bem vindo ao desafio Nivel Novato Super Trunfo"); // Mensagem de boas-vindas
        printf("\n");
        printf("\n");
    printf("Cadastre a primeira Carta.\n"); // Mensagem de cadastro da Carta 1
        printf("\n");
    printf("Estado: "); //Campo de entrada do estado
    scanf("%s", estado_1); //Campo onde o usuário irá escrever a sigla do estado

    printf("Nome da cidade: "); //Campo de entrada do nome da cidade
    scanf("%s", nome_cidade_1); //Campo onde o usuário irá escrever o nome da cidade

    printf("Populacao: "); //Campo de entrada do número de habitantes
    scanf("%d", &num_habitantes_1); //Campo onde o usuário irá escrever o número de habitantes

    printf("Area (km2): "); //Campo de entrada da área da cidade em km²
    scanf("%d", &area_km2_1); //Campo onde o usuário irá escrever a área da cidade em km²

    printf("PIB: "); //Campo de entrada do PIB da cidade
    scanf("%f", &pib_1); //Campo onde o usuário irá escrever o PIB da cidade

    printf("Numero de pontos turisticos: "); //Campo de entrada da quantidade de pontos turísticos
    scanf("%d", &num_pontos_turisticos_1); //Campo onde o usuário irá escrever quantidade de pontos turísticos da cidade
        printf("\n");
    printf("##---------Cadastro da Carta 01 realizada com sucesso-------------------## \n"); // Mensagem de cadastro da Carta 1 realizada com sucesso
 
 
    //----------------------------- Área de código de cadastro da carta 2 -----------------------------// 
        printf("\n");
        printf("\n");
    printf("Cadastre a segunda Carta.\n"); // Mensagem de cadastro da Carta 2
        printf("\n");
    printf("Estado: "); //Campo de entrada do estado
    scanf("%s", estado_2); //Campo onde o usuário irá escrever a sigla do estado

    printf("Nome da cidade: "); //Campo de entrada do nome da cidade
    scanf("%s", nome_cidade_2); //Campo onde o usuário irá escrever o nome da cidade

    printf("Populacao: "); //Campo de entrada do número de habitantes
    scanf("%d", &num_habitantes_2); //Campo onde o usuário irá escrever o número de habitantes

    printf("Area (km2): "); //Campo de entrada da área da cidade em km²
    scanf("%d", &area_km2_2); //Campo onde o usuário irá escrever a área da cidade em km²

    printf("PIB: "); //Campo de entrada do PIB da cidade
    scanf("%f", &pib_2); //Campo onde o usuário irá escrever o PIB da cidade

    printf("Numero de pontos turisticos: "); //Campo de entrada da quantidade de pontos turísticos
    scanf("%d", &num_pontos_turisticos_2); //Campo onde o usuário irá escrever quantidade de pontos turísticos da cidade
        printf("\n");
    printf("##---------Cadastro da Carta 02 realizada com sucesso-------------------## \n"); // Mensagem de cadastro da Carta 2 realizada com sucesso



  // Área para exibição dos dados da cidade

    printf("\n"); //Espaçamento para melhor visualização
    printf("\n"); //Espaçamento para melhor visualização

    //Exibição dos dados da carta 01
    printf("##----------------------------## \n"); //Banner para exibição da carta 01
    printf("##         CARTA 01           ## \n"); //Banner para exibição da carta 01
    printf("##----------------------------## \n"); //Banner para exibição da carta 01
        printf("\n");
    printf("Estado: %s \n", estado_1);
    printf("Codigo da carta: %s%d \n", estado_1, cod_carta_1); // Exibição do código da carta gerado a partir da sigla do estado
    printf("Nome da cidade: %s \n", nome_cidade_1);
    printf("Populacao: %d \n", num_habitantes_1);
    printf("Area (km2): %d \n", area_km2_1);
    printf("PIB: %.2f \n", pib_1);
    printf("Numero de pontos turisticos: %d \n", num_pontos_turisticos_1);
    printf("##----------------------------## \n");
        printf("\n"); //Espaçamento para melhor visualização
        printf("\n"); //Espaçamento para melhor visualização
    
    //Exibição dos dados da carta 02
    printf("##----------------------------## \n"); //Banner para exibição da carta 02
    printf("##         CARTA 02           ## \n"); //banner para exibição da carta 02
    printf("##----------------------------## \n"); //Banner para exibição da carta 02
        printf("\n"); //Espaçamento para melhor visualização
    printf("Estado: %s \n", estado_2);
    printf("Codigo da carta: %s%d \n", estado_2, cod_carta_2);
    printf("Nome da cidade: %s \n", nome_cidade_2);
    printf("Populacao: %d \n", num_habitantes_2);
    printf("Area (km2): %d \n", area_km2_2);
    printf("PIB: %.2f \n", pib_2);
    printf("Numero de pontos turisticos: %d \n", num_pontos_turisticos_2);
    printf("##----------------------------## \n");
        printf("\n");
        printf("\n");




return 0;
} 
