#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    int tam;

    printf("digite sua palavra ou frase: ");
    fgets(texto, 100,stdin);

    tam = strlen(texto);

    if (texto[tam -1] == '\n') {
        tam--;

    }
    printf("Possui %d caracteres com espacos, caso houver.\n", tam);

    return 0;
}