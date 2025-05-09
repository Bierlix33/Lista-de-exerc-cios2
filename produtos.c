#include <stdio.h>

int main() {
    int codigo;

    printf("Digite o código do produto (1 a 5): ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Produto: Trident\nPreco: R$ 5.00\n");
            break;
        case 2:
            printf("Produto: Pão\nPreco: R$ 1.50\n");
            break;
        case 3:
            printf("Produto: Leite\nPreco: R$ 4.20\n");
            break;
        case 4:
            printf("Produto: Queijo\nPreco: R$ 10.00\n");
            break;
        case 5:
            printf("Produto: Manteiga\nPreco: R$ 7.50\n");
            break;
        default:
            printf("Codigo invalido! Digite um numero de 1 a 5.\n");
    }

    return 0;
}
