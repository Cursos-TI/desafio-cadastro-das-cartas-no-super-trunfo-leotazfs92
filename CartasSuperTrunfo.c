#include <stdio.h>


int main() {

    // Mensagem de boas vindas.
    printf("Seja bem vindo, jogador!\nEspero que esteja pronto para se divertir, competir e conhecer o mundo!\n");
    printf("Você vai nos ajudar a construir o jogo.\nQuero ver se você consegue pesquisar e me responder os dados de algumas cidades.\nPronto?\nLet's Go!!\n\n");
    
    //Declaração das variaveis das cartas 1 e 2.
    char estado1[30], estado2[30], cod_carta1[30], cod_carta2[30], nome1[30], nome2[30];
    int populacao1, populacao2, ponto_tur1, ponto_tur2;
    float area1, area2, pib1, pib2;

    //Imprimindo as perguntas para o jogador e solicitando as entradas de dados da carta 1
    printf("Em qual estado fica essa cidade? \n");
    scanf(" %s", estado1);

    printf("Qual o código da carta? \n");
    scanf(" %s", cod_carta1);

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

    //Nova mensagem de interação para seguir para os dados da carta 2
    printf("Que bacana, você está se esforçando em suas pesquisas. Vamos para a próxima carta.\n\n");

    //Imprimindo as perguntas para o jogador e solicitando as entradas de dados da carta 2
    printf("Em qual estado fica essa cidade? \n");
    scanf(" %s", estado2);

    printf("Qual o código da carta? \n");
    scanf(" %s", cod_carta2);

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
    printf("Excelente!! Confere aí as informações que você repassou!\n\n");
    
    //Informações da carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", cod_carta1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %i\n", populacao1);
    printf("Área: %i\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turísticos: %i\n\n", ponto_tur1);

    //Informações da carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", cod_carta2);
    printf(" Nome da Cidade: %s\n", nome2);
    printf("População: %i\n", populacao2);
    printf("Área: %i\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Ponyps Turísticos: %i\n\n", ponto_tur2);

    //Mensagem final
    printf("Parabéns, você foi muito bem!!!!\nEm breve concluiremos!");

    return 0;
}