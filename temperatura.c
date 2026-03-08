#include <stdio.h>

int main() {
    float temperatura, convertido;
    int escolha;

    printf("Escolha para qual quer fazer a conversão 1 - Celsius 2 - Fahrenheit: \n");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("digite a temperatura em celsius: ");
        scanf("%f", &temperatura);
        
        convertido = (temperatura * 9/5) +32;

        printf("%.2f °C equivalem a %.2f °F.\n", temperatura, convertido);

    }

    else if (escolha == 2) {
        printf("digite a temperatura em Fahrenheit: ");
        scanf("%f", &temperatura);
        
        convertido = (temperatura - 32) * 5/9;

        printf("%.2f °F equivalem a %.2f °C.\n", temperatura, convertido);

    }
    else{
        printf("Opcao Inválida\n");
    }

    return 0;
}