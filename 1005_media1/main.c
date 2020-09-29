#include <stdio.h>
#define pesoA 3.5
#define pesoB 7.5

int main()
{
    double a,b, media;
    scanf("%lf%lf", &a, &b);
    media = ((a * pesoA) + (b * pesoB)) / (pesoA + pesoB);
    printf("MEDIA = %0.5lf\n", media);
    return 0;
}
