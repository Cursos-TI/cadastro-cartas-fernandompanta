#include <stdio.h> // Inclusão da biblioteca padrão de entrada e saída


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


/*Observação para o Nível Aventureiro em relação ao Nível Novato:

Acrescimo de calculos da Densidade Populacional e PIB per Capita
Correção da unidade de medida de Área na exibição das duas Cartas
Correção da unidade de medida do PIB na exibição das duas Cartas

*/



int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 
    //Definição das varáveis da carta 01
    char estado_1[3], nome_cidade_1[50]; // Variáveis da sigla de estado e nome da cidade da carta 01 do tipo Caracter.
    int cod_carta_1 = 01; // Variável do Código da Carta 01 do tipo Inteiro.
    int num_habitantes_1, num_pontos_turisticos_1; // Variáveis do número de habitantes e quantidade de pontos turísticos da carta 01 do tipo Inteiro.
    float area_km2_1, pib_1; // Variáveis da área da cidade em km² e PIB da carta 01 do tipo Float.
    float densidade_populacional_1; // Variável da densidade populacional da carta 01 do tipo Float.
    float pib_per_capita_1; // Variável do PIB per capita da carta 01 do tipo Float.


    //Definição das varáveis da carta 02
    char estado_2[3], nome_cidade_2[50]; // Variáveis da sigla de estado e nome da cidade da carta 02 do tipo Caracter
    int cod_carta_2 = 02; // Variável do Código da Carta 02 do tipo Inteiro.
    int num_habitantes_2, num_pontos_turisticos_2; // Variáveis do número de habitantes e quantidade de pontos turísticos da carta 02 do tipo Inteiro.
    float area_km2_2, pib_2; // Variáveis da área da cidade em km2 e PIB da carta 02 do tipo Float.
    float densidade_populacional_2; // Variável da densidade populacional da carta 02 do tipo Float.
    float pib_per_capita_2; // Variável do PIB per capita da carta 02 do tipo Float.

  // Área para entrada de dados

     
 //----------------------------- Área de código de cadastro da carta 1 -----------------------------//   
    printf("Bem vindo ao desafio Nivel Novato Super Trunfo"); // Mensagem de boas-vindas
        printf("\n"); //Espaçamento para melhor visualização
        printf("\n"); //Espaçamento para melhor visualização
 
    printf("Cadastre a primeira Carta.\n"); // Mensagem de cadastro da Carta 1
        printf("\n"); //Espaçamento para melhor visualização
    
    printf("Estado: "); //Campo de entrada do estado
    scanf("%s", estado_1); //Campo onde o usuário irá escrever a sigla do estado

    printf("Nome da cidade: "); //Campo de entrada do nome da cidade
    scanf("%s", nome_cidade_1); //Campo onde o usuário irá escrever o nome da cidade

    printf("Populacao: "); //Campo de entrada do número de habitantes
    scanf("%d", &num_habitantes_1); //Campo onde o usuário irá escrever o número de habitantes

    printf("Area (km2): "); //Campo de entrada da área da cidade em km²
    scanf("%f", &area_km2_1); //Campo onde o usuário irá escrever a área da cidade em km²

    printf("PIB: "); //Campo de entrada do PIB da cidade
    scanf("%f", &pib_1); //Campo onde o usuário irá escrever o PIB da cidade

    printf("Numero de pontos turisticos: "); //Campo de entrada da quantidade de pontos turísticos
    scanf("%d", &num_pontos_turisticos_1); //Campo onde o usuário irá escrever quantidade de pontos turísticos da cidade
        
        printf("\n");
        printf("##---------Cadastro da Carta 01 realizada com sucesso-------------------## \n"); // Mensagem de cadastro da Carta 1 realizada com sucesso
 

    //----------------------------- Área de código de cadastro da carta 2 -----------------------------// 

        printf("\n"); //Espaçamento para melhor visualização
        printf("\n"); //Espaçamento para melhor visualização
    
    printf("Cadastre a segunda Carta.\n"); // Mensagem de cadastro da Carta 2
        printf("\n"); //Espaçamento para melhor visualização
    
    printf("Estado: "); //Campo de entrada do estado
    scanf("%s", estado_2); //Campo onde o usuário irá escrever a sigla do estado

    printf("Nome da cidade: "); //Campo de entrada do nome da cidade
    scanf("%s", nome_cidade_2); //Campo onde o usuário irá escrever o nome da cidade

    printf("Populacao: "); //Campo de entrada do número de habitantes
    scanf("%d", &num_habitantes_2); //Campo onde o usuário irá escrever o número de habitantes

    printf("Area (km2): "); //Campo de entrada da área da cidade em km2
    scanf("%f", &area_km2_2); //Campo onde o usuário irá escrever a área da cidade em km2

    printf("PIB: "); //Campo de entrada do PIB da cidade
    scanf("%f", &pib_2); //Campo onde o usuário irá escrever o PIB da cidade

    printf("Numero de pontos turisticos: "); //Campo de entrada da quantidade de pontos turísticos
    scanf("%d", &num_pontos_turisticos_2); //Campo onde o usuário irá escrever quantidade de pontos turísticos da cidade
        
        printf("\n");
        printf("##---------Cadastro da Carta 02 realizada com sucesso-------------------## \n"); // Mensagem de cadastro da Carta 2 realizada com sucesso


