#include<stdio.h>
#include<stdlib.h>
#include<math.h>
    float calcular(int a, int b, char operacao) {
        float resultado;
    
    if (operacao == '+') {
        resultado = (float)a + b;
    } else if (operacao == '-') {
        resultado = (float)a -b;
    } else if (operacao == '*') {
        resultado = (float)a * b;
    } else if (operacao == '/') {
        resultado = (float)a / b;
    } else {
        printf("Operação inválida\n");
    }
    return resultado;
}
    int main (void) {
        int a, b;
        char operacao;
        float resultado;

        printf("Digite dois números: \n");
        scanf("%d %d" , &a, &b);
        printf("Digite a operação (+, -, *, /): \n");
        scanf(" %c" , &operacao);
        resultado = calcular(a, b, operacao);
        printf("Resultado: %.2f\n", resultado);
        return 0;
    }

    