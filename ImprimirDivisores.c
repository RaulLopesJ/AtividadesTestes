 #include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Numero invalido.\n");
        return 1;
    }

    printf("Os divisores de %d sao: ", num);
    int i;
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

