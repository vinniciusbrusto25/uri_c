#include <stdio.h>

int main(){
    int codigo, qnt, i;
    double valor, valorTotal = 0;

    for(i = 0; i < 2; i++){
        scanf("%d %d %lf", &codigo, &qnt, &valor);
        valorTotal += qnt * valor;
    }

    printf("VALOR A PAGAR: R$ %0.2lf\n", valorTotal);
    return 0;
}
