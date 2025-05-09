#include <stdio.h>

int main() {
    double num1, num2, resultado;
    char operacao;

    printf("CALCULADORA SIMPLES\n");
    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operacao);  // espaço antes do %c para ignorar qualquer enter anterior

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2lf\n", resultado);
            } else {
                printf("Erro: divisao por zero!\n");
            }
            break;
        default:
            printf("Operacao invalida.\n");
    }

    return 0;
}
