#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[3];
  char codigo[4];
  char nomeCidade[50];
  int populacao;
  float area;
  float pib;
  int pontosTuristicos;
  // Área para entrada de dados
  printf("Digite a letra do estado (A-H): ");
  scanf("%c", &estado);

  printf("Digite o codigo da carta (ex; A01): ")
  scanf("%s", codigo);

  printf("Digite o nome da cidade: ");
  scanf("%s", nomeCidade); // Nota: Para ler o nome da cidade com espaços, use fgets em vez de scanf
  
  printf("populacao: ");
  scanf("%d", &populacao);

  printf("area: ");
  scanf("%f", &area);
  
  printf("PIB (em bilhões): ");
  scanf("%f", &pib);

  printf("Numeros de pontos turisticos: ");
  scanf("%d", &pontosTuristicos);
  // Exibição dos Dados
  printf("\n--- Dados da carta ---\n");
  printf("Estado: %c\n", estado);
  printf("Codigo: %s\n", codigo);
  printf("Nome da Cidade: %s\n", nomeCidade);
  printf("População; %d\n", população);
  printf("Área: %.2f km2\n", area);
    
  return 0;
} 
