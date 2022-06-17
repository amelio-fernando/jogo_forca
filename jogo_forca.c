#include <stdio.h>
#include <string.h>
#include "forca-biblioteca.h"

void abertura(){

    printf("*************************\n");
    printf("====> JOGO DA FORCA <====\n");
    printf("*************************\n\n");
}

void letras_chutadas(char *chutes, int *jogada){

    printf("\n");
    printf("\n");

    printf("Letras chutadas: ");

    for(int i = 0; i < *jogada; i++){

    printf(" %c ", chutes[i]);

    }

    printf("\n");
    printf("\n");
}

int main(){

    int teste = 1;
    int jogada = 0;
    char palavraSecreta[30];
    char chutes[26];
    int acertos = 0;
    int erros = 0;

    sprintf(palavraSecreta, "PARALELEPIPEDO");

    do{

        abertura();

        for(int i = 0; i < strlen(palavraSecreta); i++){

            int achou = 0;

            for(int j = 0; j < jogada; j++){
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

    letras_chutadas(&chutes, &jogada);

            char letra;
            printf("Digite uma letra: ");
            scanf(" %c", &letra);
            chutes[jogada] = letra;
            jogada++;
            system("cls"); //esta função nao é portavel, apenas windows

            for(int i = 0; i < strlen(palavraSecreta); i++){

                for(int j = 0; j < jogada; j++){
                    if(chutes[j] == palavraSecreta[i]){
                    acertos++;
                    break;
                    }



            printf("TESTE ACERTOS = %d", acertos);
            printf("TESTE ERROS = %d", erros);


 }while(teste == 1);

return 0;
}
