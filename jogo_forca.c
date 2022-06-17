#include <stdio.h>
#include <string.h>

void abertura(){
    printf("*************************\n");
    printf("====> JOGO DA FORCA <====\n");
    printf("*************************\n\n");
}

int main(){

    int teste = 1;
    int jogada = 0;
    char palavraSecreta[30];
    char chutes[26];
    char letra;

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


            printf("\n");
            printf("\n");
            printf("Digite uma letra: ");
            scanf(" %c", &letra);
            chutes[jogada] = letra;
            jogada++;
            system("cls");

 }while(teste == 1);

return 0;
}
