#include <stdio.h>
 
int main(){

     // Declaração de variáveis utilizando arrays, nas variáveis de int e float, para armazenar dados de múltiplas cartas.
     // Será usado o índice [0] para Carta 1 e o índice [1] para Carta 2.

     char estado1, estado2;
     char codigo1[5], codigo2[5];
     char cidade1[30], cidade2[30];
     int populacao[2];
     int pontos_turisticos[2];
     float area[2];
     float pib[2];


     //----- PRIMEIRA CARTA -----

     printf("Informe os dados da primeira carta \n\n");
     // Para adicionar novos atributos à Carta 1, adcione conforme o exemplo:
     // printf("*ATRITBUTO A SER UTILIZADO: *")
     // scanf("ESPECIFICADOR DE FORMATO", VARIÁVEL *se for o caso adcione o índicie[0]*)
     // Use o *getchar()* após o scanf  do codigo para "limpar" o caractere que fica sobrando. Se não usar, o fgets lê o vazio.
     // Use o fgets para inserção das cidades, pois algumas tem nomes compostos.

     printf("Estado: ");
     scanf("%c", &estado1);
     printf("Código: ");
     scanf("%s", codigo1);// Por ser string não é necessário o "&".
     getchar(); 
     printf("Nome da Cidade: ");
     fgets(cidade1, 30, stdin);
     cidade1[strcspn(cidade1, "\n")]='\0';//Use o *='\0'*, para não deixar o espaço em branco apos *Popuação*.
     printf("População: ");
     scanf("%d", &populacao[0]);
     printf("Área (em km²): ");
     scanf("%f", &area[0]);
     printf("PIB (em bihões): ");
     scanf("%f", &pib[0]);
     printf("Número de Pontos Turísticos: ");
     scanf("%d", &pontos_turisticos[0]);

     
     
     // ---LEMBRAR---
     //*TODOS* os atributos adicionados terão de aparecer na apresentação da carta. Exemplo:
     // printf("\nCarta 1\n");
     // printf("*ATRIBUTO ADICIONADO*: ESPECIFICADOR DE FORMATO\n", VARIÁVEL);

     printf("\nCarta 1\n");
     printf("Estado: %c\n", estado1);
     printf("Código: %s\n", codigo1);
     printf("Nome da Cidade: %s\n", cidade1);
     printf("População: %d\n", populacao[0]);
     printf("Área: %.2f km²\n", area[0]);
     printf("PIB: %.2f bilhões de reais\n", pib[0]);
     printf("Número de Pontos Turísticos: %d\n\n", pontos_turisticos[0]);
     
     
     //----- SEGUNDA CARTA -----

     printf("Informe os dados da segunda carta: \n\n");
     // Para adicionar novos atributos à Carta 2, adcione conforme o exemplo:
     // printf("*ATRITBUTO A SER UTILIZADO: *")
     // scanf("ESPECIFICADOR DE FORMATO", VARIÁVEL *se for o caso adcione o índicie[1]*)
     // Use o *getchar()* após o scanf  do codigo para "limpar" o caractere que fica sobrando. Se não usar, o fgets lê o vazio.
     // Use o fgets para inserção das cidades, pois algumas tem nomes compostos.

     printf("Estado: ");
     scanf(" %c", &estado2);  // O espaço antes de %c descarta o '\n' (Enter) deixado pelo scanf anterior no buffer.
     printf("Código: ");
     scanf("%s", codigo2);
     getchar();
     printf("Nome da Cidade: ");
     fgets(cidade2, 30, stdin);
     cidade2[strcspn(cidade2, "\n")]='\0';
     printf("População: ");
     scanf("%d", &populacao[1]);
     printf("Área (em km²): ");
     scanf("%f", &area[1]);
     printf("PIB (em bilhões): ");
     scanf("%f", &pib[1]);
     printf("Número de Pontos Turísticos: ");
     scanf("%d", &pontos_turisticos[1]);
     
     // ---LEMBRAR---
     //*TODOS* os atributos adicionados terão de aparecer na apresentação da carta. Exemplo:
     // printf("\nCarta 2\n");
     // printf("*ATRIBUTO ADICIONADO*: ESPECIFICADOR DE FORMATO\n", VARIÁVEL);

     printf("\nCarta 2\n");
     printf("Estado: %c\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Nome da Cidade: %s\n", cidade2);
     printf("População: %d\n", populacao[1]);
     printf("Área: %.2f km²\n", area[1]);
     printf("PIB: %.2f bilhões de reais\n", pib[1]);
     printf("Número de Pontos Turísticos: %d\n\n", pontos_turisticos[1]);

     return 0;


}
