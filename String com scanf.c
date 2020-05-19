#include <stdio.h>

int main() {
    char nome[50], sobrenome[50];

    printf("Introduza o nome: ");
    scanf("%s", nome);                      /* As variaveis que recebem a string NUNCA são precedidas do &. */
                                            /* A funcão scanf realiza apenas a leitura de uma unica palavra */
    printf("Introduza o sobrenome: ");      /* pois le os caracteres ate encontrar <ESPACO>, <TAB> ou <ENTER>. */
    scanf(" %[^\n]", sobrenome);            /* Para solucionar isso, usa-se o scanf("%[^\n]",ch) */
    printf("%s %s", nome, sobrenome);
    return 0;
}
