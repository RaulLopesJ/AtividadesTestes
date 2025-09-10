#include <stdio.h>

long fatorial(int n) {
    if (n < 0) {
        return -1;
    }
    if (n == 0) {
        return 1;
    }
     long res = 1;
     int i;
    for ( i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main() {
    int n, k;

    printf("Digite o numero total de elementos (n): ");
    scanf("%d", &n);

    printf("Digite o numero de elementos por grupo (k): ");
    scanf("%d", &k);

    if (k > n || n < 0 || k < 0) {
        printf("Erro: 'k' nao pode ser maior que 'n' e os numeros nao podem ser negativos.\n");
        return 1;
    }

    long long resultado = fatorial(n) / (fatorial(k) * fatorial(n - k));
    
    printf("A combinacao de %d elementos tomados %d a %d e: %lld\n", n, k, resultado);
    
    return 0;
}
