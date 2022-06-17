#include <stdio.h>
#include <string.h>
#include "forca-biblioteca.h"

int jogada = 0;
char palavraSecreta[30];
char chutes[26];
int acertou = 0;
int erros = 0;

void abertura(){

    printf("*************************\n");
    printf("====> JOGO DA FORCA <====\n");
    printf("*************************\n\n");
}

void letras_chutadas(char *chutes, int *jogada){

    printf("\n");
    printf("\n");

    printf("Letras chutadas: ");

    for(i = 0; i < *jogada; i++){

        printf(" %c ", chutes[i]);

    }
    printf("\n");
    printf("\n");
}

void achou_letra (int *jogada, char *chutes, char *palavraSecreta){

    for(int i = 0; i < strlen(palavraSecreta); i++){
        int achou = 0;

        for(int j = 0; j < *jogada; j++){

            if(chutes[j] == palavraSecreta[i]){

                achou = 1;
                break;
            }
        }
        if(achou){

            printf("%c ", palavraSecreta[i]);
        } else {
            printf("_ ");
          }
    }

    printf("\n");
    printf("TESTE VARIAVEL ACERTOU: = %d", acertou);
    printf("\n");
    printf("TESTE VARIAVEL ERROU: = %d", erros);
    printf("\n");
}

void chute (char *chutes, int *jogadas){

    char letra;

    printf("Digite uma letra: ");

    scanf(" %c", &letra);

    chutes[jogada] = letra;

    jogada++;

    system("cls"); //esta função nao é portavel, apenas windows

}

int main(){

    int teste = 1;

    sprintf(palavraSecreta, "INCONSTITUCIONALISSIMAMENTE");

    do {

        abertura();

        achou_letra(&jogada, &chutes, &palavraSecreta);

        letras_chutadas(&chutes, &jogada);

        chute (&chutes, &jogada);


    } while(teste == 1);

    return 0;
}
