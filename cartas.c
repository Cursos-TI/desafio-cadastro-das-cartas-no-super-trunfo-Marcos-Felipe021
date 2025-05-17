#include<stdio.h>
 // Iremos utilizar um método de agrupar variaveis de diferentes tipos.
struct Carta {
    char estado[3];
    char codigo;
    char nome[50];
    unsigned long int populacao;
    float area;
    double pib;
    int pontos_turisticos;
    double densidade_populacional;
    double pib_per_capita;
    float super_poder;

};

int main() {
  struct Carta carta1 , carta2;

  printf("Digite os dados da carta1 \n");
  printf("Estado(sigla): ");
  scanf("%s",carta1.estado);
  printf("codigo: ");
  scanf("%d", &carta1.codigo);
  printf("nome: ");
  scanf("%s",carta1.nome);
  printf("populção: ");
  scanf("%lu", &carta1.populacao);
  printf("Área (Km²): ");
  scanf("%f",&carta1.area);
  printf("PIB: ");
  scanf("%lf", &carta1.pib);
  printf("Pontos turísticos: ");
  scanf("%d",&carta1.pontos_turisticos);

  carta1.densidade_populacional = (float) carta1.populacao / carta1.area;
  carta1.pib_per_capita = carta1.pib / carta1.populacao;

  carta1.super_poder = (float)carta1.area + carta1.populacao + (float)carta1.pib + carta1.pontos_turisticos + (float)carta1.pib_per_capita +(1.0f /(float)carta1.densidade_populacional);

  

  printf("Digite os dados da carta2 \n");
  printf("Estado(sigla): ");
  scanf("%s",carta2.estado);
  printf("codigo: ");
  scanf("%d", &carta2.codigo);
  printf("nome: ");
  scanf("%s",carta2.nome);
  printf("populção: ");
  scanf("%lu", &carta2.populacao);
  printf("Área (Km²): ");
  scanf("%f",&carta2.area);
  printf("PIB: ");
  scanf("%lf", &carta2.pib);
  printf("Pontos turísticos: ");
  scanf("%d",&carta2.pontos_turisticos);

  carta2.densidade_populacional = (float) carta2.populacao / carta2.area;
  carta2.pib_per_capita = carta2.pib / carta2.populacao;

  carta2.super_poder = (float)carta2.area + carta2.populacao + (float)carta2.pib + carta2.pontos_turisticos + (float)carta2.pib_per_capita +(1.0f /(float)carta2.densidade_populacional);

  printf("\nComparação das cartas\n");
  printf("Populção: Carta %d venceu(%d)\n ", (carta1.populacao > carta2.populacao)? 1: 2, (carta1.populacao > carta2.populacao));
  
  printf("Área: Carta %d venceu (%d)\n", (carta1.area > carta2.area) ? 1: 2, (carta1.area > carta2.area));

   
  printf("PIB: Carta %d venceu (%d)\n", (carta1.pib > carta2.pib) ? 1 : 2, (carta1.pib > carta2.pib));

  
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", (carta1.pontos_turisticos > carta2.pontos_turisticos) ? 1 : 2, (carta1.pontos_turisticos > carta2.pontos_turisticos));

    
  printf("Densidade Populacional: Carta %d venceu (%d)\n", (carta1.densidade_populacional < carta2.densidade_populacional) ? 1 : 2, (carta1.densidade_populacional < carta2.densidade_populacional));

    
  printf("PIB per Capita: Carta %d venceu (%d)\n", (carta1.pib_per_capita > carta2.pib_per_capita) ? 1 : 2, (carta1.pib_per_capita > carta2.pib_per_capita));

    
  printf("Super Poder: Carta %d venceu (%d)\n", (carta1.super_poder > carta2.super_poder) ? 1 : 2, (carta1.super_poder > carta2.super_poder));


    return 0;
  
}