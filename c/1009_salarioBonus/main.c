#include <stdio.h>

int main(){
    char nome[100];
    double salarioFixo, montante, salarioTotal;
    scanf("%s %lf %lf", &nome, &salarioFixo, &montante);
    salarioTotal = (montante * 0.15) + salarioFixo;
    printf("TOTAL = R$ %0.2lf\n", salarioTotal);
    return 0;
}
