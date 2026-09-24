#include <stdio.h>
int main()
{

    int opcoes;
    float saldo = 0.0, deposito, saque;

    do {
        printf("MEU BANCO\n");
        printf("1. ver saldo\n");
        printf("2. fazer deposito\n");
        printf("3. fazer saque\n");
        printf("4. sair\n");
        printf("escolha uma opção: ");
        scanf("%d", &opcoes);

        switch (opcoes){
            case 1:
                printf("\nseu saldo atual é: R$%.2f\n", saldo);
                break;

            case 2:
                printf("\ndigite o valor do deposito: R$ ");
                scanf("%f", &deposito);
                if (deposito > 0){
                    saldo += deposito;
                    printf("deposito realizado com sucesso!\n");
                } else {
                    printf("Valor invalido para deposito!");
                }
                break;

            case 3:
                printf("digite o valor para saque: R$ ");
                scanf("%f", &saque);
                if (saque <= saldo){
                    saldo -= saque;
                    printf("\nsaque de R$ %.2f realizado com sucesso! seu saldo atual é de: R$ %.2f\n", saque, saldo);

                } else {
                    printf("\nnão foi possivel realizar o saque. seu saldo atual é de: R$ %.2f\n", saldo);
                }
                break;
            
            case 4:
                printf("\nSaindo do sistema.. até logo!\n");
                break;

            default:
                printf("Opção invalida! tente novamente.\n");
        }

    } while (opcoes != 4);

    return 0;


}