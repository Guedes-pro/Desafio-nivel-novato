#include <stdio.h>
#include <math.h>
#include <string.h>
 
int main(){

   /*
   ####################################################
   #                    DECLARAÇÃO                    #
   #                        DE                        #
   #                    VARIÁVEIS                     # 
   ####################################################
   */

     // Utilização de arrays, nas variáveis de int e float, para armazenar dados de múltiplas cartas.
     // Será usado o índice [0] para Carta 1 e o índice [1] para Carta 2.

     char estado1, estado2;
     char codigo1[5], codigo2[5];
     char cidade1[30], cidade2[30];
     unsigned int populacao[2];
     unsigned int pontos_turisticos[2];
     float area[2];
     float pib[2];
     float pib_per[2], populcao_den[2];
     float super_poder[2];
     float primeiro_atributo[2];
     float segundo_atributo[2];
     float soma_atributos[2];
     int escolha[2];  //Variável "escolha" para utilização do menu no final
     


   /*
   ################################################
   #                   PRIMEIRA                   #
   #                    CARTA                     # 
   ################################################
   */

     printf("Informe os dados da primeira carta \n\n");
     /*Para adicionar novos atributos à Carta 1, adcione conforme o exemplo:
      printf("*ATRITBUTO A SER UTILIZADO: *")
      scanf("ESPECIFICADOR DE FORMATO", VARIÁVEL *se for o caso adcione o índicie[0]*)*/
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
     scanf("%u", &populacao[0]);
     printf("Área (em km²): ");
     scanf("%f", &area[0]);
     printf("PIB (em bihões): ");
     scanf("%f", &pib[0]);
     printf("Número de Pontos Turísticos: ");
     scanf("%u", &pontos_turisticos[0]);


     // **Cálculo do PIB per Capita, Densidade Demográfica e do Super Poder**
     // Feito a Conversão Explicita na variável população

     pib_per[0] = (pib[0] *  pow(10, 9)) / (float) populacao[0]; 
     populcao_den[0] = (float) populacao[0] / area[0];
     super_poder[0] = (float) populacao[0] + (float) pontos_turisticos[0] + pib[0] + area[0] + pib_per[0] + (1 / populcao_den[0]); 

     
   /*
   ##################################################
   #                   APRESENTAÇÃO                 #
   #                        DA                      #
   #                     1ªCARTA                    # 
   ##################################################
   */
     //*TODOS* os atributos adicionados terão de aparecer na apresentação da carta.
     /* Exemplo:
      printf("\nCarta 1\n");
      printf("*ATRIBUTO ADICIONADO*: ESPECIFICADOR DE FORMATO\n", VARIÁVEL);*/

     printf("\nCarta 1\n");
     printf("Estado: %c\n", estado1);
     printf("Código: %s\n", codigo1);
     printf("Nome da Cidade: %s\n", cidade1);
     printf("População: %u\n", populacao[0]);
     printf("Área: %.2f km²\n", area[0]);
     printf("PIB: %.2f bilhões de reais\n", pib[0]);
     printf("Número de Pontos Turísticos: %u\n", pontos_turisticos[0]);
     printf("Densidade Demográfica: %.2f hab/km²\n", populcao_den[0]);
     printf("PIB per Capita: %.2f reais\n", pib_per[0]);
     printf("Super Poder: %.2f\n\n", super_poder[0]);
     
     

   /*
   ################################################
   #                   SEGUNDA                    #
   #                    CARTA                     # 
   ################################################
   */

     printf("Informe os dados da segunda carta: \n\n");
     /* Para adicionar novos atributos à Carta 2, adcione conforme o exemplo:
      printf("*ATRITBUTO A SER UTILIZADO: *")
      scanf("ESPECIFICADOR DE FORMATO", VARIÁVEL *se for o caso adcione o índicie[1]*)*/
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
     scanf("%u", &populacao[1]);
     printf("Área (em km²): ");
     scanf("%f", &area[1]);
     printf("PIB (em bilhões): ");
     scanf("%f", &pib[1]);
     printf("Número de Pontos Turísticos: ");
     scanf("%u", &pontos_turisticos[1]);

    
     // **Cálculo do PIB per Capita, Densidade Demográfica e do Super Poder**
     // Feito a Conversão Explicita na variável população
    
     pib_per[1] = (pib[1] *  pow(10, 9)) / (float) populacao[1];
     populcao_den[1] = (float) populacao[1] / area[1];
     super_poder[1] = (float) populacao[1] + (float) pontos_turisticos[1] + pib[1] + area[1] + pib_per[1] + (1 / populcao_den[1]); 
     
   /*
   ##################################################
   #                   APRESENTAÇÃO                 #
   #                        DA                      #
   #                     2ªCARTA                    # 
   ##################################################
   */    
     //*TODOS* os atributos adicionados terão de aparecer na apresentação da carta.
     /* Exemplo:
      printf("\nCarta 2\n");
      printf("*ATRIBUTO ADICIONADO*: ESPECIFICADOR DE FORMATO\n", VARIÁVEL);*/

     printf("\nCarta 2\n");
     printf("Estado: %c\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Nome da Cidade: %s\n", cidade2);
     printf("População: %u\n", populacao[1]);
     printf("Área: %.2f km²\n", area[1]);
     printf("PIB: %.2f bilhões de reais\n", pib[1]);
     printf("Número de Pontos Turísticos: %u\n", pontos_turisticos[1]);
     printf("Densidade Demográfica: %.2f hab/km²\n", populcao_den[1]);
     printf("PIB per Capita: %.2f reais\n", pib_per[1]);
     printf("Super Poder: %.2f\n\n", super_poder[1]);



   /*
   ##################################################
   #                   COMPARAÇÃO                   #
   #                   DAS CARTAS                   # 
   ##################################################
   */    
     printf("## Comparação de Cartas: ##\n\n");

     // Menu por meio do switch 

     /*
     ##############################################
     #                  PRIMEIRO                  #
     #                  ATRIBUTO                  #
     ##############################################
     */    

     printf("1ª Rodada!! \n\n");
     printf("Atributos: \n");
     printf("1. População\n");
     printf("2. Área\n");
     printf("3. PIB\n");
     printf("4. Pontos Turísticos\n");
     printf("5. Densidade Demográfica\n");
     printf("6. PIB per Capita\n");
     printf("7. Super Poder\n\n");

     printf("Escolha o primeiro Atributo a ser comparado: ");
     scanf("%d", &escolha[0]); 

     switch (escolha[0]){


        case 1:  //População:
         printf("\nAtributo - População\n");
         printf("Carta 1 (%s): %u\n", cidade1, populacao[0]);
         printf("Carta 2 (%s): %u\n", cidade2, populacao[1]);
         primeiro_atributo[0] = populacao[0];
         primeiro_atributo[1] = populacao[1];

          if(populacao[0] > populacao[1]){
            printf("1ª Rodada - Carta vencedora: Carta 1 (%s)\n\n", cidade1); 
         } else if(populacao[0] < populacao[1]){
            printf("1ª Rodada - Carta vencedora: Carta 2 (%s)\n\n", cidade2); 
         } else {
             printf("1ª Rodada - Empate!! \n\n");
         }
        break;

        case 2:  //Área:
         printf("\nAtributo - Área\n");
         printf("Carta 1 (%s): %.2f\n", cidade1, area[0]);
         printf("Carta 2 (%s): %.2f\n", cidade2, area[1]);
         primeiro_atributo[0] = area[0];
         primeiro_atributo[1] = area[1];

         if(area[0] > area[1]){
            printf("1ª Rodada - Carta vencedora: Carta 1 (%s)\n\n", cidade1); 
         } else if(area[0] < area[1]){
            printf("1ª Rodada - Carta vencedora: Carta 2 (%s)\n\n", cidade2); 
         } else {
            printf("1ª Rodada - Empate!! \n\n");
         }
        break;

        case 3:  //PIB:
         printf("\nAtributo - PIB\n");
         printf("Carta 1 (%s): %.2f\n", cidade1, pib[0]);
         printf("Carta 2 (%s): %.2f\n", cidade2, pib[1]);
         primeiro_atributo[0] = pib[0];
         primeiro_atributo[1] = pib[1];

         if(pib[0] > pib[1]){
            printf("1ª Rodada - Carta vencedora: Carta 1 (%s)\n\n", cidade1); 
         } else if(pib[0] < pib[1]){
            printf("1ª Rodada - Carta vencedora: Carta 2 (%s)\n\n", cidade2); 
         } else {
            printf("1ª Rodada - Empate!! \n\n");
         }
        break;

        case 4:  //Pontos Turísticos:
         printf("\nAtributo - Pontos Turísticos\n");
         printf("Carta 1 (%s): %u\n", cidade1, pontos_turisticos[0]);
         printf("Carta 2 (%s): %u\n", cidade2, pontos_turisticos[1]);
         primeiro_atributo[0] = pontos_turisticos[0];
         primeiro_atributo[1] = pontos_turisticos[1];

         if(pontos_turisticos[0] > pontos_turisticos[1]){
            printf("1ª Rodada - Carta vencedora: Carta 1 (%s)\n\n", cidade1); 
         } else if(pontos_turisticos[0] < pontos_turisticos[1]){
            printf("1ª Rodada - Carta vencedora: Carta 2 (%s)\n\n", cidade2); 
         } else {
            printf("1ª Rodada - Empate!! \n\n");
         }
        break;

        case 5:  //Densidade Demográfica:
         printf("\nAtributo - Densidade Demográfica\n");
         printf("Carta 1 (%s): %.2f\n", cidade1, populcao_den[0]);
         printf("Carta 2 (%s): %.2f\n", cidade2, populcao_den[1]);
         primeiro_atributo[0] = populcao_den[0];
         primeiro_atributo[1] = populcao_den[1];

         if(populcao_den[0] < populcao_den[1]){
            printf("1ª Rodada - Carta vencedora: Carta 1 (%s)\n\n", cidade1); 
         } else if(populcao_den[0] > populcao_den[1]){
            printf("1ª Rodada - Carta vencedora: Carta 2 (%s)\n\n", cidade2); 
         } else {
            printf("1ª Rodada - Empate!! \n\n");
         }
        break;

        case 6:  //PIB per Capita:
         printf("\nAtributo - PIB per Capita\n");
         printf("Carta 1 (%s): %.2f\n", cidade1, pib_per[0]);
         printf("Carta 2 (%s): %.2f\n", cidade2, pib_per[1]);
         primeiro_atributo[0] = pib_per[0];
         primeiro_atributo[1] = pib_per[1];

         if(pib_per[0] > pib_per[1]){
            printf("1ª Rodada - Carta vencedora: Carta 1 (%s)\n\n", cidade1); 
         } else if(pib_per[0] < pib_per[1]){
            printf("1ª Rodada - Carta vencedora: Carta 2 (%s)\n\n", cidade2); 
         } else{
            printf("1ª Rodada - Empate!! \n\n");
         }
        break;

        case 7:  //Super Poder:
         printf("\nAtributo - Super Poder\n");
         printf("Carta 1 (%s): %.2f\n", cidade1, super_poder[0]);
         printf("Carta 2 (%s): %.2f\n", cidade2, super_poder[1]);
         primeiro_atributo[0] = super_poder[0];
         primeiro_atributo[1] = super_poder[1];

         if(super_poder[0] > super_poder[1]){
            printf("1ª Rodada - Carta vencedora: Carta 1 (%s)\n\n", cidade1); 
         } else if(super_poder[0] < super_poder[1]){
            printf("1ª Rodada - Carta vencedora: Carta 2 (%s)\n\n", cidade2); 
         } else{
            printf("1ª Rodada - Empate!! \n\n");
         }
        break;

        default:
         printf("\n### OPÇÃO INVÁLIDA ###\n\n");
     }


     /*
     ##############################################
     #                  SEGUNDO                   #
     #                  ATRIBUTO                  #
     ##############################################
     */    

     printf("2ª Rodada!! \n\n");
     printf("Atributos: \n");
     printf("1. População\n");
     printf("2. Área\n");
     printf("3. PIB\n");
     printf("4. Pontos Turísticos\n");
     printf("5. Densidade Demográfica\n");
     printf("6. PIB per Capita\n");
     printf("7. Super Poder\n\n");

     printf("Escolha o segundo Atributo a ser comparado: ");
     scanf("%d", &escolha[1]); 

     // valor atribuído para eliminar escolhas iguais     
     if (escolha[0] == escolha[1]){
        printf("Você escolheu a mesma opção!!");
     } else {

     switch (escolha[1]){

        case 1:  //População:
         printf("\nAtributo - População\n");
         printf("Carta 1 (%s): %u\n", cidade1, populacao[0]);
         printf("Carta 2 (%s): %u\n", cidade2, populacao[1]);
         segundo_atributo[0] = populacao[0];
         segundo_atributo[1] = populacao[1];

         if(populacao[0] > populacao[1]){
            printf("2ª Rodada - Carta vencedora: Carta 1 (%s)\n\n", cidade1); 
         } else if(populacao[0] < populacao[1]){
            printf("2ª Rodada - Carta vencedora: Carta 2 (%s)\n\n", cidade2); 
         } else {
             printf("2ª Rodada - Empate!! \n\n");
         }
        break;

        case 2:  //Área:
         printf("\nAtributo - Área\n");
         printf("Carta 1 (%s): %.2f\n", cidade1, area[0]);
         printf("Carta 2 (%s): %.2f\n", cidade2, area[1]);
         segundo_atributo[0] = area[0];
         segundo_atributo[1] = area[1];

         if(area[0] > area[1]){
            printf("2ª Rodada - Carta vencedora: Carta 1 (%s)\n\n", cidade1); 
         } else if(area[0] < area[1]){
            printf("2ª Rodada - Carta vencedora: Carta 2 (%s)\n\n", cidade2); 
         } else {
            printf("2ª Rodada - Empate!! \n\n");
         }
        break;

        case 3:  //PIB:
         printf("\nAtributo - PIB\n");
         printf("Carta 1 (%s): %.2f\n", cidade1, pib[0]);
         printf("Carta 2 (%s): %.2f\n", cidade2, pib[1]);
         segundo_atributo[0] = pib[0];
         segundo_atributo[1] = pib[1];

         if(pib[0] > pib[1]){
            printf("2ª Rodada - Carta vencedora: Carta 1 (%s)\n\n", cidade1); 
         } else if(pib[0] < pib[1]){
            printf("2ª Rodada - Carta vencedora: Carta 2 (%s)\n\n", cidade2); 
         } else {
            printf("2ª Rodada - Empate!! \n\n");
         }
        break;

        case 4:  //Pontos Turísticos:
         printf("\nAtributo - Pontos Turísticos\n");
         printf("Carta 1 (%s): %u\n", cidade1, pontos_turisticos[0]);
         printf("Carta 2 (%s): %u\n", cidade2, pontos_turisticos[1]);
         segundo_atributo[0] = pontos_turisticos[0];
         segundo_atributo[1] = pontos_turisticos[1];

         if(pontos_turisticos[0] > pontos_turisticos[1]){
            printf("2ª Rodada - Carta vencedora: Carta 1 (%s)\n\n", cidade1); 
         } else if(pontos_turisticos[0] < pontos_turisticos[1]){
            printf("2ª Rodada - Carta vencedora: Carta 2 (%s)\n\n", cidade2); 
         } else {
            printf("2ª Rodada - Empate!! \n\n");
         }
        break;

        case 5:  //Densidade Demográfica:
         printf("\nAtributo - Densidade Demográfica\n");
         printf("Carta 1 (%s): %.2f\n", cidade1, populcao_den[0]);
         printf("Carta 2 (%s): %.2f\n", cidade2, populcao_den[1]);
         segundo_atributo[0] = populcao_den[0];
         segundo_atributo[1] = populcao_den[1];

         if(populcao_den[0] < populcao_den[1]){
            printf("2ª Rodada - Carta vencedora: Carta 1 (%s)\n\n", cidade1); 
         } else if(populcao_den[0] > populcao_den[1]){
            printf("2ª Rodada - Carta vencedora: Carta 2 (%s)\n\n", cidade2); 
         } else {
            printf("2ª Rodada - Empate!! \n\n");
         }
        break;

        case 6:  //PIB per Capita:
         printf("\nAtributo - PIB per Capita\n");
         printf("Carta 1 (%s): %.2f\n", cidade1, pib_per[0]);
         printf("Carta 2 (%s): %.2f\n", cidade2, pib_per[1]);
         segundo_atributo[0] = pib_per[0];
         segundo_atributo[1] = pib_per[1];

         if(pib_per[0] > pib_per[1]){
            printf("2ª Rodada - Carta vencedora: Carta 1 (%s)\n\n", cidade1); 
         } else if(pib_per[0] < pib_per[1]){
            printf("2ª Rodada - Carta vencedora: Carta 2 (%s)\n\n", cidade2); 
         } else{
            printf("2ª Rodada - Empate!! \n\n");
         }
        break;

        case 7:  //Super Poder:
         printf("\nAtributo - Super Poder\n");
         printf("Carta 1 (%s): %.2f\n", cidade1, super_poder[0]);
         printf("Carta 2 (%s): %.2f\n", cidade2, super_poder[1]);
         segundo_atributo[0] = super_poder[0];
         segundo_atributo[1] = super_poder[1];

         if(super_poder[0] > super_poder[1]){
            printf("2ª Rodada - Carta vencedora: Carta 1 (%s)\n\n", cidade1); 
         } else if(super_poder[0] < super_poder[1]){
            printf("2ª Rodada - Carta vencedora: Carta 2 (%s)\n\n", cidade2); 
         } else{
            printf("2ª Rodada - Empate!! \n\n");
         }
        break;

        default:
         printf("\n### OPÇÃO INVÁLIDA ###\n\n");
     }
    } 
     /*
     ##############################################
     #                   SOMA DE                  #
     #                  ATRIBUTOS                 #
     ##############################################
     */    

     soma_atributos[0] = primeiro_atributo[0] + segundo_atributo[0];
     soma_atributos[1] = primeiro_atributo[1] + segundo_atributo[1];

     printf("Rodada Final: \n\n");

     if (soma_atributos[0] > soma_atributos[1]){
        //carta 1 ganhou a soma
         printf(" A Soma dos Atributos foi:\n");
         printf(" Carta 1 (%s): %.2f\n", cidade1, soma_atributos[0]);
         printf(" Carta 2 (%s): %.2f\n", cidade2, soma_atributos[1]);
         printf(" Parabéns!! A Carta 1 (%s) Ganhou a Rodada!!\n\n", cidade1);
     } else if(soma_atributos[0] < soma_atributos[1]){
        //carta 2 ganhou a soma
         printf(" A Soma dos Atributos foi:\n");
         printf(" Carta 1 (%s): %.2f\n", cidade1, soma_atributos[0]);
         printf(" Carta 2 (%s): %.2f\n", cidade2, soma_atributos[1]);
         printf(" Parabéns!! A Carta 2 (%s) Ganhou a Rodada!!\n\n", cidade2);
     } else {
        // empate
         printf(" Deu Empate!!\n\n");
     }

     return 0;


}
