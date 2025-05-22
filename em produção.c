#include <stdio.h>
int main(){

int n1, n2, resultado;
char operador;

printf("digite um operador\n");
    scanf(" %c", &operador);

    printf("digite um número\n");
    scanf("%d", &n1);

    printf("digite outro número\n");
    scanf("%d", &n2);


switch (operador){
    case '+':
    resultado = (n1 + n2);
    break;
    
    case '-':
    resultado = (n1 - n2);
    break;
    case '*':
    resultado = (n1 * n2);
    break;
    case '/':
    resultado = (n1 / n2);
    break;
}
printf("o resultado é %d\n", resultado);
       
    return 0;
    
}
