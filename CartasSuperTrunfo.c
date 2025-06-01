#include <stdio.h>

struct Carta {
    char nome[50]
    int populacao;
    float pib;
    int pontosTuristicos;
 };
 
 int main () {
 struct Carta carta1 = {"Cidade Z", 500000, 120.5, 8};
 struct Carta carta2 = {"Cidade E", 750000, 98.2, 12};

 File *arquivo = fopen("cartas.txt", "w");
if (arquivo == NULL) {
printf("Erro ao abrir o arquivo!\n");
return 1;
}

fprintf(arquivo, "----- Carta 1 ----\n");
fprintf(arquivo, "Nome: %s\n", carta1.nome);
fprintf(arquivo, "População:%d\n", carta1.populacao);
fprintf(arquivo, "PIB: %.2f bilhões\n", carta1.pib;
fprintf(arquivo, "Pontos Turísticos: %d\n\n", carta1.pontosTuristicos);

fprintf(arquivo, "---- Carta 2 ----\n");
fprintf(arquivo, "Nome: %s\n", carta2.nome);
fprintf(arquivo, "População: %d\n", carta2.populacao);
fprintf(arquivo, "Pontos Turistico: %d\n", carta 2.pontosTuristicos);
fclose(arquivo);

printf("Cartas salvas com sucesso no arquivo 'cartas.txt.\n");

return 0;
}