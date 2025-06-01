#include <stdio.h>

struct Carta {
    char nome{[50]
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
