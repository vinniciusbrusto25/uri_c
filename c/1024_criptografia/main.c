#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

void criptografar(char *valor);
void deslocarTres(char *valor, int *tamanho);
void inverter(char *valor, int *tamanho);
void deslocaMetade(char *valor, int *tamanho);

int main(){
    char entrada[1000] = "";
    int i;
    unsigned short int vezes=0;

    scanf("%d", &vezes);
    setbuf(stdin, NULL);

    for(i=0; i<vezes; i++) {
        gets(entrada);
        criptografar(entrada);
        puts(entrada);
    }

    return 0;
}

void criptografar(char *valor){
    int tamanho = strlen(valor);
    deslocarTres(valor, &tamanho);
    inverter(valor, &tamanho);
    deslocaMetade(valor, &tamanho);
}

void deslocarTres(char *valor, int *tamanho) {
    int caractere;
    int i;

    for(i=0; i<*tamanho; i++){
        caractere = valor[i];
        bool charIsAlpha = isalpha(caractere);
        if (charIsAlpha) {
            caractere = caractere + 3;
            valor[i] = (char) caractere;
        };
    }
}

void inverter(char *valor, int *tamanho) {
    char aux;
    int i;

    for(i=0; i<(*tamanho/2); i++){
        aux = valor[i];
        valor[i] = valor[*tamanho-1-i];
        valor[*tamanho-1-i] = aux;
    }
}

void deslocaMetade(char *valor, int *tamanho) {
    int indiceMetade = (*tamanho / 2);
    int caractere;
    int i;

    for(i=indiceMetade; i<*tamanho; i++) {
        caractere = valor[i];
        caractere--;
        valor[i] = caractere;
    }
}
