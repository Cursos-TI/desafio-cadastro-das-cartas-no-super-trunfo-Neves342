#include <stdio.h>

int main() {
    printf(" Desafio Super Trunfo\n");
//Primeira carta
   {
       char Estado = 'A';
       char Codigo[] = "A01";
       char Nome_da_cidade[] = "Sao Paulo";
       int Populacao = 12325000;
       float area = 1521.11;
       double PIB = 699.28;
       int Numero_de_Pontos_Turisticos = 50;
       float Densidade_Populacional = Populacao / area;
       float PIB_per_Capita = PIB * 1000000000 / Populacao; 
       
       printf("Estado: %c \n", Estado);
       
       printf("Codigo: %s \n", Codigo);

       printf("Nome da cidade: %s \n", Nome_da_cidade);
       
       printf("Populacao: %d \n", Populacao);
       
       printf("Area: %.2f km\n", area);
       
       printf("PIB: %.2lf bilhoes de reais \n", PIB);
       
       printf("Numero de Pontos Turisticos: %d \n", Numero_de_Pontos_Turisticos);

       printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional);

       printf("PIB per Capita: %.2f reais\n", PIB_per_Capita);
   }
     printf("\n \n");
//Segunda carta
   {
       char Estado = 'B';
       char Codigo[] = "B02";
       char Nome_da_cidade[] = "Rio de Janeiro";
       int Populacao = 6748000;
       float area = 1200.25;
       double PIB = 300.50;
       int Numero_de_Pontos_Turisticos = 30;
       float Densidade_Populacional = Populacao / area;
       float PIB_per_Capita = PIB * 1000000000 / Populacao; 

       printf("Estado: %c \n", Estado);

       printf("Codigo: %s \n", Codigo);

       printf("Nome da cidade: %s \n", Nome_da_cidade);

       printf("Populacao: %d \n", Populacao);

       printf("Area: %.2f km \n", area);

       printf("PIB: %.2lf bilhoes de reais \n", PIB);

       printf("Numero de Pontos Turisticos: %d \n", Numero_de_Pontos_Turisticos);

       printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional);

       printf("PIB per Capita: %.2f reais\n", PIB_per_Capita);
   
      
getchar(); // Aguarda a entrada do usuário
getchar(); // Adicione mais uma vez se houve uso de `scanf` antes
    return 0;
    
   }}

  
   

  