#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // =========================================================
    //  DESAFIO – NÍVEL NOVATO
    //  Comparação de Cartas do Super Trunfo
    // =========================================================
    //
    //  O programa cadastra duas cartas contendo:
    //  Estado, código, nome da cidade, população, área, PIB
    //  e número de pontos turísticos.
    //
    //  Em seguida calcula:
    //  - Densidade populacional
    //  - PIB per capita
    //
    //  Por fim, compara um único atributo (definido no código)
    //  utilizando if / else para determinar a carta vencedora.
    //
    // =========================================================


    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];

    unsigned long int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int pts1, pts2;

    float dens1, dens2;
    float percap1, percap2;


    // =====================================================================
    // Cadastro das Cartas:
    // =====================================================================

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (sigla): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &pop1);

    printf("Area (em km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pts1);


    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (sigla): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &pop2);

    printf("Area (em km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pts2);


    // =====================================================================
    // Cálculo de densidade e PIB per capita
    // =====================================================================
    dens1 = pop1 / area1;
    dens2 = pop2 / area2;

    percap1 = pib1 / pop1;
    percap2 = pib2 / pop2;


    // =====================================================================
    // Comparação de Cartas:
    // Escolha do atributo feita no código (não pelo usuário)
    // =====================================================================

    // Atributos possíveis:
    // 1 = População
    // 2 = Área
    // 3 = PIB
    // 4 = Pontos turísticos
    // 5 = Densidade (menor vence)
    // 6 = PIB per capita

    int atributoEscolhido = 6; // <<< EDITAR AQUI PARA ESCOLHER O ATRIBUTO >>>

    float valor1, valor2; // valores usados para comparar as duas cartas

    // Atribui o valor correto de cada atributo conforme a escolha
    if (atributoEscolhido == 1) {
        valor1 = pop1;
        valor2 = pop2;
    }
    else if (atributoEscolhido == 2) {
        valor1 = area1;
        valor2 = area2;
    }
    else if (atributoEscolhido == 3) {
        valor1 = pib1;
        valor2 = pib2;
    }
    else if (atributoEscolhido == 4) {
        valor1 = pts1;
        valor2 = pts2;
    }
    else if (atributoEscolhido == 5) {
        valor1 = dens1;
        valor2 = dens2;
    }
    else if (atributoEscolhido == 6) {
        valor1 = percap1;
        valor2 = percap2;
    }


    // =====================================================================
    // Exibição dos resultados antes da comparação
    // =====================================================================

    printf("\n======================================================\n");
    printf("Comparacao de Cartas\n");

    switch(atributoEscolhido) {
        case 1: printf("Atributo usado: Populacao\n\n"); break;
        case 2: printf("Atributo usado: Area\n\n"); break;
        case 3: printf("Atributo usado: PIB\n\n"); break;
        case 4: printf("Atributo usado: Pontos Turisticos\n\n"); break;
        case 5: printf("Atributo usado: Densidade Populacional\n\n"); break;
        case 6: printf("Atributo usado: PIB per Capita\n\n"); break;
    }

    printf("Carta 1 - %s (%c): %.2f\n", cidade1, estado1, valor1);
    printf("Carta 2 - %s (%c): %.2f\n\n", cidade2, estado2, valor2);


    // =====================================================================
    // Determinação da carta vencedora
    // =====================================================================

    if (atributoEscolhido == 5) {
        // densidade → MENOR vence
        if (valor1 < valor2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (valor2 < valor1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else {
        // demais atributos → MAIOR vence
        if (valor1 > valor2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (valor2 > valor1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    printf("\n======================================================\n");

    return 0;
}
