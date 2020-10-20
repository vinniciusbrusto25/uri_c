#include <stdio.h>

int main()
{
    int codigo, qntHoras;
    double valorHora, salario;

    scanf("%d %d %lf", &codigo, &qntHoras, &valorHora);
    salario = qntHoras * valorHora;

    printf("NUMBER = %d\nSALARY = U$ %0.2lf\n", codigo, salario);
    return 0;
}
