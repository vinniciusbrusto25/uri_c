#include <stdio.h>
#define PI 3.14159

int main(){
    double raio, volume;
    scanf("%lf", &raio);
    volume = (4.0 / 3.0) * PI * (raio * raio * raio);
    printf("VOLUME = %0.3lf\n", volume);
    return 0;
}
