#include <stdio.h>

int main(){
    char estado;
    char codigo[3];
    char nome[20];
    int populacao = 12325000;
    int populacao2 = 6748000;
    float area = 1521.11;
    float area2 = 1200.25;
    double pib = 699279999988.00;
    double pib2 = 300500000000.00;
    int pontos;
    float densidade;
    float pibpercapta;
    float reais;
    float quociente = (float) populacao / area; // 'populacao' é implicitamente convertido para float
    double quociente2 = (float) pib / populacao; // 'populacao' é implicitamente convertido para float

    float quociente3 = (float) populacao2 / area2; // 'populacao' é implicitamente convertido para float
    double quociente4 = (float) pib2 / populacao2; // 'populacao' é implicitamente convertido para float

    printf("Desafio Aventureiro: Cadastro das Cartas\n");
    printf("\n");

    printf("Carta 1:\n");
    printf("Estado: A\n");
    printf("Código: A01\n");
    printf("Nome da Cidade: São Paulo\n");
    printf("População: 12325000\n");
    printf("Área: 1521.11 km²\n");
    printf("PIB: 699.28 bilhões de reais\n");
    printf("Números de Pontos Turísticos: 50\n");
    printf("Densidade Populacional: %.2f hab/km²\n", quociente);
    printf("PIB per Capita: %.2f reais\n", quociente2);

    
    printf("\n");


    printf("Carta 2:\n");
    printf("Estado: B\n");
    printf("Código: B01\n");
    printf("Nome da Cidade: Rio de Janeiro\n");
    printf("População: 6748000\n");
    printf("Área: 1200.25 km²\n");
    printf("PIB: 300.50 bilhões de reais\n");
    printf("Número de Pontos Turísticos: 30\n");
    printf("Densidade Populacional: %.2f hab/km²\n", quociente3);
    printf("PIB per Capita: %.2f reais\n", quociente4);

    printf("\n");

    return 0;

}
