#include <stdio.h>

int main() {
    float nota, soma = 0.0, media;
    int i;

    for (i = 1; i <= 4; i++) {
        printf("Digite a %dª nota: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / 4.0;
    
    printf("\nA media do aluno foi: %.2f\n", media);

    if (media >= 6.0) {
        printf("Situacao: Aprovado por media.\n");   
    } else {
        printf("Situacao: Reprovado.\n");
    }

    return 0;
}
