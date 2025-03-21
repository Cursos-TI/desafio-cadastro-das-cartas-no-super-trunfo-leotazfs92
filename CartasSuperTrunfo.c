#include <stdio.h>


int main() {

    // Mensagem de boas vindas.
    printf("Seja bem vindo, jogador!\nEspero que esteja pronto para se divertir, competir e conhecer o mundo!\n");
    printf("Você vai nos ajudar a construir o jogo.\nQuero ver se você consegue pesquisar e me responder os dados de algumas cidades.\nPronto?\nLet's Go!!\n\n");
    
    //Declaração das variaveis das cartas 1 e 2.
    char estado1[30], estado2[30], cod_cidade1[30], cod_cidade2[30], nome1[30], nome2[30];
    int populacao1, populacao2, ponto_tur1, ponto_tur2;
    float area1, area2, pib1, pib2;

    //Imprimindo as perguntas para o jogador e solicitando as entradas de dados
    printf("Em qual estado fica essa cidade? \n");
    scanf(" %s", estado1);

    printf("Qual o código da cidade? \n");
    scanf(" %s", cod_cidade1);

    printf("Qual o nome da cidade? \n");
    scanf(" %s", nome1);

    printf("Qual é a população dessa cidade? \n");
    scanf(" %i", &populacao1);

    printf("Qual o tamanho de sua área em km²? \n");
    scanf(" %f", &area1);

    printf("Quanto é o PIB? \n");
    scanf(" %f", &pib1);

    printf("Pra terminar, quantos pontos turísticos ela tem? \n");
    scanf(" %i", &ponto_tur1);

    //Nova mensagem para seguir para os dados da carta 2
    printf("Que bacana, você está se esforçando em suas pesquisas. Vamos para a próxima carta.\n");

    //Imprimindo as perguntas para o jogador e solicitando as entradas de dados
    printf("Em qual estado fica essa cidade? \n");
    scanf(" %s", estado2);

    printf("Qual o código da cidade? \n");
    scanf(" %s", cod_cidade2);

    printf("Qual o nome da cidade? \n");
    scanf(" %s", nome2);

    printf("Qual é a população dessa cidade? \n");
    scanf(" %i", &populacao2);

    printf("Qual o tamanho de sua área em km²? \n");
    scanf(" %f", &area2);

    printf("Quanto é o PIB? \n");
    scanf(" %f", &pib2);

    printf("Pra terminar, quantos pontos turísticos ela tem? \n");
    scanf(" %i", &ponto_tur2);

    //Mensagem de interação com usuário
    printf("Excelente!! Confere aí as informações que você repassou!");

    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    return 0;
}