//---------------------Área de cáuculo da densidade populacional e PIB per capita da carta 01---------------------//

        densidade_populacional_1 = (float)(num_habitantes_1) / area_km2_1; // Cálculo da densidade populacional da carta 01 a partir do número de habitantes dividido pela área da cidade em km².
        pib_per_capita_1 = (float)(pib_1 * 1000000000) / num_habitantes_1; // Cálculo do PIB per capita da carta 01 a partir do PIB da cidade multiplicado por 1 bilhão dividido pelo número de habitantes da cidade.

//---------------------Área de cáuculo da densidade populacional e PIB per capita da carta 02---------------------//

        densidade_populacional_2 = (float)(num_habitantes_2) / area_km2_2; // Cálculo da densidade populacional da carta 02 a partir do número de habitantes dividido pela área da cidade em km².
        pib_per_capita_2 = (float)(pib_2 * 1000000000) / num_habitantes_2; // Cálculo do PIB per capita da carta 02 a partir do PIB da cidade multiplicado por 1 bilhão dividido pelo número de habitantes da cidade.


  // Área para exibição dos dados da cidade

    printf("\n"); //Espaçamento para melhor visualização
    printf("\n"); //Espaçamento para melhor visualização

    //Exibição dos dados da carta 01
    
    printf("##-----------------------------------------## \n"); //Banner para exibição da carta 01
    printf("##                CARTA  01                ## \n"); //Banner para exibição da carta 01
    printf("##-----------------------------------------## \n"); //Banner para exibição da carta 01
        
        printf("|\n"); //Espaçamento para melhor visualização
    
    printf("| Estado: %s \n", estado_1); // Exibição da sigla do state da carta 01
    printf("| Codigo da carta: %s%d \n", estado_1, cod_carta_1); // Exibição do código da carta gerado a partir da sigla do state + código da carta 01
    printf("| Nome da cidade: %s \n", nome_cidade_1); // Exibição do nome da cidade da carta 01
    printf("| Populacao: %d \n", num_habitantes_1); // Exibição do número de habitantes da carta 01
    printf("| Area (km2): %.2f Km2\n", area_km2_1); // Exibição da área da cidade em km2 da carta 01
    printf("| PIB: %.2f bilhoes de reais\n", pib_1); // Exibição do PIB da cidade da carta 01
    printf("| Numero de pontos turisticos: %d \n", num_pontos_turisticos_1); // Exibição da quantidade de pontos turísticos da carta 01
    printf("| Densidade populacional: %.2f hab/km2 \n", densidade_populacional_1); // Exibição da densidade populacional da carta 01
    printf("| PIB per Capita: %.2f reais\n", pib_per_capita_1); // Exibição do PIB per capita da carta 01

    printf("##-----------------------------------------## \n"); // Banner rodapé da carta 01
        
        printf("\n"); //Espaçamento para melhor visualização
        printf("\n"); //Espaçamento para melhor visualização
        printf("-- / / -- / / -- / / -- / / -- / / -- / / -- / / -- / / -- / / -- / / -- / / -- \n"); // Banner de separação entre o cadastro da carta 01 e carta 02
        printf("\n"); //Espaçamento para melhor visualização
        printf("\n"); //Espaçamento para melhor visualização


        //Exibição dos dados da carta 02
    printf("##-----------------------------------------## \n"); //Banner para exibição da carta 02
    printf("##                CARTA  02                ## \n"); //banner para exibição da carta 02
    printf("##-----------------------------------------## \n"); //Banner para exibição da carta 02
        
        printf("|\n"); //Espaçamento para melhor visualização

    printf("| Estado: %s \n", estado_2); // Exibição da sigla do estado da carta 02
    printf("| Codigo da carta: %s%d \n", estado_2, cod_carta_2); // Exibição do código da carta gerado a partir da sigla do estado + código da carta 02
    printf("| Nome da cidade: %s \n", nome_cidade_2); // Exibição do nome da cidade da carta 02
    printf("| Populacao: %d \n", num_habitantes_2); // Exibição do número de habitantes da carta 02
    printf("| Area (km2): %.2f Km2\n", area_km2_2); // Exibição da área da cidade em km2 da carta 02
    printf("| PIB: %.2f bilhoes de reais\n", pib_2); // Exibição do PIB da cidade da carta 02
    printf("| Numero de pontos turisticos: %d \n", num_pontos_turisticos_2); // Exibição da quantidade de pontos turísticos da carta 02
    printf("| Densidade populacional: %.2f hab/km2 \n", densidade_populacional_2); // Exibição da densidade populacional da carta 02
    printf("| PIB per Capita: %.2f reais\n", pib_per_capita_2); // Exibição do PIB per capita da carta 02
    printf("##-----------------------------------------##\n"); // Banner rodapé da carta 02
        
        printf("\n"); //Espaçamento para melhor visualização
        printf("\n"); //Espaçamento para melhor visualização


return 0;
} 
