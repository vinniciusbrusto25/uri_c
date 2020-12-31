#include <stdio.h>

int main(){
    int hora_inicial, hora_final, tempo=24;
    scanf("%d %d", &hora_inicial, &hora_final);

    if (hora_inicial > hora_final) {
        tempo = ((23 - hora_inicial) + hora_final + 1);
    } else if (hora_inicial < hora_final) {
        tempo = hora_final - hora_inicial;
    }

    printf("O JOGO DUROU %d HORA(S)\n", tempo);

    return 0;
}
