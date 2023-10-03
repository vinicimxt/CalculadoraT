#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 


 {
    char operacao;
    double num1, num2, resultado;

    do {
        printf("Escolha uma operacao:\n");
        printf("1. Soma (+)\n");
        printf("2. Subtracao (-)\n");
        printf("3. Multiplicacao (*)\n");
        printf("4. Divisao (/)\n");
        printf("5. Encerrar o programa\n");
        printf("Digite o numero da operacao desejada: ");
        
        // Lê a escolha do usuário
        scanf(" %c", &operacao);

        if (operacao == '5') {
            printf("Encerrando o programa.\n");
            break;
        }

        if (operacao < '1' || operacao > '4') {
            printf("Operacao invalida. Por favor, escolha uma operacao valida.\n");
            continue;
        }

        printf("Digite o primeiro numero: ");
        scanf("%lf", &num1);
        printf("Digite o segundo numero: ");
        scanf("%lf", &num2);

        switch (operacao) {
            case '1':
                resultado = num1 + num2;
                break;
            case '2':
                resultado = num1 - num2;
                break;
            case '3':
                resultado = num1 * num2;
                break;
            case '4':
                if (num2 != 0) {
                    resultado = num1 / num2;
                } else {
                    printf("Erro! Divisao por zero.\n");
                    continue;
                }
                break;
            default:
                printf("Operacao invalida. Por favor, escolha uma operacao valida.\n");
                continue;
        }

        printf("Resultado: %.2lf\n", resultado);

    } while (1); // Loop infinito, encerrado apenas quando o usuário escolhe a opção 5

    return 0;
}


