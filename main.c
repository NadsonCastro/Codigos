#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void conversao(op);
int main()
{
    setlocale(LC_ALL,"Portuguese");
    char op;
    printf("Digite C para converter para Celsius e F para converter para Farenheit : ");
    scanf("%c", &op);
    conversao (op);
    return 0;
}
    void conversao (op) {
    float celsius, fare, res;
    switch (op) {
    case 'C' :
        printf("Digite a temperatura em Farenheit : ");
        scanf("%f", &fare);
        res = 5 * (fare-32) / 9;
        printf("A temperatura em Celsius é : %f", res);
        break;
    case 'F':
        printf("Digite a temperatura em Celsius : ");
        scanf("%f", &celsius);
        res = (9 * celsius/5) + 32;
        printf("A temperatura em Farenheit é : %f", res);
        break;
    default:
        printf("Digite uma entrada valida, C ou F!");
        break;
    }
}
