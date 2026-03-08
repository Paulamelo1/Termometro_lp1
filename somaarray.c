#include <stdio.h>

int main() {
    int N[5];
    int soma = 0;

    for(int i = 0; i < 5; i++){
        scanf("%d", &N[i]);
    }

    for(int i = 0; i < 5; i++) {
        soma = soma + N[i];
    }

    printf("%d\n", soma);

    return 0;

}