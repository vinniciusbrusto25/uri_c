#include <stdio.h>
#define PI 3.14159

int main()
{
    double raio, A;

    scanf("%lf", &raio);
    A = (raio * raio) * PI;

    printf("A=%0.4lf\n", A);
    return 0;
}
