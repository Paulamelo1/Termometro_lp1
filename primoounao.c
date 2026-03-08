#include <stdio.h>

int main(){
    int N, i;
    int primo = 1;

    scanf("%d", &N);

    if (N <= 1) {
        primo = 0;
    } else {
        for (i = 2; i <= N / 2; i++) {
            if (N % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo == 1) {
        printf("%d e um numero primo\n", N);
    } else {
        printf("%d nao e um numero primo\n", N);
    }

}