#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    int fatorial = 1;

    for(int i = 1; i <= N; i++) {
        fatorial = fatorial * i;

    }

    printf("%d\n", fatorial);

    return 0;

}
