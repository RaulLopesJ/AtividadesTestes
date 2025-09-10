#include <stdio.h>

int main() {
    int a, b, temp;
    
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &a);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &b);

    int original_a = a;
    int original_b = b;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("O MDC de %d e %d e: %d\n", original_a, original_b, a);

    return 0;
}

