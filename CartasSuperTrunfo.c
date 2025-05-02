#include <stdio.h>

//Variáveis com número 1 relacionadas à carta 1. Com número 2 relacionadas à carta 2.

int main(){
    
    char estado1, estado2; //Estado
    char nome_cidade1[15], nome_cidade2[15]; //Nome da cidade
    char cod_carta1[10], cod_carta2[10]; //Código da Carta
    int populacao1, populacao2; //Número de habitantes
    int pontos_turisticos1, pontos_turisticos2; //Pontos Turísticos
    float area1, area2; //Área em Km²
    float pib1, pib2; //PIB
    float pib_cap1, pib_cap2;
    float desin_populacao1, desin_populacao2;

    printf("SUPER TRUNFO\n");

    printf("Carta 1:\n");

    printf("Digite uma letra entre 'A' e 'H' para representar um Estado entre os oito: ");
    scanf("%c", &estado1); //Usuário digita a letra.

    printf("Digite a letra do Estado seguida de um número entre 01 e 04 (ex: A01): ");
    scanf("%s", &cod_carta1); //Usuário digita a letra e o número.

    printf("Agora, o nome da cidade desejada sem acento: ");
    scanf("%s", &nome_cidade1); //Usuário digita o nome da cidade sem os acentos. Acentos não reconhecidos no resultado final.

    printf("O número de habitantes dessa cidade: ");
    scanf("%d", &populacao1); //Usuário digita o número de habitantes, sem pontuação, números inteiros

    printf("Qual a área em km² dessa cidade: ");
    scanf("%f", &area1); //Usuário digita a área da cidade em números flutuantes (decimais)

    printf("Digite o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib1); //Usuário digita o PIB da cidade em números flutuantes (decimais)

    printf("Quantos pontos turísticos tem a cidade: ");
    scanf("%d", &pontos_turisticos1); //Usuário digita número inteiro (sem pontuação)

    printf("\n");
    
    printf("Carta 2:\n");

    printf("Digite uma letra entre 'A' e 'H' para representar um Estado entre os oito: ");
    scanf(" %c", &estado2); //Dei espaço entre as aspas e a porcentagem, para o programa funcionar perfeitamente

    printf("Digite a letra do Estado seguida de um número entre 01 e 04 (ex: A01): ");
    scanf("%s", &cod_carta2);

    printf("Agora, o nome da cidade desejada sem acentos: ");
    scanf("%s", &nome_cidade2);

    printf("O número de habitantes dessa cidade: ");
    scanf("%d", &populacao2);

    printf("Qual a área em km² dessa cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos tem a cidade: ");
    scanf("%d", &pontos_turisticos2);

    pib_cap1 = pib1 / populacao1;
    desin_populacao1 = populacao1 / area1;

    pib_cap2 = pib2 / populacao2;
    desin_populacao2 = populacao2 / area2;

    printf("\n");

    printf("CARTA 1\n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %.2f km² \n PIB: %.2f Bilhões de reais \n Número de Pontos Turísticos: %d \n Densidade Populacional: %.2f \n PIB per Capta: %f \n", estado1, cod_carta1, nome_cidade1, populacao1, area1, pib1, pontos_turisticos1, desin_populacao1, pib_cap1);

    printf("\n");

    printf("CARTA 2\n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %.2f km² \n PIB: %.2f Bilhões de reais \n Número de Pontos Turísticos: %d \n Densidade Populacional: %.2f \n PIB per Capta: %f \n", estado2, cod_carta2, nome_cidade2, populacao2, area2, pib2, pontos_turisticos2, desin_populacao2, pib_cap2);

    return 0;
}